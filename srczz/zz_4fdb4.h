#ifdef ZZ_INCLUDE_CODE
ZZ_4FDB4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5500); //+ 0xFFFFEA84
	SP -= 32;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	if (V0)
	{
		EMU_Write32(SP + 24,RA); //+ 0x18
		ZZ_CLOCKCYCLES(9,0x8004FE14);
		goto ZZ_4FDB4_60;
	}
	EMU_Write32(SP + 24,RA); //+ 0x18
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 5504); //+ 0xFFFFEA80
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 5488); //+ 0xFFFFEA90
	A0 = 2;
	RA = 0x8004FDF4; //ZZ_4FDB4_40
	A1 = V0 << A1;
	ZZ_CLOCKCYCLES(16,0x8004FB34);
	goto ZZ_4FB34;
ZZ_4FDB4_40:
	RA = 0x8004FDFC; //ZZ_4FDB4_48
	A0 = 1;
	ZZ_CLOCKCYCLES(2,0x8004FB34);
	goto ZZ_4FB34;
ZZ_4FDB4_48:
	A0 = 3;
	A1 = S1;
	RA = 0x8004FE0C; //ZZ_4FDB4_58
	A2 = S0;
	ZZ_CLOCKCYCLES(4,0x8004FB34);
	goto ZZ_4FB34;
ZZ_4FDB4_58:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x8004FE24);
	goto ZZ_4FDB4_70;
ZZ_4FDB4_60:
	A0 = S1;
	RA = 0x8004FE20; //ZZ_4FDB4_6C
	A1 = S0;
	ZZ_CLOCKCYCLES(3,0x8004F810);
	goto ZZ_4F810;
ZZ_4FDB4_6C:
	V0 = S0;
	ZZ_CLOCKCYCLES(1,0x8004FE24);
ZZ_4FDB4_70:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80051500,ZZ_514D0_30);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004FDB4,0x8004FDF4,ZZ_4FDB4);
ZZ_MARK_TARGET(0x8004FDF4,0x8004FDFC,ZZ_4FDB4_40);
ZZ_MARK_TARGET(0x8004FDFC,0x8004FE0C,ZZ_4FDB4_48);
ZZ_MARK_TARGET(0x8004FE0C,0x8004FE14,ZZ_4FDB4_58);
ZZ_MARK_TARGET(0x8004FE14,0x8004FE20,ZZ_4FDB4_60);
ZZ_MARK_TARGET(0x8004FE20,0x8004FE24,ZZ_4FDB4_6C);
ZZ_MARK_TARGET(0x8004FE24,0x8004FE38,ZZ_4FDB4_70);
