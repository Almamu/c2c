#ifdef ZZ_INCLUDE_CODE
ZZ_281B0:
	SP -= 112;
	EMU_Write32(SP + 100,S7); //+ 0x64
	S7 = EMU_ReadU32(SP + 128); //+ 0x80
	EMU_Write32(SP + 104,FP); //+ 0x68
	FP = EMU_ReadU32(SP + 132); //+ 0x84
	EMU_Write32(SP + 96,S6); //+ 0x60
	S6 = A0;
	EMU_Write32(SP + 76,S1); //+ 0x4C
	S1 = A2;
	EMU_Write32(SP + 84,S3); //+ 0x54
	S3 = A3;
	V1 = A1;
	A1 &= 0x1;
	EMU_Write32(SP + 108,RA); //+ 0x6C
	EMU_Write32(SP + 92,S5); //+ 0x5C
	EMU_Write32(SP + 88,S4); //+ 0x58
	EMU_Write32(SP + 80,S2); //+ 0x50
	if (A1)
	{
		EMU_Write32(SP + 72,S0); //+ 0x48
		ZZ_CLOCKCYCLES(19,0x80028208);
		goto ZZ_281B0_58;
	}
	EMU_Write32(SP + 72,S0); //+ 0x48
	V0 = V1 & 0xFFFF;
	if (V0)
	{
		T1 = S6 + V0;
		ZZ_CLOCKCYCLES(22,0x8002820C);
		goto ZZ_281B0_5C;
	}
	T1 = S6 + V0;
	ZZ_CLOCKCYCLES(22,0x80028208);
ZZ_281B0_58:
	T1 = V1 & 0xFFFF;
	ZZ_CLOCKCYCLES(1,0x8002820C);
ZZ_281B0_5C:
	V0 = V1 & 0x1;
	if (V0)
	{
		A1 = 0x7FFF0000;
		ZZ_CLOCKCYCLES(3,0x80028224);
		goto ZZ_281B0_74;
	}
	A1 = 0x7FFF0000;
	V0 = V1 & 0xFFFF;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x80028738);
		goto ZZ_281B0_588;
	}
	ZZ_CLOCKCYCLES(6,0x80028224);
ZZ_281B0_74:
	if (T1)
	{
		A1 |= 0xFFFF;
		ZZ_CLOCKCYCLES(2,0x8002843C);
		goto ZZ_281B0_28C;
	}
	A1 |= 0xFFFF;
	V0 = EMU_ReadU32(S7);
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8002824C);
		goto ZZ_281B0_9C;
	}
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(S1 + 12); //+ 0xC
	V0 += V1;
	ZZ_CLOCKCYCLES(10,0x80028250);
	goto ZZ_281B0_A0;
ZZ_281B0_9C:
	V0 = EMU_ReadU32(S1);
	ZZ_CLOCKCYCLES(1,0x80028250);
ZZ_281B0_A0:
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S7 + 4); //+ 0x4
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80028278);
		goto ZZ_281B0_C8;
	}
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	V1 = EMU_ReadU32(S1 + 16); //+ 0x10
	V0 += V1;
	ZZ_CLOCKCYCLES(10,0x8002827C);
	goto ZZ_281B0_CC;
ZZ_281B0_C8:
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8002827C);
ZZ_281B0_CC:
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(S7 + 8); //+ 0x8
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(6,0x800282A4);
		goto ZZ_281B0_F4;
	}
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V1 = EMU_ReadU32(S1 + 20); //+ 0x14
	V0 += V1;
	ZZ_CLOCKCYCLES(10,0x800282A8);
	goto ZZ_281B0_F8;
ZZ_281B0_F4:
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	ZZ_CLOCKCYCLES(1,0x800282A8);
ZZ_281B0_F8:
	EMU_Write32(SP + 32,V0); //+ 0x20
	A0 = EMU_ReadU32(S7);
	if (!A0)
	{
		ZZ_CLOCKCYCLES(6,0x80028314);
		goto ZZ_281B0_164;
	}
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S3);
	V0 = V0 - V1;
	V0 <<= 8;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(14,0x800282E4);
		goto ZZ_281B0_134;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(15,0x800282E4);
