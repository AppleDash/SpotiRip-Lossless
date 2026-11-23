package spotifyclean

import (
	"fmt"
	"sync"

	"github.com/mcbabel/SpotiRip-Lossless/internal/spotifyclean/native"
)

var sharedRuntime = struct {
	sync.Mutex
	runtime *native.Runtime
	uses    int
}{}

func acquireRuntime() (*native.Runtime, error) {
	sharedRuntime.Lock()
	if sharedRuntime.runtime == nil || sharedRuntime.uses >= 256 {
		if sharedRuntime.runtime != nil {
			sharedRuntime.runtime.Close()
		}
		runtime, err := native.New()
		if err != nil {
			sharedRuntime.runtime = nil
			sharedRuntime.Unlock()
			return nil, err
		}
		sharedRuntime.runtime = runtime
		sharedRuntime.uses = 0
	}
	sharedRuntime.uses++
	return sharedRuntime.runtime, nil
}

func releaseRuntime() {
	sharedRuntime.Unlock()
}

type Engine struct {
	cipher *cipher
}

func New() (*Engine, error) {
	_, err := acquireRuntime()
	if err != nil {
		return nil, err
	}
	releaseRuntime()
	return &Engine{}, nil
}

func (e *Engine) Derive(response []byte) ([]byte, error) {
	runtime, err := acquireRuntime()
	if err != nil {
		return nil, err
	}
	defer releaseRuntime()
	return runtime.Derive(response)
}

func (e *Engine) SetEntropy(data []byte) error {
	runtime, err := acquireRuntime()
	if err != nil {
		return err
	}
	defer releaseRuntime()
	return runtime.SetEntropy(data)
}

func (e *Engine) InitCipher(key []byte) error {
	runtime, err := acquireRuntime()
	if err != nil {
		return err
	}
	defer releaseRuntime()
	if err := runtime.InitCipher(key); err != nil {
		return err
	}
	context, err := runtime.CipherState()
	if err != nil {
		return err
	}
	e.cipher, err = newCipher(context, e.seek, e.transform)
	return err
}

func (e *Engine) applyContext(state *[744]byte, counter *[16]byte, context []byte) error {
	updated, err := newCipher(context, nil, nil)
	if err != nil {
		return err
	}
	*state = updated.state
	*counter = updated.counter
	e.cipher.header = updated.header
	e.cipher.currentBlock = updated.currentBlock
	return nil
}

func (e *Engine) seek(state *[744]byte, counter *[16]byte, block uint64) error {
	runtime, err := acquireRuntime()
	if err != nil {
		return err
	}
	defer releaseRuntime()
	if err := runtime.SetCipherState(e.cipher.context()); err != nil {
		return err
	}
	context, err := runtime.SeekCipher(block)
	if err != nil {
		return err
	}
	return e.applyContext(state, counter, context)
}

func (e *Engine) transform(state *[744]byte, counter *[16]byte) error {
	runtime, err := acquireRuntime()
	if err != nil {
		return err
	}
	defer releaseRuntime()
	if err := runtime.SetCipherState(e.cipher.context()); err != nil {
		return err
	}
	context, err := runtime.TransformCipher()
	if err != nil {
		return err
	}
	return e.applyContext(state, counter, context)
}

func (e *Engine) Decrypt(offset uint64, data []byte) error {
	if e.cipher == nil {
		return fmt.Errorf("cipher is not initialized")
	}
	return e.cipher.decrypt(offset, data)
}

func (e *Engine) Close() {
	e.cipher = nil
}
