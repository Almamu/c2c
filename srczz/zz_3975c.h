#ifdef ZZ_INCLUDE_CODE
ZZ_3975C:
	SP -= 120;
	EMU_Write32(SP + 96,S0); //+ 0x60
	S0 = A0;
	EMU_Write32(SP + 100,S1); //+ 0x64
	S1 = A1;
	EMU_Write32(SP + 108,S3); //+ 0x6C
	S3 = A2;
	V0 = S1 >> 19;
	V0 &= 0x1C;
	V0 += S0;
	EMU_Write32(SP + 112,RA); //+ 0x70
	EMU_Write32(SP + 104,S2); //+ 0x68
	S2 = EMU_ReadU32(V0 + 64); //+ 0x40
	A0 = S1 & 0xFFF;
	V1 = S1 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(18,0x800397D8);
		goto ZZ_3975C_7C;
	}
	A1 = A0;
	V0 = 0xE1F;
	if (A0 != V0)
	{
		V0 = S1 & 0x1FF;
		ZZ_CLOCKCYCLES(21,0x800397C8);
		goto ZZ_3975C_6C;
	}
	V0 = S1 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	A2 = V0;
	EMU_Write32(S0 + 188,A2); //+ 0xBC
	ZZ_CLOCKCYCLES(27,0x800397E4);
	goto ZZ_3975C_88;
ZZ_3975C_6C:
	V0 <<= 2;
	V0 += 64;
	A2 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x800397E4);
	goto ZZ_3975C_88;
ZZ_3975C_7C:
	RA = 0x800397E0; //ZZ_3975C_84
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_3975C_84:
	A2 = V0;
	ZZ_CLOCKCYCLES(1,0x800397E4);
ZZ_3975C_88:
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V1 = 0xFFFD0000;
	V1 |= 0xFFFF;
	V0 &= V1;
	EMU_Write32(S0 + 168,V0); //+ 0xA8
	V0 = S1 >> 12;
	V0 &= 0x3F;
	V1 = 0x1F;
	if (V0 != V1)
	{
		A0 = V0;
		ZZ_CLOCKCYCLES(10,0x80039820);
		goto ZZ_3975C_C4;
	}
	A0 = V0;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(15,0x8003982C);
	goto ZZ_3975C_D0;
ZZ_3975C_C4:
	V0 = A0 << 2;
	V0 += 64;
	V0 += S0;
	ZZ_CLOCKCYCLES(3,0x8003982C);
ZZ_3975C_D0:
	V0 = EMU_ReadU32(V0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800398B0);
		goto ZZ_3975C_154;
	}
	if (!S2)
	{
		ZZ_CLOCKCYCLES(6,0x800398B0);
		goto ZZ_3975C_154;
	}
	if (!A2)
	{
		V0 = S1 >> 18;
		ZZ_CLOCKCYCLES(8,0x800398B0);
		goto ZZ_3975C_154;
	}
	V0 = S1 >> 18;
	A3 = V0 & 0x7;
	if (!A3)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(11,0x80039884);
		goto ZZ_3975C_128;
	}
	A0 = R0;
	A1 = SP + 24;
	ZZ_CLOCKCYCLES(12,0x8003985C);
ZZ_3975C_100:
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 = A0 - A3;
	V0 <<= 2;
	V0 += V1;
	V0 = EMU_ReadU32(V0);
	A0 += 1;
	EMU_Write32(A1,V0);
	V0 = (int32_t)A0 < (int32_t)A3;
	if (V0)
	{
		A1 += 4;
		ZZ_CLOCKCYCLES(10,0x8003985C);
		goto ZZ_3975C_100;
	}
	A1 += 4;
	ZZ_CLOCKCYCLES(10,0x80039884);
ZZ_3975C_128:
	A0 = S0;
	V0 = SP + 24;
	EMU_Write32(SP + 16,A3); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	A2 = EMU_ReadU32(A2);
	A1 = S2;
	A3 = S1 >> 21;
	RA = 0x800398A8; //ZZ_3975C_14C
	A3 &= 0x7;
	ZZ_CLOCKCYCLES(9,0x8001D3D4);
	goto ZZ_1D3D4;
ZZ_3975C_14C:
	ZZ_CLOCKCYCLES(2,0x800398B4);
	goto ZZ_3975C_158;
ZZ_3975C_154:
	EMU_Write32(S0 + 212,R0); //+ 0xD4
	ZZ_CLOCKCYCLES(1,0x800398B4);
ZZ_3975C_158:
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V1 = 0x20000;
	V0 &= V1;
	if (V0)
	{
		V0 = S3 & 0x2;
		ZZ_CLOCKCYCLES(5,0x800398E0);
		goto ZZ_3975C_184;
	}
	V0 = S3 & 0x2;
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 = S1 >> 16;
	V0 &= 0x1C;
	V1 = V1 - V0;
	EMU_Write32(S0 + 188,V1); //+ 0xBC
	ZZ_CLOCKCYCLES(11,0x800398F8);
	goto ZZ_3975C_19C;
ZZ_3975C_184:
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(2,0x800398FC);
		goto ZZ_3975C_1A0;
	}
	V0 = -255;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(6,0x800398F8);
ZZ_3975C_19C:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x800398FC);
ZZ_3975C_1A0:
	RA = EMU_ReadU32(SP + 112); //+ 0x70
	S3 = EMU_ReadU32(SP + 108); //+ 0x6C
	S2 = EMU_ReadU32(SP + 104); //+ 0x68
	S1 = EMU_ReadU32(SP + 100); //+ 0x64
	S0 = EMU_ReadU32(SP + 96); //+ 0x60
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8003A294,ZZ_3A234_60);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003975C,0x800397C8,ZZ_3975C);
ZZ_MARK_TARGET(0x800397C8,0x800397D8,ZZ_3975C_6C);
ZZ_MARK_TARGET(0x800397D8,0x800397E0,ZZ_3975C_7C);
ZZ_MARK_TARGET(0x800397E0,0x800397E4,ZZ_3975C_84);
ZZ_MARK_TARGET(0x800397E4,0x80039820,ZZ_3975C_88);
ZZ_MARK_TARGET(0x80039820,0x8003982C,ZZ_3975C_C4);
ZZ_MARK_TARGET(0x8003982C,0x8003985C,ZZ_3975C_D0);
ZZ_MARK_TARGET(0x8003985C,0x80039884,ZZ_3975C_100);
ZZ_MARK_TARGET(0x80039884,0x800398A8,ZZ_3975C_128);
ZZ_MARK_TARGET(0x800398A8,0x800398B0,ZZ_3975C_14C);
ZZ_MARK_TARGET(0x800398B0,0x800398B4,ZZ_3975C_154);
ZZ_MARK_TARGET(0x800398B4,0x800398E0,ZZ_3975C_158);
ZZ_MARK_TARGET(0x800398E0,0x800398F8,ZZ_3975C_184);
ZZ_MARK_TARGET(0x800398F8,0x800398FC,ZZ_3975C_19C);
ZZ_MARK_TARGET(0x800398FC,0x8003991C,ZZ_3975C_1A0);
