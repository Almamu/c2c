#ifdef ZZ_INCLUDE_CODE
ZZ_319F8:
	SP -= 112;
	A0 = 0x800;
	EMU_Write32(SP + 108,RA); //+ 0x6C
	EMU_Write32(SP + 104,S6); //+ 0x68
	EMU_Write32(SP + 100,S5); //+ 0x64
	EMU_Write32(SP + 96,S4); //+ 0x60
	EMU_Write32(SP + 92,S3); //+ 0x5C
	EMU_Write32(SP + 88,S2); //+ 0x58
	EMU_Write32(SP + 84,S1); //+ 0x54
	RA = 0x80031A24; //ZZ_319F8_2C
	EMU_Write32(SP + 80,S0); //+ 0x50
	ZZ_CLOCKCYCLES(11,0x8001148C);
	goto ZZ_1148C;
ZZ_319F8_2C:
	A0 = 0x1;
	A1 = 0x10;
	S3 = V0;
	RA = 0x80031A38; //ZZ_319F8_40
	A2 = S3;
	ZZ_CLOCKCYCLES(5,0x8003198C);
	goto ZZ_3198C;
ZZ_319F8_40:
	S0 = V0;
	V0 = 0x1;
	if (S0 != V0)
	{
		A0 = S3 + 1;
		ZZ_CLOCKCYCLES(4,0x80031DBC);
		goto ZZ_319F8_3C4;
	}
	A0 = S3 + 1;
	A1 = 0x80060000;
	A1 -= 2880;
	RA = 0x80031A58; //ZZ_319F8_60
	A2 = 0x5;
	ZZ_CLOCKCYCLES(8,0x8004946C);
	goto ZZ_4946C;
ZZ_319F8_60:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x80031DBC);
		goto ZZ_319F8_3C4;
	}
	A0 = 0x80060000;
	A0 -= 2872;
	RA = 0x80031A70; //ZZ_319F8_78
	ZZ_CLOCKCYCLES(6,0x800494DC);
	goto ZZ_494DC;
ZZ_319F8_78:
	EMU_ReadLeft(S3 + 143,&V0); //+ 0x8F
	EMU_ReadRight(S3 + 140,&V0); //+ 0x8C
	EMU_WriteLeft(SP + 67,V0); //+ 0x43
	EMU_WriteRight(SP + 64,V0); //+ 0x40
	A1 = EMU_ReadU32(SP + 64); //+ 0x40
	A0 = 0x1;
	RA = 0x80031A94; //ZZ_319F8_9C
	A2 = S3;
	ZZ_CLOCKCYCLES(9,0x8003198C);
	goto ZZ_3198C;
ZZ_319F8_9C:
	if (V0 != S0)
	{
		S0 = S3;
		ZZ_CLOCKCYCLES(2,0x80031DBC);
		goto ZZ_319F8_3C4;
	}
	S0 = S3;
	V1 = -1;
	S2 = 0x3;
	V0 = SP + 28;
	ZZ_CLOCKCYCLES(5,0x80031AA8);
ZZ_319F8_B0:
	EMU_Write32(V0 + 32,V1); //+ 0x20
	S2 -= 1;
	if ((int32_t)S2 >= 0)
	{
		V0 -= 4;
		ZZ_CLOCKCYCLES(4,0x80031AA8);
		goto ZZ_319F8_B0;
	}
	V0 -= 4;
	V0 = S3 + 2048;
	V0 = S0 < V0;
	if (!V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(8,0x80031B80);
		goto ZZ_319F8_188;
	}
	S1 = R0;
	S2 = SP + 16;
	S4 = SP - 144;
	ZZ_CLOCKCYCLES(10,0x80031AD0);
ZZ_319F8_D8:
	A2 = EMU_ReadU8(S0);
	if (!A2)
	{
		ZZ_CLOCKCYCLES(4,0x80031B80);
		goto ZZ_319F8_188;
	}
	A0 = S2;
	RA = 0x80031AEC; //ZZ_319F8_F4
	A1 = S0 + 8;
	ZZ_CLOCKCYCLES(7,0x800494BC);
	goto ZZ_494BC;
ZZ_319F8_F4:
	V0 = EMU_ReadU8(S0);
	V0 += S2;
	EMU_Write8(V0,R0);
	EMU_ReadLeft(S0 + 5,&V0); //+ 0x5
	EMU_ReadRight(S0 + 2,&V0); //+ 0x2
	EMU_WriteLeft(SP + 71,V0); //+ 0x47
	EMU_WriteRight(SP + 68,V0); //+ 0x44
	RA = 0x80031B18; //ZZ_319F8_120
	A0 = S2;
	ZZ_CLOCKCYCLES(11,0x8004948C);
	goto ZZ_4948C;
