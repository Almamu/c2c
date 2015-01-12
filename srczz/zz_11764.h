#ifdef ZZ_INCLUDE_CODE
ZZ_11764:
	EMU_SMultiply(A1,A0);
	SP -= 32;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = LO;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 16,S0); //+ 0x10
	RA = 0x80011788; //ZZ_11764_24
	A0 = S1;
	ZZ_CLOCKCYCLES(9,0x8001148C);
	goto ZZ_1148C;
ZZ_11764_24:
	S0 = V0;
	if (!S0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(3,0x800117A4);
		goto ZZ_11764_40;
	}
	A0 = S0;
	RA = 0x8001179C; //ZZ_11764_38
	A1 = S1;
	ZZ_CLOCKCYCLES(5,0x800494AC);
	goto ZZ_494AC;
ZZ_11764_38:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x800117A8);
	goto ZZ_11764_44;
ZZ_11764_40:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x800117A8);
ZZ_11764_44:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800366C0,ZZ_366AC_14);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80011764,ZZ_11764);
ZZ_MARK(0x80011768);
ZZ_MARK(0x8001176C);
ZZ_MARK(0x80011770);
ZZ_MARK(0x80011774);
ZZ_MARK(0x80011778);
ZZ_MARK(0x8001177C);
ZZ_MARK(0x80011780);
ZZ_MARK(0x80011784);
ZZ_MARK_TARGET(0x80011788,ZZ_11764_24);
ZZ_MARK(0x8001178C);
ZZ_MARK(0x80011790);
ZZ_MARK(0x80011794);
ZZ_MARK(0x80011798);
ZZ_MARK_TARGET(0x8001179C,ZZ_11764_38);
ZZ_MARK(0x800117A0);
ZZ_MARK_TARGET(0x800117A4,ZZ_11764_40);
ZZ_MARK_TARGET(0x800117A8,ZZ_11764_44);
ZZ_MARK(0x800117AC);
ZZ_MARK(0x800117B0);
ZZ_MARK(0x800117B4);
ZZ_MARK(0x800117B8);