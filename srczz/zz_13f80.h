#ifdef ZZ_INCLUDE_CODE
ZZ_13F80:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	V0 = EMU_ReadS8(A0 + 14); //+ 0xE
	if (!V0)
	{
		V1 = V0;
		ZZ_CLOCKCYCLES(6,0x80013FA4);
		goto ZZ_13F80_24;
	}
	V1 = V0;
	V0 = V1 - 1;
	RA = 0x80013FA4; //ZZ_13F80_24
	EMU_Write8(A0 + 14,V0); //+ 0xE
	ZZ_CLOCKCYCLES(9,0x80013F14);
	goto ZZ_13F14;
ZZ_13F80_24:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800141FC,ZZ_1417C_80);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80013F80,ZZ_13F80);
ZZ_MARK(0x80013F84);
ZZ_MARK(0x80013F88);
ZZ_MARK(0x80013F8C);
ZZ_MARK(0x80013F90);
ZZ_MARK(0x80013F94);
ZZ_MARK(0x80013F98);
ZZ_MARK(0x80013F9C);
ZZ_MARK(0x80013FA0);
ZZ_MARK_TARGET(0x80013FA4,ZZ_13F80_24);
ZZ_MARK(0x80013FA8);
ZZ_MARK(0x80013FAC);
ZZ_MARK(0x80013FB0);