ZZ_319F8_120:
	V1 = 0x2;
	if (V0 != V1)
	{
		V0 = 0x53;
		ZZ_CLOCKCYCLES(3,0x80031B50);
		goto ZZ_319F8_158;
	}
	V0 = 0x53;
	V1 = EMU_ReadU8(SP + 16); //+ 0x10
	if (V1 == V0)
	{
		V0 = 0x73;
		ZZ_CLOCKCYCLES(7,0x80031B3C);
		goto ZZ_319F8_144;
	}
	V0 = 0x73;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(9,0x80031B50);
		goto ZZ_319F8_158;
	}
	ZZ_CLOCKCYCLES(9,0x80031B3C);
ZZ_319F8_144:
	V0 = EMU_ReadU8(SP + 17); //+ 0x11
	V1 = EMU_ReadU32(SP + 68); //+ 0x44
	V0 <<= 2;
	V0 += S4;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(5,0x80031B50);
ZZ_319F8_158:
	V0 = EMU_ReadU8(S0);
	S1 += 1;
	V1 = V0 & 0x1;
	V1 += 8;
	V0 += V1;
	S0 += V0;
	V0 = (int32_t)S1 < 128;
	if (!V0)
	{
		V0 = S3 + 2048;
		ZZ_CLOCKCYCLES(9,0x80031B80);
		goto ZZ_319F8_188;
	}
	V0 = S3 + 2048;
	V0 = S0 < V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x80031AD0);
		goto ZZ_319F8_D8;
	}
	ZZ_CLOCKCYCLES(12,0x80031B80);
ZZ_319F8_188:
	S2 = R0;
	S4 = SP + 16;
	S5 = S3 + 2048;
	S6 = S3 < S5;
	V0 = S2 << 2;
	ZZ_CLOCKCYCLES(5,0x80031B94);
ZZ_319F8_19C:
	V0 += S4;
	A1 = EMU_ReadU32(V0 + 32); //+ 0x20
	V0 = -1;
	if (A1 == V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(5,0x80031BBC);
		goto ZZ_319F8_1C4;
	}
	A0 = 0x1;
	RA = 0x80031BB0; //ZZ_319F8_1B8
	A2 = S3;
	ZZ_CLOCKCYCLES(7,0x8003198C);
	goto ZZ_3198C;
ZZ_319F8_1B8:
	V1 = 0x1;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(3,0x80031DBC);
		goto ZZ_319F8_3C4;
	}
	ZZ_CLOCKCYCLES(3,0x80031BBC);
ZZ_319F8_1C4:
	S0 = S3;
	if (!S6)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(3,0x80031D9C);
		goto ZZ_319F8_3A4;
	}
	S1 = R0;
	ZZ_CLOCKCYCLES(3,0x80031BC8);
ZZ_319F8_1D0:
	V0 = EMU_ReadU8(S0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80031D9C);
		goto ZZ_319F8_3A4;
	}
	EMU_ReadLeft(S0 + 5,&V0); //+ 0x5
	EMU_ReadRight(S0 + 2,&V0); //+ 0x2
	EMU_WriteLeft(SP + 67,V0); //+ 0x43
	EMU_WriteRight(SP + 64,V0); //+ 0x40
	EMU_ReadLeft(S0 + 13,&V0); //+ 0xD
	EMU_ReadRight(S0 + 10,&V0); //+ 0xA
	EMU_WriteLeft(SP + 75,V0); //+ 0x4B
	EMU_WriteRight(SP + 72,V0); //+ 0x48
	if (!S1)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(16,0x80031C18);
		goto ZZ_319F8_220;
	}
	V0 = 0x1;
	if (S1 == V0)
	{
		A0 = S4;
		ZZ_CLOCKCYCLES(18,0x80031C24);
		goto ZZ_319F8_22C;
	}
	A0 = S4;
	ZZ_CLOCKCYCLES(20,0x80031C3C);
	goto ZZ_319F8_244;
