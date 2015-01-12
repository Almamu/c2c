#ifdef ZZ_INCLUDE_CODE
ZZ_289C4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	SP -= 112;
	EMU_Write32(SP + 100,S7); //+ 0x64
	S7 = A1;
	EMU_Write32(SP + 104,RA); //+ 0x68
	EMU_Write32(SP + 96,S6); //+ 0x60
	EMU_Write32(SP + 92,S5); //+ 0x5C
	EMU_Write32(SP + 88,S4); //+ 0x58
	EMU_Write32(SP + 84,S3); //+ 0x54
	EMU_Write32(SP + 80,S2); //+ 0x50
	EMU_Write32(SP + 76,S1); //+ 0x4C
	EMU_Write32(SP + 72,S0); //+ 0x48
	V1 = EMU_ReadU32(S7);
	S4 = EMU_ReadU32(V0 + 16); //+ 0x10
	if (V1)
	{
		S5 = A0;
		ZZ_CLOCKCYCLES(17,0x80028A28);
		goto ZZ_289C4_64;
	}
	S5 = A0;
	V0 = EMU_ReadU32(S7 + 4); //+ 0x4
	if (V0)
	{
		ZZ_CLOCKCYCLES(21,0x80028A28);
		goto ZZ_289C4_64;
	}
	V0 = EMU_ReadU32(S7 + 8); //+ 0x8
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(25,0x80028B50);
		goto ZZ_289C4_18C;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(25,0x80028A28);
ZZ_289C4_64:
	V0 = EMU_ReadU32(S5);
	V1 = EMU_ReadU32(S5 + 4); //+ 0x4
	A0 = EMU_ReadU32(S5 + 8); //+ 0x8
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,V1); //+ 0x1C
	EMU_Write32(SP + 32,A0); //+ 0x20
	V0 = EMU_ReadU32(S4 + 400); //+ 0x190
	if ((int32_t)V0 <= 0)
	{
		S3 = R0;
		ZZ_CLOCKCYCLES(10,0x80028AAC);
		goto ZZ_289C4_E8;
	}
	S3 = R0;
	S2 = 0x194;
	S1 = S4;
	ZZ_CLOCKCYCLES(12,0x80028A58);
ZZ_289C4_94:
	V0 = EMU_ReadU32(S1 + 436); //+ 0x1B4
	V0 &= 0x4;
	if (!V0)
	{
		A0 = S4 + S2;
		ZZ_CLOCKCYCLES(5,0x80028A90);
		goto ZZ_289C4_CC;
	}
	A0 = S4 + S2;
	A1 = 0x1;
	RA = 0x80028A78; //ZZ_289C4_B4
	A2 = R0;
	ZZ_CLOCKCYCLES(8,0x80014364);
	goto ZZ_14364;
ZZ_289C4_B4:
	S0 = V0;
	A0 = S0;
	RA = 0x80028A88; //ZZ_289C4_C4
	A1 = S5;
	ZZ_CLOCKCYCLES(4,0x80031080);
	goto ZZ_31080;
ZZ_289C4_C4:
	if (V0)
	{
		A2 = SP + 40;
		ZZ_CLOCKCYCLES(2,0x80028AC8);
		goto ZZ_289C4_104;
	}
	A2 = SP + 40;
	ZZ_CLOCKCYCLES(2,0x80028A90);
ZZ_289C4_CC:
	V0 = EMU_ReadU32(S4 + 400); //+ 0x190
	S2 += 4;
	S3 += 1;
	V0 = (int32_t)S3 < (int32_t)V0;
	if (V0)
	{
		S1 += 4;
		ZZ_CLOCKCYCLES(6,0x80028A58);
		goto ZZ_289C4_94;
	}
	S1 += 4;
	ZZ_CLOCKCYCLES(6,0x80028AA8);
ZZ_289C4_E4:
	V0 = EMU_ReadU32(S4 + 400); //+ 0x190
	ZZ_CLOCKCYCLES(1,0x80028AAC);
ZZ_289C4_E8:
	if (S3 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x80028B4C);
		goto ZZ_289C4_188;
	}
	if (!S6)
	{
		V0 = S6;
		ZZ_CLOCKCYCLES(5,0x80028A28);
		goto ZZ_289C4_64;
	}
	V0 = S6;
	ZZ_CLOCKCYCLES(7,0x80028B50);
	goto ZZ_289C4_18C;
ZZ_289C4_104:
	A0 = EMU_ReadU32(S0 + 20); //+ 0x14
	V0 = EMU_ReadU32(A0);
	V0 <<= 8;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 <<= 8;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 <<= 8;
	EMU_Write32(SP + 48,V0); //+ 0x30
	V0 = EMU_ReadU32(A0 + 12); //+ 0xC
	V0 <<= 8;
	EMU_Write32(SP + 52,V0); //+ 0x34
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 <<= 8;
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	V0 <<= 8;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	A1 = EMU_ReadU16(A0 + 28); //+ 0x1C
	A3 = S5;
	EMU_Write32(SP + 16,S7); //+ 0x10
	RA = 0x80028B44; //ZZ_289C4_180
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(31,0x800281B0);
	goto ZZ_281B0;
ZZ_289C4_180:
	S6 = V0;
	ZZ_CLOCKCYCLES(2,0x80028AA8);
	goto ZZ_289C4_E4;
