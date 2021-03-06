#ifdef ZZ_INCLUDE_CODE
ZZ_2F9D4:
	SP -= 72;
	EMU_Write32(SP + 56,S4); //+ 0x38
	S4 = A0;
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 60,S5); //+ 0x3C
	EMU_Write32(SP + 52,S3); //+ 0x34
	EMU_Write32(SP + 48,S2); //+ 0x30
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write32(SP + 40,S0); //+ 0x28
	A1 = EMU_ReadU32(S4 + 56); //+ 0x38
	V0 = 0x80060000;
	V0 += 7248;
	V0 ^= S4;
	if ((int32_t)A1 < 0)
	{
		S5 = V0 < 1;
		ZZ_CLOCKCYCLES(15,0x8002FAC4);
		goto ZZ_2F9D4_F0;
	}
	S5 = V0 < 1;
	if (S5)
	{
		V0 = (int32_t)A1 >> 3;
		ZZ_CLOCKCYCLES(17,0x8002FAC4);
		goto ZZ_2F9D4_F0;
	}
	V0 = (int32_t)A1 >> 3;
	V1 = EMU_ReadU32(S4 + 48); //+ 0x30
	A3 = 0x80070000;
	A3 -= 26192;
	A0 = V0 << 2;
	V1 <<= 3;
	V1 += A3;
	A0 += V1;
	A2 = EMU_ReadU32(A0);
	V0 <<= 3;
	V0 = A1 - V0;
	V1 = V0 << 2;
	V0 = A2 >> V1;
	V0 &= 0xF;
	V0 = V0 < 15;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(33,0x8002FA64);
		goto ZZ_2F9D4_90;
	}
	V0 = 0x1;
	V0 <<= V1;
	V0 += A2;
	EMU_Write32(A0,V0);
	ZZ_CLOCKCYCLES(36,0x8002FA64);
ZZ_2F9D4_90:
	A0 = EMU_ReadU32(S4 + 56); //+ 0x38
	V0 = EMU_ReadU32(S4 + 48); //+ 0x30
	V1 = A0;
	V0 <<= 3;
	if ((int32_t)A0 >= 0)
	{
		A1 = V0 + A3;
		ZZ_CLOCKCYCLES(6,0x8002FA80);
		goto ZZ_2F9D4_AC;
	}
	A1 = V0 + A3;
	V1 = A0 + 7;
	ZZ_CLOCKCYCLES(7,0x8002FA80);
ZZ_2F9D4_AC:
	V1 = (int32_t)V1 >> 3;
	V0 = V1 << 2;
	V0 += A1;
	V0 = EMU_ReadU32(V0);
	V1 <<= 3;
	V1 = A0 - V1;
	V1 <<= 2;
	V0 >>= V1;
	V0 &= 0xF;
	V0 <<= 8;
	AT = 0x80070000;
	EMU_Write32(AT - 12208,V0); //+ 0xFFFFD050
	V0 = EMU_ReadU32(S4 + 56); //+ 0x38
	AT = 0x80070000;
	EMU_Write32(AT - 12212,V0); //+ 0xFFFFD04C
	A0 = R0;
	ZZ_CLOCKCYCLES(17,0x8002FAD8);
	goto ZZ_2F9D4_104;
ZZ_2F9D4_F0:
	AT = 0x80070000;
	EMU_Write32(AT - 12208,R0); //+ 0xFFFFD050
	AT = 0x80070000;
	EMU_Write32(AT - 12212,R0); //+ 0xFFFFD04C
	A0 = R0;
	ZZ_CLOCKCYCLES(5,0x8002FAD8);
ZZ_2F9D4_104:
	A1 = 0x1300;
	A2 = R0;
	A3 = R0;
	AT = 0x80070000;
	EMU_Write32(AT - 12552,R0); //+ 0xFFFFCEF8
	RA = 0x8002FAF4; //ZZ_2F9D4_120
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(7,0x8001D360);
	goto ZZ_1D360;
