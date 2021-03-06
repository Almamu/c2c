#ifdef ZZ_INCLUDE_CODE
ZZ_18BCC:
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	A1 = S2;
	EMU_Write32(SP + 32,RA); //+ 0x20
	ZZ_JUMPREGISTER_BEGIN(S1);
	RA = 0x80018BF8; //ZZ_18BCC_2C
	EMU_Write32(SP + 28,S3); //+ 0x1C
	ZZ_CLOCKCYCLES_JR(11);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S1,80018BF0)
	ZZ_JUMPREGISTER_END();
ZZ_18BCC_2C:
	S3 = V0;
	V0 = -25;
	if (S3 != V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x80018C18);
		goto ZZ_18BCC_4C;
	}
	A0 = S0;
	RA = 0x80018C10; //ZZ_18BCC_44
	A1 = R0;
	ZZ_CLOCKCYCLES(6,0x80019CF4);
	goto ZZ_19CF4;
ZZ_18BCC_44:
	V0 = -25;
	ZZ_CLOCKCYCLES(2,0x80018C54);
	goto ZZ_18BCC_88;
ZZ_18BCC_4C:
	A0 = EMU_ReadU32(S0 + 76); //+ 0x4C
	if (!A0)
	{
		V0 = S3;
		ZZ_CLOCKCYCLES(4,0x80018C54);
		goto ZZ_18BCC_88;
	}
	V0 = S3;
	ZZ_CLOCKCYCLES(4,0x80018C28);
ZZ_18BCC_5C:
	V0 = EMU_ReadU32(A0);
	if (!V0)
	{
		A1 = S1;
		ZZ_CLOCKCYCLES(4,0x80018C50);
		goto ZZ_18BCC_84;
	}
	A1 = S1;
	S0 = EMU_ReadU32(A0 + 72); //+ 0x48
	RA = 0x80018C44; //ZZ_18BCC_78
	A2 = S2;
	ZZ_CLOCKCYCLES(7,0x80018BCC);
	goto ZZ_18BCC;
ZZ_18BCC_78:
	A0 = S0;
	if (A0)
	{
		ZZ_CLOCKCYCLES(3,0x80018C28);
		goto ZZ_18BCC_5C;
	}
	ZZ_CLOCKCYCLES(3,0x80018C50);
ZZ_18BCC_84:
	V0 = S3;
	ZZ_CLOCKCYCLES(1,0x80018C54);
ZZ_18BCC_88:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80018E24,ZZ_18DD0_54);
	ZZ_JUMPREGISTER(0x80018C44,ZZ_18BCC_78);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018BCC,0x80018BF8,ZZ_18BCC);
ZZ_MARK_TARGET(0x80018BF8,0x80018C10,ZZ_18BCC_2C);
ZZ_MARK_TARGET(0x80018C10,0x80018C18,ZZ_18BCC_44);
ZZ_MARK_TARGET(0x80018C18,0x80018C28,ZZ_18BCC_4C);
ZZ_MARK_TARGET(0x80018C28,0x80018C44,ZZ_18BCC_5C);
ZZ_MARK_TARGET(0x80018C44,0x80018C50,ZZ_18BCC_78);
ZZ_MARK_TARGET(0x80018C50,0x80018C54,ZZ_18BCC_84);
ZZ_MARK_TARGET(0x80018C54,0x80018C74,ZZ_18BCC_88);