ZZ_289C4_188:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x80028B50);
ZZ_289C4_18C:
	RA = EMU_ReadU32(SP + 104); //+ 0x68
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
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x80038A68,ZZ_38998_D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800289C4,ZZ_289C4);
ZZ_MARK(0x800289C8);
ZZ_MARK(0x800289CC);
ZZ_MARK(0x800289D0);
ZZ_MARK(0x800289D4);
ZZ_MARK(0x800289D8);
ZZ_MARK(0x800289DC);
ZZ_MARK(0x800289E0);
ZZ_MARK(0x800289E4);
ZZ_MARK(0x800289E8);
ZZ_MARK(0x800289EC);
ZZ_MARK(0x800289F0);
ZZ_MARK(0x800289F4);
ZZ_MARK(0x800289F8);
ZZ_MARK(0x800289FC);
ZZ_MARK(0x80028A00);
ZZ_MARK(0x80028A04);
ZZ_MARK(0x80028A08);
ZZ_MARK(0x80028A0C);
ZZ_MARK(0x80028A10);
ZZ_MARK(0x80028A14);
ZZ_MARK(0x80028A18);
ZZ_MARK(0x80028A1C);
ZZ_MARK(0x80028A20);
ZZ_MARK(0x80028A24);
ZZ_MARK_TARGET(0x80028A28,ZZ_289C4_64);
ZZ_MARK(0x80028A2C);
ZZ_MARK(0x80028A30);
ZZ_MARK(0x80028A34);
ZZ_MARK(0x80028A38);
ZZ_MARK(0x80028A3C);
ZZ_MARK(0x80028A40);
ZZ_MARK(0x80028A44);
ZZ_MARK(0x80028A48);
ZZ_MARK(0x80028A4C);
ZZ_MARK(0x80028A50);
ZZ_MARK(0x80028A54);
ZZ_MARK_TARGET(0x80028A58,ZZ_289C4_94);
ZZ_MARK(0x80028A5C);
ZZ_MARK(0x80028A60);
ZZ_MARK(0x80028A64);
ZZ_MARK(0x80028A68);
ZZ_MARK(0x80028A6C);
ZZ_MARK(0x80028A70);
ZZ_MARK(0x80028A74);
ZZ_MARK_TARGET(0x80028A78,ZZ_289C4_B4);
ZZ_MARK(0x80028A7C);
ZZ_MARK(0x80028A80);
ZZ_MARK(0x80028A84);
ZZ_MARK_TARGET(0x80028A88,ZZ_289C4_C4);
ZZ_MARK(0x80028A8C);
ZZ_MARK_TARGET(0x80028A90,ZZ_289C4_CC);
ZZ_MARK(0x80028A94);
ZZ_MARK(0x80028A98);
ZZ_MARK(0x80028A9C);
ZZ_MARK(0x80028AA0);
ZZ_MARK(0x80028AA4);
ZZ_MARK_TARGET(0x80028AA8,ZZ_289C4_E4);
ZZ_MARK_TARGET(0x80028AAC,ZZ_289C4_E8);
ZZ_MARK(0x80028AB0);
ZZ_MARK(0x80028AB4);
ZZ_MARK(0x80028AB8);
ZZ_MARK(0x80028ABC);
ZZ_MARK(0x80028AC0);
ZZ_MARK(0x80028AC4);
ZZ_MARK_TARGET(0x80028AC8,ZZ_289C4_104);
ZZ_MARK(0x80028ACC);
ZZ_MARK(0x80028AD0);
ZZ_MARK(0x80028AD4);
ZZ_MARK(0x80028AD8);
ZZ_MARK(0x80028ADC);
ZZ_MARK(0x80028AE0);
ZZ_MARK(0x80028AE4);
ZZ_MARK(0x80028AE8);
ZZ_MARK(0x80028AEC);
ZZ_MARK(0x80028AF0);
ZZ_MARK(0x80028AF4);
ZZ_MARK(0x80028AF8);
ZZ_MARK(0x80028AFC);
ZZ_MARK(0x80028B00);
ZZ_MARK(0x80028B04);
ZZ_MARK(0x80028B08);
ZZ_MARK(0x80028B0C);
ZZ_MARK(0x80028B10);
ZZ_MARK(0x80028B14);
ZZ_MARK(0x80028B18);
ZZ_MARK(0x80028B1C);
ZZ_MARK(0x80028B20);
ZZ_MARK(0x80028B24);
ZZ_MARK(0x80028B28);
ZZ_MARK(0x80028B2C);
ZZ_MARK(0x80028B30);
ZZ_MARK(0x80028B34);
ZZ_MARK(0x80028B38);
ZZ_MARK(0x80028B3C);
ZZ_MARK(0x80028B40);
ZZ_MARK_TARGET(0x80028B44,ZZ_289C4_180);
ZZ_MARK(0x80028B48);
ZZ_MARK_TARGET(0x80028B4C,ZZ_289C4_188);
ZZ_MARK_TARGET(0x80028B50,ZZ_289C4_18C);
ZZ_MARK(0x80028B54);
ZZ_MARK(0x80028B58);
ZZ_MARK(0x80028B5C);
ZZ_MARK(0x80028B60);
ZZ_MARK(0x80028B64);
ZZ_MARK(0x80028B68);
ZZ_MARK(0x80028B6C);
ZZ_MARK(0x80028B70);
ZZ_MARK(0x80028B74);
ZZ_MARK(0x80028B78);
ZZ_MARK(0x80028B7C);