ZZ_2F9D4_120:
	S0 = 0x80060000;
	S0 += 2916;
	V0 = EMU_ReadU32(S0);
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8002FBA8);
		goto ZZ_2F9D4_1D4;
	}
	RA = 0x8002FB14; //ZZ_2F9D4_140
	ZZ_CLOCKCYCLES(8,0x8001A14C);
	goto ZZ_1A14C;
ZZ_2F9D4_140:
	A0 = EMU_ReadU32(S0);
	RA = 0x8002FB20; //ZZ_2F9D4_14C
	A1 = -1;
	ZZ_CLOCKCYCLES(3,0x8001A374);
	goto ZZ_1A374;
ZZ_2F9D4_14C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	S3 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = -1;
	AT = 0x80060000;
	EMU_Write32(AT + 2920,V0); //+ 0xB68
	V0 = EMU_ReadU32(S3 + 400); //+ 0x190
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(11,0x8002FB90);
		goto ZZ_2F9D4_1BC;
	}
	S0 = R0;
	S2 = 0x194;
	ZZ_CLOCKCYCLES(12,0x8002FB50);
ZZ_2F9D4_17C:
	S1 = S3 + S2;
	A0 = S1;
	RA = 0x8002FB60; //ZZ_2F9D4_18C
	A1 = R0;
	ZZ_CLOCKCYCLES(4,0x800144C4);
	goto ZZ_144C4;
ZZ_2F9D4_18C:
	if (!V0)
	{
		A1 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8002FB7C);
		goto ZZ_2F9D4_1A8;
	}
	A1 = 0x1;
	A0 = S1;
	RA = 0x8002FB74; //ZZ_2F9D4_1A0
	A2 = R0;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_2F9D4_1A0:
	RA = 0x8002FB7C; //ZZ_2F9D4_1A8
	A0 = V0;
	ZZ_CLOCKCYCLES(2,0x80020290);
	goto ZZ_20290;
ZZ_2F9D4_1A8:
	V0 = EMU_ReadU32(S3 + 400); //+ 0x190
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S2 += 4;
		ZZ_CLOCKCYCLES(5,0x8002FB50);
		goto ZZ_2F9D4_17C;
	}
	S2 += 4;
	ZZ_CLOCKCYCLES(5,0x8002FB90);
ZZ_2F9D4_1BC:
	RA = 0x8002FB98; //ZZ_2F9D4_1C4
	A0 = S4 + 4160;
	ZZ_CLOCKCYCLES(2,0x80014894);
	goto ZZ_14894;
ZZ_2F9D4_1C4:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 14064); //+ 0x36F0
	RA = 0x8002FBA8; //ZZ_2F9D4_1D4
	ZZ_CLOCKCYCLES(4,0x800164E4);
	goto ZZ_164E4;
ZZ_2F9D4_1D4:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2844); //+ 0xB1C
	AT = 0x80060000;
	EMU_Write32(AT + 2916,R0); //+ 0xB64
	AT = 0x80060000;
	EMU_Write32(AT + 2924,R0); //+ 0xB6C
	RA = 0x8002FBC8; //ZZ_2F9D4_1F4
	S0 = R0;
	ZZ_CLOCKCYCLES(8,0x8004F2A0);
	goto ZZ_4F2A0;
ZZ_2F9D4_1F4:
	RA = 0x8002FBD0; //ZZ_2F9D4_1FC
	ZZ_CLOCKCYCLES(2,0x8002441C);
	goto ZZ_2441C;
ZZ_2F9D4_1FC:
	A0 = 0x80070000;
	A0 -= 19364;
	V1 = S4;
	ZZ_CLOCKCYCLES(3,0x8002FBDC);