ZZ_281B0_134:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800282FC);
		goto ZZ_281B0_14C;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800282FC);
		goto ZZ_281B0_14C;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800282FC);
ZZ_281B0_14C:
	V1 = LO;
	V0 = (int32_t)V1 < (int32_t)A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80028314);
		goto ZZ_281B0_164;
	}
	A1 = V1;
	ZZ_CLOCKCYCLES(6,0x80028314);
ZZ_281B0_164:
	A0 = EMU_ReadU32(S7 + 4); //+ 0x4
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x80028378);
		goto ZZ_281B0_1C8;
	}
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = EMU_ReadU32(S3 + 4); //+ 0x4
	V0 = V0 - V1;
	V0 <<= 8;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(12,0x80028348);
		goto ZZ_281B0_198;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x80028348);
ZZ_281B0_198:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80028360);
		goto ZZ_281B0_1B0;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80028360);
		goto ZZ_281B0_1B0;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80028360);
ZZ_281B0_1B0:
	V1 = LO;
	V0 = (int32_t)V1 < (int32_t)A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80028378);
		goto ZZ_281B0_1C8;
	}
	A1 = V1;
	ZZ_CLOCKCYCLES(6,0x80028378);
ZZ_281B0_1C8:
	A0 = EMU_ReadU32(S7 + 8); //+ 0x8
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x800283DC);
		goto ZZ_281B0_22C;
	}
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = EMU_ReadU32(S3 + 8); //+ 0x8
	V0 = V0 - V1;
	V0 <<= 8;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(12,0x800283AC);
		goto ZZ_281B0_1FC;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x800283AC);
ZZ_281B0_1FC:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800283C4);
		goto ZZ_281B0_214;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800283C4);
		goto ZZ_281B0_214;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800283C4);
ZZ_281B0_214:
	V1 = LO;
	V0 = (int32_t)V1 < (int32_t)A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800283DC);
		goto ZZ_281B0_22C;
	}
	A1 = V1;
	ZZ_CLOCKCYCLES(6,0x800283DC);
ZZ_281B0_22C:
	V0 = EMU_ReadU32(S7);
	A1 += 256;
	EMU_SMultiply(A1,V0);
	V0 = EMU_ReadU32(S3);
	T2 = LO;
	V1 = (int32_t)T2 >> 8;
	V0 += V1;
	EMU_Write32(S3,V0);
	V0 = EMU_ReadU32(S7 + 4); //+ 0x4
	EMU_SMultiply(A1,V0);
	V0 = EMU_ReadU32(S3 + 4); //+ 0x4
	T2 = LO;
	V1 = (int32_t)T2 >> 8;
	V0 += V1;
	EMU_Write32(S3 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S7 + 8); //+ 0x8
	EMU_SMultiply(A1,V0);
	V0 = EMU_ReadU32(S3 + 8); //+ 0x8
	T2 = LO;
	V1 = (int32_t)T2 >> 8;
	V0 += V1;
	ZZ_CLOCKCYCLES(24,0x80028728);
	goto ZZ_281B0_578;
ZZ_281B0_28C:
	V0 = EMU_ReadU32(S7);
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x8002845C);
		goto ZZ_281B0_2AC;
	}
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(S1 + 12); //+ 0xC
	V0 += V1;
	ZZ_CLOCKCYCLES(8,0x80028460);
	goto ZZ_281B0_2B0;
ZZ_281B0_2AC:
	V0 = EMU_ReadU32(S1);
	ZZ_CLOCKCYCLES(1,0x80028460);
ZZ_281B0_2B0:
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S7 + 4); //+ 0x4
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80028488);
		goto ZZ_281B0_2D8;
	}
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	V1 = EMU_ReadU32(S1 + 16); //+ 0x10
	V0 += V1;
	ZZ_CLOCKCYCLES(10,0x8002848C);
	goto ZZ_281B0_2DC;
