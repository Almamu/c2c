#ifdef ZZ_INCLUDE_CODE
ZZ_18D08:
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	V1 = R0;
	EMU_Write32(SP + 32,RA); //+ 0x20
	if (S0)
	{
		EMU_Write32(SP + 28,S3); //+ 0x1C
		ZZ_CLOCKCYCLES(11,0x80018D3C);
		goto ZZ_18D08_34;
	}
	EMU_Write32(SP + 28,S3); //+ 0x1C
	V0 = R0;
	ZZ_CLOCKCYCLES(13,0x80018DB0);
	goto ZZ_18D08_A8;
ZZ_18D08_34:
	V0 = EMU_ReadU32(S0);
	S3 = 0x2;
	if (V0 == S3)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x80018D70);
		goto ZZ_18D08_68;
	}
	A0 = S0;
	ZZ_JUMPREGISTER_BEGIN(S1);
	RA = 0x80018D54; //ZZ_18D08_4C
	A1 = S2;
	ZZ_CLOCKCYCLES_JR(6);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S1,80018D4C)
	ZZ_JUMPREGISTER_END();
ZZ_18D08_4C:
	V1 = V0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(3,0x80018DB0);
		goto ZZ_18D08_A8;
	}
	V0 = EMU_ReadU32(S0);
	if (V0 != S3)
	{
		ZZ_CLOCKCYCLES(7,0x80018D7C);
		goto ZZ_18D08_74;
	}
	ZZ_CLOCKCYCLES(7,0x80018D70);
ZZ_18D08_68:
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(3,0x80018D9C);
	goto ZZ_18D08_94;
ZZ_18D08_74:
	A0 = EMU_ReadU32(S0 + 76); //+ 0x4C
	ZZ_CLOCKCYCLES(3,0x80018D9C);
	goto ZZ_18D08_94;
ZZ_18D08_80:
	S0 = EMU_ReadU32(A0 + 72); //+ 0x48
	RA = 0x80018D94; //ZZ_18D08_8C
	A2 = S2;
	ZZ_CLOCKCYCLES(3,0x80018D08);
	goto ZZ_18D08;
ZZ_18D08_8C:
	V1 = V0;
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80018D9C);
ZZ_18D08_94:
	if (!A0)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(2,0x80018DB0);
		goto ZZ_18D08_A8;
	}
	V0 = V1;
	if (!V1)
	{
		A1 = S1;
		ZZ_CLOCKCYCLES(4,0x80018D88);
		goto ZZ_18D08_80;
	}
	A1 = S1;
	V0 = V1;
	ZZ_CLOCKCYCLES(5,0x80018DB0);
ZZ_18D08_A8:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x800199EC,ZZ_19928_C4);
	ZZ_JUMPREGISTER(0x80018D94,ZZ_18D08_8C);
	ZZ_JUMPREGISTER(0x80037BE4,ZZ_37930_2B4);
	ZZ_JUMPREGISTER(0x80038320,ZZ_37930_9F0);
	ZZ_JUMPREGISTER(0x80038338,ZZ_37930_A08);
	ZZ_JUMPREGISTER(0x8001A118,ZZ_1A0D8_40);
	ZZ_JUMPREGISTER(0x800195D8,ZZ_191D4_404);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018D08,ZZ_18D08);
ZZ_MARK(0x80018D0C);
ZZ_MARK(0x80018D10);
ZZ_MARK(0x80018D14);
ZZ_MARK(0x80018D18);
ZZ_MARK(0x80018D1C);
ZZ_MARK(0x80018D20);
ZZ_MARK(0x80018D24);
ZZ_MARK(0x80018D28);
ZZ_MARK(0x80018D2C);
ZZ_MARK(0x80018D30);
ZZ_MARK(0x80018D34);
ZZ_MARK(0x80018D38);
ZZ_MARK_TARGET(0x80018D3C,ZZ_18D08_34);
ZZ_MARK(0x80018D40);
ZZ_MARK(0x80018D44);
ZZ_MARK(0x80018D48);
ZZ_MARK(0x80018D4C);
ZZ_MARK(0x80018D50);
ZZ_MARK_TARGET(0x80018D54,ZZ_18D08_4C);
ZZ_MARK(0x80018D58);
ZZ_MARK(0x80018D5C);
ZZ_MARK(0x80018D60);
ZZ_MARK(0x80018D64);
ZZ_MARK(0x80018D68);
ZZ_MARK(0x80018D6C);
ZZ_MARK_TARGET(0x80018D70,ZZ_18D08_68);
ZZ_MARK(0x80018D74);
ZZ_MARK(0x80018D78);
ZZ_MARK_TARGET(0x80018D7C,ZZ_18D08_74);
ZZ_MARK(0x80018D80);
ZZ_MARK(0x80018D84);
ZZ_MARK_TARGET(0x80018D88,ZZ_18D08_80);
ZZ_MARK(0x80018D8C);
ZZ_MARK(0x80018D90);
ZZ_MARK_TARGET(0x80018D94,ZZ_18D08_8C);
ZZ_MARK(0x80018D98);
ZZ_MARK_TARGET(0x80018D9C,ZZ_18D08_94);
ZZ_MARK(0x80018DA0);
ZZ_MARK(0x80018DA4);
ZZ_MARK(0x80018DA8);
ZZ_MARK(0x80018DAC);
ZZ_MARK_TARGET(0x80018DB0,ZZ_18D08_A8);
ZZ_MARK(0x80018DB4);
ZZ_MARK(0x80018DB8);
ZZ_MARK(0x80018DBC);
ZZ_MARK(0x80018DC0);
ZZ_MARK(0x80018DC4);
ZZ_MARK(0x80018DC8);
ZZ_MARK(0x80018DCC);