ZZ_2F9D4_208:
	V0 = EMU_ReadU32(V1 + 60); //+ 0x3C
	V1 += 4;
	S0 += 1;
	EMU_Write32(A0,V0);
	V0 = S0 < 1024;
	if (V0)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(7,0x8002FBDC);
		goto ZZ_2F9D4_208;
	}
	A0 += 4;
	if (S5)
	{
		ZZ_CLOCKCYCLES(9,0x8002FC60);
		goto ZZ_2F9D4_28C;
	}
	A2 = 0x80070000;
	A2 -= 12516;
	V1 = EMU_ReadU32(A2);
	if ((int32_t)V1 <= 0)
	{
		A0 = -3;
		ZZ_CLOCKCYCLES(15,0x8002FC60);
		goto ZZ_2F9D4_28C;
	}
	A0 = -3;
	V1 >>= 8;
	A1 = 0x80070000;
	A1 -= 19364;
	V1 <<= 2;
	V1 += A1;
	V0 = EMU_ReadU32(V1);
	V0 &= A0;
	EMU_Write32(V1,V0);
	V0 = EMU_ReadU32(A2);
	V0 >>= 8;
	V0 <<= 2;
	V0 += A1;
	V1 = EMU_ReadU32(V0);
	V1 |= 0x8;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(33,0x8002FC60);
ZZ_2F9D4_28C:
	S0 = R0;
	A0 = -2;
	V1 = 0x80070000;
	V1 -= 19364;
	ZZ_CLOCKCYCLES(4,0x8002FC70);
ZZ_2F9D4_29C:
	V0 = EMU_ReadU32(V1);
	S0 += 1;
	V0 &= A0;
	EMU_Write32(V1,V0);
	V0 = (int32_t)S0 < 1024;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(7,0x8002FC70);
		goto ZZ_2F9D4_29C;
	}
	V1 += 4;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30772); //+ 0x7834
	A0 = EMU_ReadU32(V0 + 8); //+ 0x8
	RA = 0x8002FCA4; //ZZ_2F9D4_2D0
	ZZ_CLOCKCYCLES(13,0x8001FAA0);
	goto ZZ_1FAA0;