ZZ_281B0_2D8:
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(1,0x8002848C);
ZZ_281B0_2DC:
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(S7 + 8); //+ 0x8
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x800284B4);
		goto ZZ_281B0_304;
	}
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V1 = EMU_ReadU32(S1 + 20); //+ 0x14
	V0 += V1;
	ZZ_CLOCKCYCLES(10,0x800284B8);
	goto ZZ_281B0_308;
ZZ_281B0_304:
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	ZZ_CLOCKCYCLES(1,0x800284B8);
ZZ_281B0_308:
	EMU_Write32(SP + 32,V0); //+ 0x20
	A0 = EMU_ReadU32(S7);
	if (!A0)
	{
		A1 = 0x80000000;
		ZZ_CLOCKCYCLES(6,0x80028528);
		goto ZZ_281B0_378;
	}
	A1 = 0x80000000;
	V1 = EMU_ReadU32(S3);
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = V1 - A0;
	V0 = V0 - V1;
	V0 <<= 8;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(14,0x800284F4);
		goto ZZ_281B0_344;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(15,0x800284F4);
ZZ_281B0_344:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8002850C);
		goto ZZ_281B0_35C;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8002850C);
		goto ZZ_281B0_35C;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8002850C);
ZZ_281B0_35C:
	V1 = LO;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80028528);
		goto ZZ_281B0_378;
	}
	A1 = V1;
	T0 = R0;
	ZZ_CLOCKCYCLES(7,0x80028528);
ZZ_281B0_378:
	A0 = EMU_ReadU32(S7 + 8); //+ 0x8
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x800285CC);
		goto ZZ_281B0_41C;
	}
	V1 = EMU_ReadU32(S3 + 8); //+ 0x8
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	V1 = V1 - A0;
	V0 = V0 - V1;
	V0 <<= 8;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(12,0x8002855C);
		goto ZZ_281B0_3AC;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x8002855C);
ZZ_281B0_3AC:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80028574);
		goto ZZ_281B0_3C4;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80028574);
		goto ZZ_281B0_3C4;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80028574);
ZZ_281B0_3C4:
	V1 = LO;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800285C4);
		goto ZZ_281B0_414;
	}
	V0 = EMU_ReadU32(S7);
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(8,0x80028598);
		goto ZZ_281B0_3E8;
	}
	A0 = -A0;
	ZZ_CLOCKCYCLES(9,0x80028598);
ZZ_281B0_3E8:
	if ((int32_t)V0 < 0)
	{
		ZZ_CLOCKCYCLES(2,0x800285B4);
		goto ZZ_281B0_404;
	}
	V0 = (int32_t)V0 < (int32_t)A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800285CC);
		goto ZZ_281B0_41C;
	}
	A1 = V1;
	ZZ_CLOCKCYCLES(7,0x800285C8);
	goto ZZ_281B0_418;
ZZ_281B0_404:
	V0 = -V0;
	V0 = (int32_t)V0 < (int32_t)A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800285CC);
		goto ZZ_281B0_41C;
	}
	ZZ_CLOCKCYCLES(4,0x800285C4);
ZZ_281B0_414:
	A1 = V1;
	ZZ_CLOCKCYCLES(1,0x800285C8);
ZZ_281B0_418:
	T0 = 0x2;
	ZZ_CLOCKCYCLES(1,0x800285CC);
ZZ_281B0_41C:
	A0 = EMU_ReadU32(S7 + 4); //+ 0x4
	if (!A0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x800286A8);
		goto ZZ_281B0_4F8;
	}
	V0 = 0x1;
	V1 = EMU_ReadU32(S3 + 4); //+ 0x4
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = V1 - A0;
	V0 = V0 - V1;
	V0 <<= 8;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(12,0x80028600);
		goto ZZ_281B0_450;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x80028600);
ZZ_281B0_450:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80028618);
		goto ZZ_281B0_468;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80028618);
		goto ZZ_281B0_468;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80028618);
