#ifdef ZZ_INCLUDE_CODE
ZZ_3EBD8:
	A1 = EMU_ReadU32(T9);
	A2 = EMU_ReadU32(A0);
	A3 = 0xFFFF0000;
	A1 &= A3;
	A3 = EMU_ReadU32(V1 + 296); //+ 0x128
	A2 = A2 - A1;
	A2 = (int32_t)A2 >> 16;
	EMU_Write16(T8 + 2,A3); //+ 0x2
	A3 <<= 16;
	A3 = A3 - A1;
	A1 = EMU_ReadU32(V1 + 112); //+ 0x70
	EMU_SDivide(A3,A2);
	if (!A1)
	{
		A3 = LO;
		ZZ_CLOCKCYCLES(14,0x8003EC58);
		goto ZZ_3EBD8_80;
	}
	A3 = LO;
	A1 = EMU_ReadU8(T9 + 12); //+ 0xC
	A2 = EMU_ReadU8(A0 + 12); //+ 0xC
	A2 = A2 - A1;
	EMU_SMultiply(A2,A3);
	A2 = LO;
	A2 = (int32_t)A2 >> 16;
	A2 = EMU_CheckedAdd(A2,A1);
	EMU_Write8(T8 + 12,A2); //+ 0xC
	A1 = EMU_ReadU8(T9 + 13); //+ 0xD
	A2 = EMU_ReadU8(A0 + 13); //+ 0xD
	A2 = A2 - A1;
	EMU_SMultiply(A2,A3);
	A2 = LO;
	A2 = (int32_t)A2 >> 16;
	A2 = EMU_CheckedAdd(A2,A1);
	EMU_Write8(T8 + 13,A2); //+ 0xD
	ZZ_CLOCKCYCLES(32,0x8003EC58);
ZZ_3EBD8_80:
	A1 = EMU_ReadS16(T9);
	A2 = EMU_ReadS16(A0);
	A2 = A2 - A1;
	EMU_SMultiply(A2,A3);
	A2 = LO;
	A2 = (int32_t)A2 >> 16;
	A2 = EMU_CheckedAdd(A2,A1);
	EMU_Write16(T8,A2);
	A1 = EMU_ReadU32(T9 + 4); //+ 0x4
	A2 = EMU_ReadU32(A0 + 4); //+ 0x4
	A2 = A2 - A1;
	EMU_SMultiply(A2,A3);
	A2 = LO;
	A2 = (int32_t)A2 >> 16;
	A2 = EMU_CheckedAdd(A2,A1);
	EMU_Write32(T8 + 4,A2); //+ 0x4
	A2 = 255;
	EMU_Write8(T8 + 8,A2); //+ 0x8
	EMU_Write8(T8 + 9,A2); //+ 0x9
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write8(T8 + 10,A2); //+ 0xA
	ZZ_CLOCKCYCLES_JR(23);
	ZZ_JUMPREGISTER(0x800459D0,ZZ_454B0_520);
	ZZ_JUMPREGISTER(0x800458BC,ZZ_454B0_40C);
	ZZ_JUMPREGISTER(0x800457AC,ZZ_454B0_2FC);
	ZZ_JUMPREGISTER(0x8003EA2C,ZZ_3DFAC_A80);
	ZZ_JUMPREGISTER(0x8003E918,ZZ_3DFAC_96C);
	ZZ_JUMPREGISTER(0x8003E804,ZZ_3DFAC_858);
	ZZ_JUMPREGISTER(0x800459DC,ZZ_454B0_52C);
	ZZ_JUMPREGISTER(0x800458C8,ZZ_454B0_418);
	ZZ_JUMPREGISTER(0x800457B8,ZZ_454B0_308);
	ZZ_JUMPREGISTER(0x8003EA38,ZZ_3DFAC_A8C);
	ZZ_JUMPREGISTER(0x8003E924,ZZ_3DFAC_978);
	ZZ_JUMPREGISTER(0x8003E810,ZZ_3DFAC_864);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003EBD8,0x8003EC58,ZZ_3EBD8);
ZZ_MARK_TARGET(0x8003EC58,0x8003ECB4,ZZ_3EBD8_80);