ZZ_2F9D4_2D0:
	V0 = EMU_ReadU32(S4 + 36); //+ 0x24
	A0 = SP + 24;
	A1 = 0x1;
	A2 = 0x1;
	RA = 0x8002FCBC; //ZZ_2F9D4_2E8
	EMU_Write32(SP + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(6,0x80014364);
	goto ZZ_14364;
ZZ_2F9D4_2E8:
	T0 = V0;
	V0 = EMU_ReadU32(T0 + 16); //+ 0x10
	V1 = EMU_ReadU32(S4 + 40); //+ 0x28
	A0 = EMU_ReadU32(V0 + 388); //+ 0x184
	V0 = V1 << 1;
	V0 += V1;
	V0 += A0;
	V0 <<= 2;
	V0 += T0;
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	if (S5)
	{
		A3 = 0x1A;
		ZZ_CLOCKCYCLES(12,0x8002FCF0);
		goto ZZ_2F9D4_31C;
	}
	A3 = 0x1A;
	A3 = 0x1B;
	ZZ_CLOCKCYCLES(13,0x8002FCF0);
ZZ_2F9D4_31C:
	A2 = EMU_ReadU32(S4 + 44); //+ 0x2C
	RA = 0x8002FCFC; //ZZ_2F9D4_328
	A0 = T0;
	ZZ_CLOCKCYCLES(3,0x80020304);
	goto ZZ_20304;
ZZ_2F9D4_328:
	A0 = SP + 24;
	RA = 0x8002FD08; //ZZ_2F9D4_334
	A1 = 0x1;
	ZZ_CLOCKCYCLES(3,0x800144C4);
	goto ZZ_144C4;
ZZ_2F9D4_334:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	if (V0)
	{
		A3 = S4;
		ZZ_CLOCKCYCLES(5,0x8002FD4C);
		goto ZZ_2F9D4_378;
	}
	A3 = S4;
	A0 = 0x80070000;
	A0 -= 12832;
	A1 = R0;
	A2 = R0;
	A3 = R0;
	V0 = 0x1;
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x8002FD40; //ZZ_2F9D4_36C
	EMU_Write32(SP + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(14,0x80019928);
	goto ZZ_19928;
ZZ_2F9D4_36C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	A3 = S4;
	ZZ_CLOCKCYCLES(3,0x8002FD4C);
ZZ_2F9D4_378:
	T0 = S4 + 32;
	A2 = V0 + 96;
	ZZ_CLOCKCYCLES(2,0x8002FD54);
ZZ_2F9D4_380:
	V0 = EMU_ReadU32(A3);
	V1 = EMU_ReadU32(A3 + 4); //+ 0x4
	A0 = EMU_ReadU32(A3 + 8); //+ 0x8
	A1 = EMU_ReadU32(A3 + 12); //+ 0xC
	EMU_Write32(A2,V0);
	EMU_Write32(A2 + 4,V1); //+ 0x4
	EMU_Write32(A2 + 8,A0); //+ 0x8
	EMU_Write32(A2 + 12,A1); //+ 0xC
	A3 += 16;
	if (A3 != T0)
	{
		A2 += 16;
		ZZ_CLOCKCYCLES(11,0x8002FD54);
		goto ZZ_2F9D4_380;
	}
	A2 += 16;
	V0 = EMU_ReadU32(A3);
	EMU_Write32(A2,V0);
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 2524); //+ 0xFFFFF624
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V1 = EMU_ReadU32(A1 + 168); //+ 0xA8
	A0 = EMU_ReadU32(A1 + 112); //+ 0x70
	A2 = EMU_ReadU32(A1 + 88); //+ 0x58
	EMU_Write32(A1 + 24,V0); //+ 0x18
	EMU_Write32(A1 + 272,R0); //+ 0x110
	EMU_Write32(A1 + 132,R0); //+ 0x84
	EMU_Write32(A1 + 136,R0); //+ 0x88
	EMU_Write32(A1 + 140,R0); //+ 0x8C
	EMU_Write32(A1 + 260,R0); //+ 0x104
	EMU_Write32(A1 + 168,V1); //+ 0xA8
	if (!A2)
	{
		EMU_Write32(A1 + 148,A0); //+ 0x94
		ZZ_CLOCKCYCLES(30,0x8002FDD4);
		goto ZZ_2F9D4_400;
	}
	EMU_Write32(A1 + 148,A0); //+ 0x94
	EMU_Write32(A2 + 88,R0); //+ 0x58
	EMU_Write32(A1 + 88,R0); //+ 0x58
	ZZ_CLOCKCYCLES(32,0x8002FDD4);
ZZ_2F9D4_400:
	V0 = 0xC010000;
	V0 |= 0xFFFF;
	AT = 0x80060000;
	EMU_Write32(AT + 3036,R0); //+ 0xBDC
	AT = 0x80070000;
	EMU_Write32(AT - 12784,R0); //+ 0xFFFFCE10
	AT = 0x80060000;
	EMU_Write32(AT - 2484,R0); //+ 0xFFFFF64C
	AT = 0x80070000;
	EMU_Write32(AT - 12776,V0); //+ 0xFFFFCE18
	if (S5)
	{
		ZZ_CLOCKCYCLES(12,0x8002FE54);
		goto ZZ_2F9D4_480;
	}
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12772); //+ 0xFFFFCE1C
	V0 += 256;
	AT = 0x80070000;
	EMU_Write32(AT - 12772,V0); //+ 0xFFFFCE1C
	V0 = EMU_ReadU32(S4 + 52); //+ 0x34
	if (!V0)
	{
		ZZ_CLOCKCYCLES(22,0x8002FE3C);
		goto ZZ_2F9D4_468;
	}
	AT = 0x80070000;
	EMU_Write32(AT - 12360,R0); //+ 0xFFFFCFB8
	ZZ_CLOCKCYCLES(26,0x8002FE54);
	goto ZZ_2F9D4_480;
ZZ_2F9D4_468:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12360); //+ 0xFFFFCFB8
	V0 += 256;
	AT = 0x80070000;
	EMU_Write32(AT - 12360,V0); //+ 0xFFFFCFB8
	ZZ_CLOCKCYCLES(6,0x8002FE54);
ZZ_2F9D4_480:
	RA = 0x8002FE5C; //ZZ_2F9D4_488
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8002F53C);
	goto ZZ_2F53C;