ZZ_281B0_468:
	V1 = LO;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800286A0);
		goto ZZ_281B0_4F0;
	}
	if (T0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(7,0x8002865C);
		goto ZZ_281B0_4AC;
	}
	V0 = 0x2;
	V0 = EMU_ReadU32(S7);
	if ((int32_t)A0 >= 0)
	{
		V1 = A0;
		ZZ_CLOCKCYCLES(10,0x80028644);
		goto ZZ_281B0_494;
	}
	V1 = A0;
	V1 = -V1;
	ZZ_CLOCKCYCLES(11,0x80028644);
ZZ_281B0_494:
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80028650);
		goto ZZ_281B0_4A0;
	}
	V0 = -V0;
	ZZ_CLOCKCYCLES(3,0x80028650);
ZZ_281B0_4A0:
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x800286A0);
		goto ZZ_281B0_4F0;
	}
	V0 = 0x2;
	ZZ_CLOCKCYCLES(3,0x8002865C);
ZZ_281B0_4AC:
	if (T0 != V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x800286A8);
		goto ZZ_281B0_4F8;
	}
	V0 = 0x1;
	V0 = EMU_ReadU32(S7 + 4); //+ 0x4
	V1 = EMU_ReadU32(S7 + 8); //+ 0x8
	if ((int32_t)V0 >= 0)
	{
		A0 = V0;
		ZZ_CLOCKCYCLES(6,0x80028678);
		goto ZZ_281B0_4C8;
	}
	A0 = V0;
	A0 = -A0;
	ZZ_CLOCKCYCLES(7,0x80028678);
ZZ_281B0_4C8:
	if ((int32_t)V1 < 0)
	{
		V0 = (int32_t)V1 < (int32_t)A0;
		ZZ_CLOCKCYCLES(2,0x80028690);
		goto ZZ_281B0_4E0;
	}
	V0 = (int32_t)V1 < (int32_t)A0;
	if (V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x800286A0);
		goto ZZ_281B0_4F0;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(6,0x800286A8);
	goto ZZ_281B0_4F8;
ZZ_281B0_4E0:
	V0 = -V1;
	V0 = (int32_t)V0 < (int32_t)A0;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x800286A8);
		goto ZZ_281B0_4F8;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x800286A0);
ZZ_281B0_4F0:
	T0 = 0x1;
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x800286A8);
ZZ_281B0_4F8:
	if (T0 == V0)
	{
		V0 = (int32_t)T0 < 2;
		ZZ_CLOCKCYCLES(2,0x800286F8);
		goto ZZ_281B0_548;
	}
	V0 = (int32_t)T0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800286C8);
		goto ZZ_281B0_518;
	}
	if (!T0)
	{
		V0 = T1;
		ZZ_CLOCKCYCLES(6,0x800286DC);
		goto ZZ_281B0_52C;
	}
	V0 = T1;
	ZZ_CLOCKCYCLES(8,0x80028990);
	goto ZZ_281B0_7E0;
ZZ_281B0_518:
	V0 = 0x2;
	if (T0 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x80028714);
		goto ZZ_281B0_564;
	}
	V0 = T1;
	ZZ_CLOCKCYCLES(5,0x80028990);
	goto ZZ_281B0_7E0;
ZZ_281B0_52C:
	V0 = EMU_ReadU32(S7);
	V0 = -V0;
	EMU_Write32(S7,V0);
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	EMU_Write32(S3,V0);
	ZZ_CLOCKCYCLES(7,0x80028730);
	goto ZZ_281B0_580;
