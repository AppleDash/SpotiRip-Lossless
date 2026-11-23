package spotifyclean

import (
	"encoding/binary"
	"fmt"
)

const cipherContextSize = 0x310

type seekCipher func(state *[744]byte, counter *[16]byte, block uint64) error
type transformCipher func(state *[744]byte, counter *[16]byte) error

type cipher struct {
	header       [12]byte
	state        [744]byte
	counter      [16]byte
	currentBlock uint64
	seek         seekCipher
	transform    transformCipher
}

func newCipher(context []byte, seek seekCipher, transform transformCipher) (*cipher, error) {
	if len(context) != cipherContextSize {
		return nil, fmt.Errorf("cipher context must be %d bytes", cipherContextSize)
	}
	cipher := &cipher{seek: seek, transform: transform}
	copy(cipher.header[:], context[:12])
	copy(cipher.state[:], context[0xc:0xc+744])
	copy(cipher.counter[:], context[0x2f4:0x304])
	cipher.currentBlock = binary.LittleEndian.Uint64(context[0x308:0x310])
	return cipher, nil
}

func (c *cipher) context() []byte {
	context := make([]byte, cipherContextSize)
	copy(context[:12], c.header[:])
	copy(context[0xc:0xc+744], c.state[:])
	copy(context[0x2f4:0x304], c.counter[:])
	binary.LittleEndian.PutUint64(context[0x308:0x310], c.currentBlock)
	return context
}

func (c *cipher) advance() error {
	old := int16(binary.LittleEndian.Uint16(c.state[736:738]))
	if old == 0 {
		if c.transform == nil {
			return fmt.Errorf("extended cipher state transition is unavailable")
		}
		return c.transform(&c.state, &c.counter)
	}
	binary.LittleEndian.PutUint16(c.state[736:738], uint16(old-1))
	c.state[15] = c.state[0xe0+int(c.state[15])]
	if int8(old) == 0 {
		c.state[14] = c.state[0x1e0+int(c.state[14])]
	}
	return nil
}

func (c *cipher) decrypt(offset uint64, data []byte) error {
	if len(data) == 0 {
		return nil
	}
	block := offset >> 4
	if block != c.currentBlock {
		if c.seek == nil {
			return fmt.Errorf("cipher seek to block %d is unavailable", block)
		}
		if err := c.seek(&c.state, &c.counter, block); err != nil {
			return err
		}
		c.currentBlock = block
	}
	position := int(offset & 15)
	for len(data) > 0 {
		available := 16 - position
		count := min(available, len(data))
		for index := 0; index < count; index++ {
			data[index] ^= c.counter[position+index]
		}
		data = data[count:]
		position = 0
		if count == available && len(data) > 0 {
			blockTransform(&c.state, &c.counter)
			if err := c.advance(); err != nil {
				return err
			}
			c.currentBlock++
		}
	}
	return nil
}
