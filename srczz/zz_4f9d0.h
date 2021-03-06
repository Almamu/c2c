#ifdef ZZ_INCLUDE_CODE
ZZ_4F9D0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5448); //+ 0xFFFFEAB8
	SP -= 24;
	if (V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(5,0x8004F9EC);
		goto ZZ_4F9D0_1C;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8004F9EC; //ZZ_4F9D0_1C
	ZZ_CLOCKCYCLES(7,0x80050068);
	goto ZZ_50068;
ZZ_4F9D0_1C:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(A0 + 426); //+ 0x1AA
	V0 &= 0xFFCF;
	EMU_Write16(A0 + 426,V0); //+ 0x1AA
	V0 = EMU_ReadU16(A0 + 426); //+ 0x1AA
	V0 &= 0x30;
	if (!V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(12,0x8004FA40);
		goto ZZ_4F9D0_70;
	}
	V1 = R0;
	V1 += 1;
	ZZ_CLOCKCYCLES(13,0x8004FA20);
ZZ_4F9D0_50:
	V0 = V1 < 3841;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004FA40);
		goto ZZ_4F9D0_70;
	}
	V0 = EMU_ReadU16(A0 + 426); //+ 0x1AA
	V0 &= 0x30;
	if (V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(8,0x8004FA20);
		goto ZZ_4F9D0_50;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(8,0x8004FA40);
ZZ_4F9D0_70:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5472); //+ 0xFFFFEAA0
	if (!V0)
	{
		A0 = 0xF0000000;
		ZZ_CLOCKCYCLES(5,0x8004FA70);
		goto ZZ_4F9D0_A0;
	}
	A0 = 0xF0000000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5472); //+ 0xFFFFEAA0
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004FA68; //ZZ_4F9D0_98
	ZZ_CLOCKCYCLES_JR(10);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004FA60)
	ZZ_JUMPREGISTER_END();
ZZ_4F9D0_98:
	ZZ_CLOCKCYCLES(2,0x8004FA7C);
	goto ZZ_4F9D0_AC;
ZZ_4F9D0_A0:
	A0 |= 0x9;
	RA = 0x8004FA7C; //ZZ_4F9D0_AC
	A1 = 32;
	ZZ_CLOCKCYCLES(3,0x80049F54);
	goto ZZ_49F54;
ZZ_4F9D0_AC:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F9D0,0x8004F9EC,ZZ_4F9D0);
ZZ_MARK_TARGET(0x8004F9EC,0x8004FA20,ZZ_4F9D0_1C);
ZZ_MARK_TARGET(0x8004FA20,0x8004FA40,ZZ_4F9D0_50);
ZZ_MARK_TARGET(0x8004FA40,0x8004FA68,ZZ_4F9D0_70);
ZZ_MARK_TARGET(0x8004FA68,0x8004FA70,ZZ_4F9D0_98);
ZZ_MARK_TARGET(0x8004FA70,0x8004FA7C,ZZ_4F9D0_A0);
ZZ_MARK_TARGET(0x8004FA7C,0x8004FA8C,ZZ_4F9D0_AC);
