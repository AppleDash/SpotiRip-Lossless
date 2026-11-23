package spotifyclean

import "encoding/binary"

func blockTransform(state *[744]byte, out *[16]byte) {
	var uStack_38, uStack_40, uStack_48, uStack_50, uStack_58, uVar11, uVar12, uVar13, uVar15, uVar16, uVar17, uVar18, uVar19, uVar20, uVar21, uVar22, uVar23, uVar24, uVar3, uVar4, uVar5 uint32
	uVar20 = stateWord(state, 2)
	uVar15 = stateWord(state, 1)
	uVar16 = stateWord(state, 3)
	uVar19 = stateWord(state, 0)
	uVar18 = table(0x5d15a8, uVar15>>8&0xff) ^
		table(0x5d11a8, uVar15&0xff) ^
		table(0x5d19a8, (uVar15>>0xe&0x3fc)/4) ^
		table(0x5d1da8, uVar15>>0x18) ^ stateWord(state, 5)
	uVar16 = table(0x5d35a8, uVar16>>8&0xff) ^
		table(0x5d31a8, uVar16&0xff) ^
		table(0x5d39a8, (uVar16>>0xe&0x3fc)/4) ^
		table(0x5d3da8, uVar16>>0x18) ^ stateWord(state, 4)
	uVar15 = table(0x5d05a8, uVar19>>8&0xff) ^
		table(0x5d01a8, uVar19&0xff) ^
		table(0x5d09a8, (uVar19>>0xe&0x3fc)/4) ^
		table(0x5d0da8, uVar19>>0x18) ^ stateWord(state, 6)
	uVar19 = table(0x5d45a8, (uVar15>>0xe&0x3fc)/4) ^
		table(0x5d41a8, uVar15>>8&0xff) ^
		table(0x5d49a8, uVar15>>0x18) ^
		table(0x5d4da8, uVar15&0xff) ^ stateWord(state, 8)
	uVar15 = table(0x5d75a8, (uVar16>>0xe&0x3fc)/4) ^
		table(0x5d71a8, uVar16>>8&0xff) ^
		table(0x5d79a8, uVar16>>0x18) ^
		table(0x5d7da8, uVar16&0xff) ^ stateWord(state, 10)
	uVar20 = table(0x5d25a8, uVar20>>8&0xff) ^
		table(0x5d21a8, uVar20&0xff) ^
		table(0x5d29a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5d2da8, uVar20>>0x18) ^ stateWord(state, 7)
	uVar21 = table(0x5d55a8, uVar18>>8&0xff) ^
		table(0x5d51a8, uVar18&0xff) ^
		table(0x5d59a8, (uVar18>>0xe&0x3fc)/4) ^
		table(0x5d5da8, uVar18>>0x18) ^ stateWord(state, 9)
	uVar20 = table(0x5d65a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5d61a8, uVar20>>8&0xff) ^
		table(0x5d69a8, uVar20>>0x18) ^
		table(0x5d6da8, uVar20&0xff) ^ stateWord(state, 0xb)
	uVar16 = table(0x5d95a8, uVar20>>8&0xff) ^
		table(0x5d91a8, uVar21>>0x18) ^
		table(0x5d99a8, uVar15&0xff) ^
		table(0x5d9da8, uVar19>>8&0xff) ^ stateWord(state, 0xc)
	uVar22 = table(0x5da5a8, uVar15>>0x18) ^
		table(0x5da1a8, uVar20&0xff) ^
		table(0x5da9a8, uVar19&0xff) ^
		table(0x5dada8, (uVar21>>0xe&0x3fc)/4) ^ stateWord(state, 0xe)
	uVar18 = table(0x5db5a8, uVar19>>0x18) ^
		table(0x5db1a8, (uVar15>>0xe&0x3fc)/4) ^
		table(0x5db9a8, uVar21>>8&0xff) ^
		table(0x5dbda8, uVar20>>0x18) ^ stateWord(state, 0xf)
	uStack_48 = uint32(byte(uVar21))
	uVar20 = table(0x5d85a8, uint32(byte(uStack_48))) ^
		table(0x5d81a8, (uVar19>>0xe&0x3fc)/4) ^
		table(0x5d89a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5d8da8, uVar15>>8&0xff) ^ stateWord(state, 0xd)
	uVar15 = table(0x5df5a8, uVar20>>8&0xff) ^
		table(0x5df1a8, uVar18&0xff) ^
		table(0x5df9a8, uVar16>>8&0xff) ^
		table(0x5dfda8, uVar22>>8&0xff) ^ stateWord(state, 0x11)
	uVar21 = table(0x5de5a8, uVar18>>8&0xff) ^
		table(0x5de1a8, (uVar22>>0xe&0x3fc)/4) ^
		table(0x5de9a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5deda8, (uVar16>>0xe&0x3fc)/4) ^ stateWord(state, 0x10)
	uVar19 = table(0x5dc5a8, uVar16&0xff) ^
		table(0x5dc1a8, uVar20&0xff) ^
		table(0x5dc9a8, uVar22&0xff) ^
		table(0x5dcda8, uVar18>>0x18) ^ stateWord(state, 0x13)
	uVar20 = table(0x5dd5a8, uVar22>>0x18) ^
		table(0x5dd1a8, uVar16>>0x18) ^
		table(0x5dd9a8, (uVar18>>0xe&0x3fc)/4) ^
		table(0x5ddda8, uVar20>>0x18) ^ stateWord(state, 0x12)
	uVar22 = table(0x5e35a8, uVar19&0xff) ^
		table(0x5e31a8, uVar15>>8&0xff) ^
		table(0x5e39a8, uVar20&0xff) ^
		table(0x5e3da8, uVar21>>8&0xff) ^ stateWord(state, 0x16)
	uVar16 = table(0x5e25a8, (uVar15>>0xe&0x3fc)/4) ^
		table(0x5e21a8, (uVar21>>0xe&0x3fc)/4) ^
		table(0x5e29a8, uVar19>>8&0xff) ^
		table(0x5e2da8, uVar20>>8&0xff) ^ stateWord(state, 0x14)
	uVar18 = table(0x5e15a8, uVar21>>0x18) ^
		table(0x5e11a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5e19a8, uVar15>>0x18) ^
		table(0x5e1da8, (uVar19>>0xe&0x3fc)/4) ^ stateWord(state, 0x15)
	uVar20 = table(0x5e05a8, uVar20>>0x18) ^
		table(0x5e01a8, uVar19>>0x18) ^
		table(0x5e09a8, uVar21&0xff) ^
		table(0x5e0da8, uVar15&0xff) ^ stateWord(state, 0x17)
	uVar19 = table(0x5db5a8, uVar20&0xff) ^
		table(0x5db1a8, uVar22>>0x18) ^
		table(0x5db9a8, uVar18>>8&0xff) ^
		table(0x5dbda8, (uVar16>>0xe&0x3fc)/4) ^ stateWord(state, 0x1a)
	uVar21 = table(0x5d85a8, uVar18&0xff) ^
		table(0x5d81a8, uVar20>>0x18) ^
		table(0x5d89a8, uVar16>>8&0xff) ^
		table(0x5d8da8, (uVar22>>0xe&0x3fc)/4) ^ stateWord(state, 0x1b)
	uVar15 = table(0x5d95a8, uVar16&0xff) ^
		table(0x5d91a8, uVar18>>0x18) ^
		table(0x5d99a8, uVar22>>8&0xff) ^
		table(0x5d9da8, (uVar20>>0xe&0x3fc)/4) ^ stateWord(state, 0x18)
	uVar22 = table(0x5da5a8, uVar22&0xff) ^
		table(0x5da1a8, uVar16>>0x18) ^
		table(0x5da9a8, uVar20>>8&0xff) ^
		table(0x5dada8, (uVar18>>0xe&0x3fc)/4) ^ stateWord(state, 0x19)
	uVar16 = table(0x5df5a8, uVar21>>8&0xff) ^
		table(0x5df1a8, uVar19&0xff) ^
		table(0x5df9a8, uVar15>>8&0xff) ^
		table(0x5dfda8, uVar22>>8&0xff) ^ stateWord(state, 0x1c)
	uVar20 = table(0x5de5a8, uVar19>>8&0xff) ^
		table(0x5de1a8, (uVar22>>0xe&0x3fc)/4) ^
		table(0x5de9a8, (uVar21>>0xe&0x3fc)/4) ^
		table(0x5deda8, (uVar15>>0xe&0x3fc)/4) ^ stateWord(state, 0x1d)
	uVar18 = table(0x5dd5a8, uVar22>>0x18) ^
		table(0x5dd1a8, uVar15>>0x18) ^
		table(0x5dd9a8, (uVar19>>0xe&0x3fc)/4) ^
		table(0x5ddda8, uVar21>>0x18) ^ stateWord(state, 0x1e)
	uVar19 = table(0x5dc5a8, uVar15&0xff) ^
		table(0x5dc1a8, uVar21&0xff) ^
		table(0x5dc9a8, uVar22&0xff) ^
		table(0x5dcda8, uVar19>>0x18) ^ stateWord(state, 0x1f)
	uVar15 = table(0x5e25a8, (uVar16>>0xe&0x3fc)/4) ^
		table(0x5e21a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5e29a8, uVar19>>8&0xff) ^
		table(0x5e2da8, uVar18>>8&0xff) ^ stateWord(state, 0x21)
	uVar21 = table(0x5e15a8, uVar20>>0x18) ^
		table(0x5e11a8, (uVar18>>0xe&0x3fc)/4) ^
		table(0x5e19a8, uVar16>>0x18) ^
		table(0x5e1da8, (uVar19>>0xe&0x3fc)/4) ^ stateWord(state, 0x22)
	uVar22 = table(0x5e05a8, uVar18>>0x18) ^
		table(0x5e01a8, uVar19>>0x18) ^
		table(0x5e09a8, uVar20&0xff) ^
		table(0x5e0da8, uVar16&0xff) ^ stateWord(state, 0x20)
	uVar20 = table(0x5e35a8, uVar19&0xff) ^
		table(0x5e31a8, uVar16>>8&0xff) ^
		table(0x5e39a8, uVar18&0xff) ^
		table(0x5e3da8, uVar20>>8&0xff) ^ stateWord(state, 0x23)
	uVar18 = table(0x5db5a8, uVar22&0xff) ^
		table(0x5db1a8, uVar20>>0x18) ^
		table(0x5db9a8, uVar21>>8&0xff) ^
		table(0x5dbda8, (uVar15>>0xe&0x3fc)/4) ^ stateWord(state, 0x25)
	uVar16 = table(0x5d85a8, uVar21&0xff) ^
		table(0x5d81a8, uVar22>>0x18) ^
		table(0x5d89a8, uVar15>>8&0xff) ^
		table(0x5d8da8, (uVar20>>0xe&0x3fc)/4) ^ stateWord(state, 0x27)
	uVar19 = table(0x5da5a8, uVar20&0xff) ^
		table(0x5da1a8, uVar15>>0x18) ^
		table(0x5da9a8, uVar22>>8&0xff) ^
		table(0x5dada8, (uVar21>>0xe&0x3fc)/4) ^ stateWord(state, 0x26)
	uStack_48 = uint32(uVar19)
	uVar22 = table(0x5d95a8, uVar15&0xff) ^
		table(0x5d91a8, uVar21>>0x18) ^
		table(0x5d99a8, uVar20>>8&0xff) ^
		table(0x5d9da8, (uVar22>>0xe&0x3fc)/4) ^ stateWord(state, 0x24)
	uVar20 = table(0x5dd5a8, uVar19>>0x18) ^
		table(0x5dd1a8, uVar22>>0x18) ^
		table(0x5dd9a8, (uVar18>>0xe&0x3fc)/4) ^
		table(0x5ddda8, uVar16>>0x18) ^ stateWord(state, 0x29)
	uVar21 = table(0x5de5a8, uVar18>>8&0xff) ^
		table(0x5de1a8, (uVar19>>0xe&0x3fc)/4) ^
		table(0x5de9a8, (uVar16>>0xe&0x3fc)/4) ^
		table(0x5deda8, (uVar22>>0xe&0x3fc)/4) ^ stateWord(state, 0x2a)
	uStack_38 = uint32(uVar20 & 0xff)
	uStack_40 = uint32(uVar20 >> 8 & 0xff)
	uVar15 = table(0x5df5a8, uVar16>>8&0xff) ^
		table(0x5df1a8, uVar18&0xff) ^
		table(0x5df9a8, uVar22>>8&0xff) ^
		table(0x5dfda8, uVar19>>8&0xff) ^ stateWord(state, 0x28)
	uVar16 = table(0x5dc5a8, uVar22&0xff) ^
		table(0x5dc1a8, uVar16&0xff) ^
		table(0x5dc9a8, uVar19&0xff) ^
		table(0x5dcda8, uVar18>>0x18) ^ stateWord(state, 0x2b)
	uStack_50 = uint32(uVar16 >> 8 & 0xff)
	uVar11 = table(0x5e35a8, uVar16&0xff) ^
		table(0x5e31a8, uVar15>>8&0xff) ^
		table(0x5e39a8, uStack_38) ^
		table(0x5e3da8, uVar21>>8&0xff) ^ stateWord(state, 0x2d)
	uVar23 = table(0x5e05a8, uVar20>>0x18) ^
		table(0x5e01a8, uVar16>>0x18) ^
		table(0x5e09a8, uVar21&0xff) ^
		table(0x5e0da8, uVar15&0xff) ^ stateWord(state, 0x2f)
	uStack_58 = uint32(uVar11 & 0xff)
	uVar12 = table(0x5e25a8, (uVar15>>0xe&0x3fc)/4) ^
		table(0x5e21a8, (uVar21>>0xe&0x3fc)/4) ^
		table(0x5e29a8, uStack_50) ^ table(0x5e2da8, uStack_40) ^ stateWord(state, 0x2c)
	uVar17 = table(0x5e15a8, uVar21>>0x18) ^
		table(0x5e11a8, (uVar20>>0xe&0x3fc)/4) ^
		table(0x5e19a8, uVar15>>0x18) ^
		table(0x5e1da8, (uVar16>>0xe&0x3fc)/4) ^ stateWord(state, 0x2e)
	uVar13 = table(0x5e45a8, uVar17&0xff) ^
		table(0x5e41a8, uVar23>>0x18) ^
		table(0x5e49a8, uVar12>>8&0xff) ^
		table(0x5e4da8, (uVar11>>0xe&0x3fc)/4) ^ stateWord(state, 0x31)
	uVar19 = table(0x5e55a8, uVar12&0xff) ^
		table(0x5e51a8, uVar17>>0x18) ^
		table(0x5e59a8, uVar11>>8&0xff) ^
		table(0x5e5da8, (uVar23>>0xe&0x3fc)/4) ^ stateWord(state, 0x32)
	uVar20 = table(0x5e95a8, uVar19>>8&0xff)
	uVar15 = table(0x5e91a8, uVar19&0xff)
	uVar16 = table(0x5e99a8, (uVar19>>0xe&0x3fc)/4)
	uVar19 = table(0x5e9da8, uVar19>>0x18)
	uVar24 = table(0x5e65a8, uStack_58) ^ table(0x5e61a8, uVar12>>0x18) ^
		table(0x5e69a8, uVar23>>8&0xff) ^
		table(0x5e6da8, (uVar17>>0xe&0x3fc)/4) ^ stateWord(state, 0x30)
	uVar18 = table(0x5ea5a8, uVar24>>8&0xff)
	uVar21 = table(0x5ea1a8, uVar24&0xff)
	uVar22 = table(0x5ea9a8, (uVar24>>0xe&0x3fc)/4)
	uVar24 = table(0x5eada8, uVar24>>0x18)
	uVar23 = table(0x5e75a8, uVar23&0xff) ^
		table(0x5e71a8, uVar11>>0x18) ^
		table(0x5e79a8, uVar17>>8&0xff) ^
		table(0x5e7da8, (uVar12>>0xe&0x3fc)/4) ^ stateWord(state, 0x33)
	uVar11 = table(0x5eb5a8, uVar23>>0x18)
	uVar12 = table(0x5eb1a8, (uVar23>>0xe&0x3fc)/4)
	uVar17 = table(0x5eb9a8, uVar23&0xff)
	uVar23 = table(0x5ebda8, uVar23>>8&0xff)
	uVar3 = stateWord(state, 0x35)
	uVar4 = stateWord(state, 0x36)
	uVar5 = stateWord(state, 0x37)
	setWord(out, 0, table(0x5e85a8, uVar13>>8&0xff)^
		table(0x5e81a8, uVar13&0xff)^
		table(0x5e89a8, (uVar13>>0xe&0x3fc)/4)^
		table(0x5e8da8, uVar13>>0x18)^stateWord(state, 0x34))
	setWord(out, 1, uVar20^uVar15^uVar16^uVar19^uVar3)
	setWord(out, 2, uVar18^uVar21^uVar22^uVar24^uVar4)
	setWord(out, 3, uVar11^uVar12^uVar17^uVar23^uVar5)
}

func stateWord(state *[744]byte, index int) uint32 {
	return binary.LittleEndian.Uint32(state[index*4:])
}

func setWord(out *[16]byte, index int, value uint32) {
	binary.LittleEndian.PutUint32(out[index*4:], value)
}