ZZ_319F8_220:
	V0 = EMU_ReadU16(GP + 188); //+ 0xBC
	EMU_Write16(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(3,0x80031C58);
	goto ZZ_319F8_260;
ZZ_319F8_22C:
	V0 = EMU_ReadS16(GP + 192); //+ 0xC0
	V1 = EMU_ReadS8(GP + 194); //+ 0xC2
	EMU_Write16(SP + 16,V0); //+ 0x10
	EMU_Write8(SP + 18,V1); //+ 0x12
	ZZ_CLOCKCYCLES(6,0x80031C58);
	goto ZZ_319F8_260;
ZZ_319F8_244:
	A2 = EMU_ReadU8(S0 + 32); //+ 0x20
	RA = 0x80031C48; //ZZ_319F8_250
	A1 = S0 + 33;
	ZZ_CLOCKCYCLES(3,0x800494BC);
	goto ZZ_494BC;
ZZ_319F8_250:
	V0 = EMU_ReadU8(S0 + 32); //+ 0x20
	V0 += S4;
	EMU_Write8(V0,R0);
	ZZ_CLOCKCYCLES(4,0x80031C58);
ZZ_319F8_260:
	V1 = EMU_ReadU8(SP + 16); //+ 0x10
	V0 = 0x53;
	if (V1 == V0)
	{
		V0 = 0x73;
		ZZ_CLOCKCYCLES(4,0x80031C70);
		goto ZZ_319F8_278;
	}
	V0 = 0x73;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x80031D7C);
		goto ZZ_319F8_384;
	}
	ZZ_CLOCKCYCLES(6,0x80031C70);
ZZ_319F8_278:
	A0 = EMU_ReadU8(SP + 23); //+ 0x17
	V0 = A0 < 65;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80031C98);
		goto ZZ_319F8_2A0;
	}
	V0 = EMU_ReadU8(SP + 22); //+ 0x16
	V0 <<= 4;
	V0 -= 823;
	ZZ_CLOCKCYCLES(10,0x80031CA8);
	goto ZZ_319F8_2B0;
ZZ_319F8_2A0:
	V0 = EMU_ReadU8(SP + 22); //+ 0x16
	V0 <<= 4;
	V0 -= 816;
	ZZ_CLOCKCYCLES(4,0x80031CA8);
ZZ_319F8_2B0:
	V1 = V0 + A0;
	A0 = EMU_ReadU8(SP + 27); //+ 0x1B
	V0 = 0x44;
	if (A0 == V0)
	{
		V0 = 0x64;
		ZZ_CLOCKCYCLES(5,0x80031CC4);
		goto ZZ_319F8_2CC;
	}
	V0 = 0x64;
	if (A0 != V0)
	{
		A0 = V1 << 1;
		ZZ_CLOCKCYCLES(7,0x80031D40);
		goto ZZ_319F8_348;
	}
	A0 = V1 << 1;
	ZZ_CLOCKCYCLES(7,0x80031CC4);
ZZ_319F8_2CC:
	A1 = V1 << 1;
	A1 += V1;
	A1 <<= 2;
	AT = 0x80070000;
	AT += A1;
	A3 = EMU_ReadU32(AT - 27956); //+ 0xFFFF92CC
	V1 = 0x7F0000;
	V1 |= 0xFFFF;
	AT = 0x80070000;
	AT += A1;
	A2 = EMU_ReadU32(AT - 27952); //+ 0xFFFF92D0
	T0 = 0x10000;
	A0 = EMU_ReadU32(SP + 64); //+ 0x40
	T0 |= 0xFFFF;
	V0 = 0xFF800000;
	A3 &= V0;
	A0 &= V1;
	V1 = EMU_ReadU32(SP + 72); //+ 0x48
	A3 |= A0;
	V0 = 0xFFFE0000;
	A2 &= V0;
	AT = 0x80070000;
	AT += A1;
	EMU_Write32(AT - 27956,A3); //+ 0xFFFF92CC
	V1 &= T0;
	A2 |= V1;
	AT = 0x80070000;
	AT += A1;
	EMU_Write32(AT - 27952,A2); //+ 0xFFFF92D0
	ZZ_CLOCKCYCLES(31,0x80031D7C);
	goto ZZ_319F8_384;
ZZ_319F8_348:
	A0 += V1;
	A0 <<= 2;
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 27948); //+ 0xFFFF92D4
	A2 = 0xFF0000;
	A1 = EMU_ReadU32(SP + 64); //+ 0x40
	A2 |= 0xFFFF;
	V0 = 0xFF000000;
	V1 &= V0;
	A1 &= A2;
	V1 |= A1;
	AT = 0x80070000;
	AT += A0;
	EMU_Write32(AT - 27948,V1); //+ 0xFFFF92D4
	ZZ_CLOCKCYCLES(15,0x80031D7C);
ZZ_319F8_384:
	V0 = EMU_ReadU8(S0);
	S1 += 1;
	S0 += V0;
	V0 = (int32_t)S1 < 64;
	if (!V0)
	{
		V0 = S0 < S5;
		ZZ_CLOCKCYCLES(6,0x80031D9C);
		goto ZZ_319F8_3A4;
	}
	V0 = S0 < S5;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x80031BC8);
		goto ZZ_319F8_1D0;
	}
	ZZ_CLOCKCYCLES(8,0x80031D9C);