ZZ_281B0_548:
	V0 = EMU_ReadU32(S7 + 4); //+ 0x4
	V0 = -V0;
	EMU_Write32(S7 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	EMU_Write32(S3 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(7,0x80028730);
	goto ZZ_281B0_580;
ZZ_281B0_564:
	V0 = EMU_ReadU32(S7 + 8); //+ 0x8
	V0 = -V0;
	EMU_Write32(S7 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_CLOCKCYCLES(5,0x80028728);
ZZ_281B0_578:
	EMU_Write32(S3 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(2,0x80028730);
ZZ_281B0_580:
	V0 = T1;
	ZZ_CLOCKCYCLES(2,0x80028990);
	goto ZZ_281B0_7E0;
ZZ_281B0_588:
	V0 = EMU_ReadS16(S6 + 30); //+ 0x1E
	V0 = (int32_t)FP < (int32_t)V0;
	if (!V0)
	{
		EMU_Write32(SP + 24,V0); //+ 0x18
		ZZ_CLOCKCYCLES(5,0x80028764);
		goto ZZ_281B0_5B4;
	}
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S1 + 12); //+ 0xC
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	ZZ_CLOCKCYCLES(11,0x80028768);
	goto ZZ_281B0_5B8;
ZZ_281B0_5B4:
	V0 = EMU_ReadU32(S1 + 12); //+ 0xC
	ZZ_CLOCKCYCLES(1,0x80028768);
ZZ_281B0_5B8:
	EMU_Write32(SP + 52,V0); //+ 0x34
	V0 = EMU_ReadS16(S6 + 32); //+ 0x20
	V0 = (int32_t)FP < (int32_t)V0;
	if (!V0)
	{
		EMU_Write32(SP + 28,V0); //+ 0x1C
		ZZ_CLOCKCYCLES(7,0x8002879C);
		goto ZZ_281B0_5EC;
	}
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(S1 + 16); //+ 0x10
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	ZZ_CLOCKCYCLES(13,0x800287A0);
	goto ZZ_281B0_5F0;
ZZ_281B0_5EC:
	V0 = EMU_ReadU32(S1 + 16); //+ 0x10
	ZZ_CLOCKCYCLES(1,0x800287A0);
ZZ_281B0_5F0:
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = EMU_ReadS16(S6 + 34); //+ 0x22
	V0 = (int32_t)FP < (int32_t)V0;
	if (!V0)
	{
		EMU_Write32(SP + 32,V0); //+ 0x20
		ZZ_CLOCKCYCLES(7,0x800287D4);
		goto ZZ_281B0_624;
	}
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(S1 + 20); //+ 0x14
	V1 = V0 >> 31;
	V0 += V1;
	V0 = (int32_t)V0 >> 1;
	ZZ_CLOCKCYCLES(13,0x800287D8);
	goto ZZ_281B0_628;
ZZ_281B0_624:
	V0 = EMU_ReadU32(S1 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(1,0x800287D8);
ZZ_281B0_628:
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	S4 = R0;
	S5 = R0;
	if (V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(7,0x800287FC);
		goto ZZ_281B0_64C;
	}
	V1 = R0;
	ZZ_CLOCKCYCLES(7,0x800287F4);
ZZ_281B0_644:
	if ((int32_t)V1 > 0)
	{
		ZZ_CLOCKCYCLES(2,0x80028990);
		goto ZZ_281B0_7E0;
	}
	ZZ_CLOCKCYCLES(2,0x800287FC);
ZZ_281B0_64C:
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = R0;
	if (V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(4,0x80028814);
		goto ZZ_281B0_664;
	}
	V1 = R0;
	ZZ_CLOCKCYCLES(4,0x8002880C);
ZZ_281B0_65C:
	if ((int32_t)V1 > 0)
	{
		ZZ_CLOCKCYCLES(2,0x80028974);
		goto ZZ_281B0_7C4;
	}
	ZZ_CLOCKCYCLES(2,0x80028814);
ZZ_281B0_664:
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	S0 = R0;
	if (V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(4,0x8002882C);
		goto ZZ_281B0_67C;
	}
	V1 = R0;
	ZZ_CLOCKCYCLES(4,0x80028824);
ZZ_281B0_674:
	if ((int32_t)V1 > 0)
	{
		ZZ_CLOCKCYCLES(2,0x80028958);
		goto ZZ_281B0_7A8;
	}
	ZZ_CLOCKCYCLES(2,0x8002882C);
ZZ_281B0_67C:
	A1 = EMU_ReadU32(S1);
	if (!S5)
	{
		ZZ_CLOCKCYCLES(3,0x80028844);
		goto ZZ_281B0_694;
	}
	V0 = EMU_ReadU32(SP + 52); //+ 0x34
	A1 += V0;
	ZZ_CLOCKCYCLES(6,0x80028844);
ZZ_281B0_694:
	EMU_Write32(SP + 40,A1); //+ 0x28
	A0 = EMU_ReadU32(S1 + 4); //+ 0x4
	if (!S2)
	{
		ZZ_CLOCKCYCLES(4,0x80028860);
		goto ZZ_281B0_6B0;
	}
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	A0 += V0;
	ZZ_CLOCKCYCLES(7,0x80028860);
ZZ_281B0_6B0:
	EMU_Write32(SP + 44,A0); //+ 0x2C
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	if (!S0)
	{
		ZZ_CLOCKCYCLES(4,0x8002887C);
		goto ZZ_281B0_6CC;
	}
	V0 = EMU_ReadU32(SP + 60); //+ 0x3C
	V1 += V0;
	ZZ_CLOCKCYCLES(7,0x8002887C);
ZZ_281B0_6CC:
	EMU_Write32(SP + 48,V1); //+ 0x30
	A2 = EMU_ReadU32(S3);
	V0 = (int32_t)A1 < (int32_t)A2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80028938);
		goto ZZ_281B0_788;
	}
	A3 = EMU_ReadU32(S3 + 4); //+ 0x4
	V0 = (int32_t)A0 < (int32_t)A3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80028938);
		goto ZZ_281B0_788;
	}
	T0 = EMU_ReadU32(S3 + 8); //+ 0x8
	V0 = (int32_t)V1 < (int32_t)T0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(16,0x80028938);
		goto ZZ_281B0_788;
	}
	V0 = EMU_ReadU32(SP + 52); //+ 0x34
	V0 += A1;
	V0 = (int32_t)V0 < (int32_t)A2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(22,0x80028938);
		goto ZZ_281B0_788;
	}
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	V0 += A0;
	V0 = (int32_t)V0 < (int32_t)A3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(28,0x80028938);
		goto ZZ_281B0_788;
	}
	V0 = EMU_ReadU32(SP + 60); //+ 0x3C
	V0 += V1;
	V0 = (int32_t)V0 < (int32_t)T0;
	if (V0)
	{
		V0 = S4 << 1;
		ZZ_CLOCKCYCLES(34,0x80028938);
		goto ZZ_281B0_788;
	}
	V0 = S4 << 1;
	V0 += T1;
	A1 = EMU_ReadU16(V0);
	V0 = FP + 1;
	A0 = S6;
	A2 = SP + 40;
	A3 = S3;
	EMU_Write32(SP + 16,S7); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	RA = 0x8002892C; //ZZ_281B0_77C
	EMU_Write32(SP + 64,T1); //+ 0x40
	ZZ_CLOCKCYCLES(44,0x800281B0);
	goto ZZ_281B0;