ZZ_2F9D4_488:
	V0 = EMU_ReadU32(S4 + 4156); //+ 0x103C
	AT = 0x80070000;
	EMU_Write32(AT - 12544,V0); //+ 0xFFFFCF00
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	S5 = EMU_ReadU32(SP + 60); //+ 0x3C
	S4 = EMU_ReadU32(SP + 56); //+ 0x38
	S3 = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x800300B8,ZZ_30004_B4);
	ZZ_JUMPREGISTER(0x80037F7C,ZZ_37930_64C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002F9D4,0x8002FA64,ZZ_2F9D4);
ZZ_MARK_TARGET(0x8002FA64,0x8002FA80,ZZ_2F9D4_90);
ZZ_MARK_TARGET(0x8002FA80,0x8002FAC4,ZZ_2F9D4_AC);
ZZ_MARK_TARGET(0x8002FAC4,0x8002FAD8,ZZ_2F9D4_F0);
ZZ_MARK_TARGET(0x8002FAD8,0x8002FAF4,ZZ_2F9D4_104);
ZZ_MARK_TARGET(0x8002FAF4,0x8002FB14,ZZ_2F9D4_120);
ZZ_MARK_TARGET(0x8002FB14,0x8002FB20,ZZ_2F9D4_140);
ZZ_MARK_TARGET(0x8002FB20,0x8002FB50,ZZ_2F9D4_14C);
ZZ_MARK_TARGET(0x8002FB50,0x8002FB60,ZZ_2F9D4_17C);
ZZ_MARK_TARGET(0x8002FB60,0x8002FB74,ZZ_2F9D4_18C);
ZZ_MARK_TARGET(0x8002FB74,0x8002FB7C,ZZ_2F9D4_1A0);
ZZ_MARK_TARGET(0x8002FB7C,0x8002FB90,ZZ_2F9D4_1A8);
ZZ_MARK_TARGET(0x8002FB90,0x8002FB98,ZZ_2F9D4_1BC);
ZZ_MARK_TARGET(0x8002FB98,0x8002FBA8,ZZ_2F9D4_1C4);
ZZ_MARK_TARGET(0x8002FBA8,0x8002FBC8,ZZ_2F9D4_1D4);
ZZ_MARK_TARGET(0x8002FBC8,0x8002FBD0,ZZ_2F9D4_1F4);
ZZ_MARK_TARGET(0x8002FBD0,0x8002FBDC,ZZ_2F9D4_1FC);
ZZ_MARK_TARGET(0x8002FBDC,0x8002FC60,ZZ_2F9D4_208);
ZZ_MARK_TARGET(0x8002FC60,0x8002FC70,ZZ_2F9D4_28C);
ZZ_MARK_TARGET(0x8002FC70,0x8002FCA4,ZZ_2F9D4_29C);
ZZ_MARK_TARGET(0x8002FCA4,0x8002FCBC,ZZ_2F9D4_2D0);
ZZ_MARK_TARGET(0x8002FCBC,0x8002FCF0,ZZ_2F9D4_2E8);
ZZ_MARK_TARGET(0x8002FCF0,0x8002FCFC,ZZ_2F9D4_31C);
ZZ_MARK_TARGET(0x8002FCFC,0x8002FD08,ZZ_2F9D4_328);
ZZ_MARK_TARGET(0x8002FD08,0x8002FD40,ZZ_2F9D4_334);
ZZ_MARK_TARGET(0x8002FD40,0x8002FD4C,ZZ_2F9D4_36C);
ZZ_MARK_TARGET(0x8002FD4C,0x8002FD54,ZZ_2F9D4_378);
ZZ_MARK_TARGET(0x8002FD54,0x8002FDD4,ZZ_2F9D4_380);
ZZ_MARK_TARGET(0x8002FDD4,0x8002FE3C,ZZ_2F9D4_400);
ZZ_MARK_TARGET(0x8002FE3C,0x8002FE54,ZZ_2F9D4_468);
ZZ_MARK_TARGET(0x8002FE54,0x8002FE5C,ZZ_2F9D4_480);
ZZ_MARK_TARGET(0x8002FE5C,0x8002FE90,ZZ_2F9D4_488);