ZZ_319F8_3A4:
	S2 += 1;
	V0 = (int32_t)S2 < 4;
	if (V0)
	{
		V0 = S2 << 2;
		ZZ_CLOCKCYCLES(4,0x80031B94);
		goto ZZ_319F8_19C;
	}
	V0 = S2 << 2;
	RA = 0x80031DB4; //ZZ_319F8_3BC
	A0 = S3;
	ZZ_CLOCKCYCLES(6,0x800116C0);
	goto ZZ_116C0;
ZZ_319F8_3BC:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80031DC8);
	goto ZZ_319F8_3D0;
ZZ_319F8_3C4:
	RA = 0x80031DC4; //ZZ_319F8_3CC
	A0 = S3;
	ZZ_CLOCKCYCLES(2,0x800116C0);
	goto ZZ_116C0;
ZZ_319F8_3CC:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x80031DC8);
ZZ_319F8_3D0:
	RA = EMU_ReadU32(SP + 108); //+ 0x6C
	S6 = EMU_ReadU32(SP + 104); //+ 0x68
	S5 = EMU_ReadU32(SP + 100); //+ 0x64
	S4 = EMU_ReadU32(SP + 96); //+ 0x60
	S3 = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 112;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8001588C,ZZ_15738_154);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800319F8,0x80031A24,ZZ_319F8);
ZZ_MARK_TARGET(0x80031A24,0x80031A38,ZZ_319F8_2C);
ZZ_MARK_TARGET(0x80031A38,0x80031A58,ZZ_319F8_40);
ZZ_MARK_TARGET(0x80031A58,0x80031A70,ZZ_319F8_60);
ZZ_MARK_TARGET(0x80031A70,0x80031A94,ZZ_319F8_78);
ZZ_MARK_TARGET(0x80031A94,0x80031AA8,ZZ_319F8_9C);
ZZ_MARK_TARGET(0x80031AA8,0x80031AD0,ZZ_319F8_B0);
ZZ_MARK_TARGET(0x80031AD0,0x80031AEC,ZZ_319F8_D8);
ZZ_MARK_TARGET(0x80031AEC,0x80031B18,ZZ_319F8_F4);
ZZ_MARK_TARGET(0x80031B18,0x80031B3C,ZZ_319F8_120);
ZZ_MARK_TARGET(0x80031B3C,0x80031B50,ZZ_319F8_144);
ZZ_MARK_TARGET(0x80031B50,0x80031B80,ZZ_319F8_158);
ZZ_MARK_TARGET(0x80031B80,0x80031B94,ZZ_319F8_188);
ZZ_MARK_TARGET(0x80031B94,0x80031BB0,ZZ_319F8_19C);
ZZ_MARK_TARGET(0x80031BB0,0x80031BBC,ZZ_319F8_1B8);
ZZ_MARK_TARGET(0x80031BBC,0x80031BC8,ZZ_319F8_1C4);
ZZ_MARK_TARGET(0x80031BC8,0x80031C18,ZZ_319F8_1D0);
ZZ_MARK_TARGET(0x80031C18,0x80031C24,ZZ_319F8_220);
ZZ_MARK_TARGET(0x80031C24,0x80031C3C,ZZ_319F8_22C);
ZZ_MARK_TARGET(0x80031C3C,0x80031C48,ZZ_319F8_244);
ZZ_MARK_TARGET(0x80031C48,0x80031C58,ZZ_319F8_250);
ZZ_MARK_TARGET(0x80031C58,0x80031C70,ZZ_319F8_260);
ZZ_MARK_TARGET(0x80031C70,0x80031C98,ZZ_319F8_278);
ZZ_MARK_TARGET(0x80031C98,0x80031CA8,ZZ_319F8_2A0);
ZZ_MARK_TARGET(0x80031CA8,0x80031CC4,ZZ_319F8_2B0);
ZZ_MARK_TARGET(0x80031CC4,0x80031D40,ZZ_319F8_2CC);
ZZ_MARK_TARGET(0x80031D40,0x80031D7C,ZZ_319F8_348);
ZZ_MARK_TARGET(0x80031D7C,0x80031D9C,ZZ_319F8_384);
ZZ_MARK_TARGET(0x80031D9C,0x80031DB4,ZZ_319F8_3A4);
ZZ_MARK_TARGET(0x80031DB4,0x80031DBC,ZZ_319F8_3BC);
ZZ_MARK_TARGET(0x80031DBC,0x80031DC4,ZZ_319F8_3C4);
ZZ_MARK_TARGET(0x80031DC4,0x80031DC8,ZZ_319F8_3CC);
ZZ_MARK_TARGET(0x80031DC8,0x80031DF4,ZZ_319F8_3D0);