ZZ_281B0_77C:
	T1 = EMU_ReadU32(SP + 64); //+ 0x40
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x80028990);
		goto ZZ_281B0_7E0;
	}
	ZZ_CLOCKCYCLES(3,0x80028938);
ZZ_281B0_788:
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	S0 += 1;
	S4 += 1;
	if (!V0)
	{
		V1 = S0;
		ZZ_CLOCKCYCLES(5,0x80028824);
		goto ZZ_281B0_674;
	}
	V1 = S0;
	V0 = (int32_t)V1 < 2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8002882C);
		goto ZZ_281B0_67C;
	}
	ZZ_CLOCKCYCLES(8,0x80028958);
ZZ_281B0_7A8:
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	V1 = S2 + 1;
	if (!V0)
	{
		S2 = V1;
		ZZ_CLOCKCYCLES(4,0x8002880C);
		goto ZZ_281B0_65C;
	}
	S2 = V1;
	V0 = (int32_t)V1 < 2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x80028814);
		goto ZZ_281B0_664;
	}
	ZZ_CLOCKCYCLES(7,0x80028974);
ZZ_281B0_7C4:
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = S5 + 1;
	if (!V0)
	{
		S5 = V1;
		ZZ_CLOCKCYCLES(4,0x800287F4);
		goto ZZ_281B0_644;
	}
	S5 = V1;
	V0 = (int32_t)V1 < 2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x800287FC);
		goto ZZ_281B0_64C;
	}
	ZZ_CLOCKCYCLES(7,0x80028990);
