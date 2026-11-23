package spotifyclean

import (
	"bytes"
	"encoding/hex"
	"sync"
	"testing"
)

func testResponse() []byte {
	response, err := hex.DecodeString("0a10000102030405060708090a0b0c0d0e0f120401000000")
	if err != nil {
		panic(err)
	}
	return response
}

func decryptReference(t *testing.T, engine *Engine, offset uint64, size int, expectedHex string) {
	t.Helper()
	data := patternedInput(size)
	if err := engine.Decrypt(offset, data); err != nil {
		t.Fatal(err)
	}
	expected := cipherVector(t, expectedHex)
	if !bytes.Equal(data, expected) {
		t.Fatalf("offset %d mismatch: got %x, expected %x", offset, data, expected)
	}
}

func TestEngineReference(t *testing.T) {
	engine, err := New()
	if err != nil {
		t.Fatal(err)
	}
	defer engine.Close()
	key, err := engine.Derive(testResponse())
	if err != nil {
		t.Fatal(err)
	}
	expectedKey := cipherVector(t, "b3aca47599dbcc946744cf2d4814f66665b88e63035f09f401000000")
	if !bytes.Equal(key, expectedKey) {
		t.Fatalf("key mismatch: got %x, expected %x", key, expectedKey)
	}
	if err := engine.InitCipher(key); err != nil {
		t.Fatal(err)
	}
	decryptReference(t, engine, 0, 64, "3bd34baac741ef271af190dd480e4a2463c9ebbd1c641c0df536e78130f4ab5d9a536252a40c7bb4e18bdc605752e613402d3244d96af6f13d896b1b87cb2556")
	decryptReference(t, engine, 256, 64, "006f1d8df52cde3dd6bd58deab2820e83af60fa4eeb2681077320abd5584352087647505d1f0199fedc76e0da462f0bdb171068b3fc53de19ccd670d0d45e171")
	decryptReference(t, engine, 64, 32, "5a054ae48004cc5507657296d81f238adecf6f65d85e9ad3276bc4eae61c1fc8")
	decryptReference(t, engine, 67, 29, "ed8f0dd74c106c79afe7262883c9d6746cd757e1aa5062cff3f90514c1")
}

func TestEngineRuntimeReset(t *testing.T) {
	engine, err := New()
	if err != nil {
		t.Fatal(err)
	}
	defer engine.Close()
	key, err := engine.Derive(testResponse())
	if err != nil {
		t.Fatal(err)
	}
	if err := engine.InitCipher(key); err != nil {
		t.Fatal(err)
	}
	sharedRuntime.Lock()
	sharedRuntime.uses = 256
	sharedRuntime.Unlock()
	if _, err := New(); err != nil {
		t.Fatal(err)
	}
	decryptReference(t, engine, 256, 64, "006f1d8df52cde3dd6bd58deab2820e83af60fa4eeb2681077320abd5584352087647505d1f0199fedc76e0da462f0bdb171068b3fc53de19ccd670d0d45e171")
}

func TestEngineConcurrent(t *testing.T) {
	var wait sync.WaitGroup
	errors := make(chan error, 4)
	for range 4 {
		wait.Add(1)
		go func() {
			defer wait.Done()
			engine, err := New()
			if err != nil {
				errors <- err
				return
			}
			defer engine.Close()
			key, err := engine.Derive(testResponse())
			if err == nil {
				err = engine.InitCipher(key)
			}
			if err == nil {
				data := patternedInput(64)
				if err = engine.Decrypt(256, data); err == nil {
					expected := cipherVector(t, "006f1d8df52cde3dd6bd58deab2820e83af60fa4eeb2681077320abd5584352087647505d1f0199fedc76e0da462f0bdb171068b3fc53de19ccd670d0d45e171")
					if !bytes.Equal(data, expected) {
						t.Error("concurrent cipher output mismatch")
					}
				}
			}
			if err != nil {
				errors <- err
			}
		}()
	}
	wait.Wait()
	close(errors)
	for err := range errors {
		t.Error(err)
	}
}
