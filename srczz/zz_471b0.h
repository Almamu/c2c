#ifdef ZZ_INCLUDE_CODE
ZZ_471B0:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x800471C0; //ZZ_471B0_10
	ZZ_CLOCKCYCLES(4,0x800488AC);
	goto ZZ_488AC;
ZZ_471B0_10:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = V0 < 1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80048C34,ZZ_48B90_A4);
	ZZ_JUMPREGISTER(0x80048CC4,ZZ_48B90_134);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800471B0,ZZ_471B0);
ZZ_MARK(0x800471B4);
ZZ_MARK(0x800471B8);
ZZ_MARK(0x800471BC);
ZZ_MARK_TARGET(0x800471C0,ZZ_471B0_10);
ZZ_MARK(0x800471C4);
ZZ_MARK(0x800471C8);
ZZ_MARK(0x800471CC);