ZZ_281B0_7E0:
	RA = EMU_ReadU32(SP + 108); //+ 0x6C
	FP = EMU_ReadU32(SP + 104); //+ 0x68
	S7 = EMU_ReadU32(SP + 100); //+ 0x64
	S6 = EMU_ReadU32(SP + 96); //+ 0x60
	S5 = EMU_ReadU32(SP + 92); //+ 0x5C
	S4 = EMU_ReadU32(SP + 88); //+ 0x58
	S3 = EMU_ReadU32(SP + 84); //+ 0x54
	S2 = EMU_ReadU32(SP + 80); //+ 0x50
	S1 = EMU_ReadU32(SP + 76); //+ 0x4C
	S0 = EMU_ReadU32(SP + 72); //+ 0x48
	SP += 112;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80028B44,ZZ_289C4_180);
	ZZ_JUMPREGISTER(0x8002892C,ZZ_281B0_77C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800281B0,0x80028208,ZZ_281B0);
ZZ_MARK_TARGET(0x80028208,0x8002820C,ZZ_281B0_58);
ZZ_MARK_TARGET(0x8002820C,0x80028224,ZZ_281B0_5C);
ZZ_MARK_TARGET(0x80028224,0x8002824C,ZZ_281B0_74);
ZZ_MARK_TARGET(0x8002824C,0x80028250,ZZ_281B0_9C);
ZZ_MARK_TARGET(0x80028250,0x80028278,ZZ_281B0_A0);
ZZ_MARK_TARGET(0x80028278,0x8002827C,ZZ_281B0_C8);
ZZ_MARK_TARGET(0x8002827C,0x800282A4,ZZ_281B0_CC);
ZZ_MARK_TARGET(0x800282A4,0x800282A8,ZZ_281B0_F4);
ZZ_MARK_TARGET(0x800282A8,0x800282E4,ZZ_281B0_F8);
ZZ_MARK_TARGET(0x800282E4,0x800282FC,ZZ_281B0_134);
ZZ_MARK_TARGET(0x800282FC,0x80028314,ZZ_281B0_14C);
ZZ_MARK_TARGET(0x80028314,0x80028348,ZZ_281B0_164);
ZZ_MARK_TARGET(0x80028348,0x80028360,ZZ_281B0_198);
ZZ_MARK_TARGET(0x80028360,0x80028378,ZZ_281B0_1B0);
ZZ_MARK_TARGET(0x80028378,0x800283AC,ZZ_281B0_1C8);
ZZ_MARK_TARGET(0x800283AC,0x800283C4,ZZ_281B0_1FC);
ZZ_MARK_TARGET(0x800283C4,0x800283DC,ZZ_281B0_214);
ZZ_MARK_TARGET(0x800283DC,0x8002843C,ZZ_281B0_22C);
ZZ_MARK_TARGET(0x8002843C,0x8002845C,ZZ_281B0_28C);
ZZ_MARK_TARGET(0x8002845C,0x80028460,ZZ_281B0_2AC);
ZZ_MARK_TARGET(0x80028460,0x80028488,ZZ_281B0_2B0);
ZZ_MARK_TARGET(0x80028488,0x8002848C,ZZ_281B0_2D8);
ZZ_MARK_TARGET(0x8002848C,0x800284B4,ZZ_281B0_2DC);
ZZ_MARK_TARGET(0x800284B4,0x800284B8,ZZ_281B0_304);
ZZ_MARK_TARGET(0x800284B8,0x800284F4,ZZ_281B0_308);
ZZ_MARK_TARGET(0x800284F4,0x8002850C,ZZ_281B0_344);
ZZ_MARK_TARGET(0x8002850C,0x80028528,ZZ_281B0_35C);
ZZ_MARK_TARGET(0x80028528,0x8002855C,ZZ_281B0_378);
ZZ_MARK_TARGET(0x8002855C,0x80028574,ZZ_281B0_3AC);
ZZ_MARK_TARGET(0x80028574,0x80028598,ZZ_281B0_3C4);
ZZ_MARK_TARGET(0x80028598,0x800285B4,ZZ_281B0_3E8);
ZZ_MARK_TARGET(0x800285B4,0x800285C4,ZZ_281B0_404);
ZZ_MARK_TARGET(0x800285C4,0x800285C8,ZZ_281B0_414);
ZZ_MARK_TARGET(0x800285C8,0x800285CC,ZZ_281B0_418);
ZZ_MARK_TARGET(0x800285CC,0x80028600,ZZ_281B0_41C);
ZZ_MARK_TARGET(0x80028600,0x80028618,ZZ_281B0_450);
ZZ_MARK_TARGET(0x80028618,0x80028644,ZZ_281B0_468);
ZZ_MARK_TARGET(0x80028644,0x80028650,ZZ_281B0_494);
ZZ_MARK_TARGET(0x80028650,0x8002865C,ZZ_281B0_4A0);
ZZ_MARK_TARGET(0x8002865C,0x80028678,ZZ_281B0_4AC);
ZZ_MARK_TARGET(0x80028678,0x80028690,ZZ_281B0_4C8);
ZZ_MARK_TARGET(0x80028690,0x800286A0,ZZ_281B0_4E0);
ZZ_MARK_TARGET(0x800286A0,0x800286A8,ZZ_281B0_4F0);
ZZ_MARK_TARGET(0x800286A8,0x800286C8,ZZ_281B0_4F8);
ZZ_MARK_TARGET(0x800286C8,0x800286DC,ZZ_281B0_518);
ZZ_MARK_TARGET(0x800286DC,0x800286F8,ZZ_281B0_52C);
ZZ_MARK_TARGET(0x800286F8,0x80028714,ZZ_281B0_548);
ZZ_MARK_TARGET(0x80028714,0x80028728,ZZ_281B0_564);
ZZ_MARK_TARGET(0x80028728,0x80028730,ZZ_281B0_578);
ZZ_MARK_TARGET(0x80028730,0x80028738,ZZ_281B0_580);
ZZ_MARK_TARGET(0x80028738,0x80028764,ZZ_281B0_588);
ZZ_MARK_TARGET(0x80028764,0x80028768,ZZ_281B0_5B4);
ZZ_MARK_TARGET(0x80028768,0x8002879C,ZZ_281B0_5B8);
ZZ_MARK_TARGET(0x8002879C,0x800287A0,ZZ_281B0_5EC);
ZZ_MARK_TARGET(0x800287A0,0x800287D4,ZZ_281B0_5F0);
ZZ_MARK_TARGET(0x800287D4,0x800287D8,ZZ_281B0_624);
ZZ_MARK_TARGET(0x800287D8,0x800287F4,ZZ_281B0_628);
ZZ_MARK_TARGET(0x800287F4,0x800287FC,ZZ_281B0_644);
ZZ_MARK_TARGET(0x800287FC,0x8002880C,ZZ_281B0_64C);
ZZ_MARK_TARGET(0x8002880C,0x80028814,ZZ_281B0_65C);
ZZ_MARK_TARGET(0x80028814,0x80028824,ZZ_281B0_664);
ZZ_MARK_TARGET(0x80028824,0x8002882C,ZZ_281B0_674);
ZZ_MARK_TARGET(0x8002882C,0x80028844,ZZ_281B0_67C);
ZZ_MARK_TARGET(0x80028844,0x80028860,ZZ_281B0_694);
ZZ_MARK_TARGET(0x80028860,0x8002887C,ZZ_281B0_6B0);
ZZ_MARK_TARGET(0x8002887C,0x8002892C,ZZ_281B0_6CC);
ZZ_MARK_TARGET(0x8002892C,0x80028938,ZZ_281B0_77C);
ZZ_MARK_TARGET(0x80028938,0x80028958,ZZ_281B0_788);
ZZ_MARK_TARGET(0x80028958,0x80028974,ZZ_281B0_7A8);
ZZ_MARK_TARGET(0x80028974,0x80028990,ZZ_281B0_7C4);
ZZ_MARK_TARGET(0x80028990,0x800289C4,ZZ_281B0_7E0);
