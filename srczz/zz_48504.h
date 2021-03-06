#ifdef ZZ_INCLUDE_CODE
ZZ_48504:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT - 13720,R0); //+ 0xFFFFCA68
	AT = 0x80060000;
	EMU_Write32(AT - 13724,R0); //+ 0xFFFFCA64
	AT = 0x80060000;
	EMU_Write32(AT - 13704,R0); //+ 0xFFFFCA78
	AT = 0x80060000;
	EMU_Write32(AT - 13708,R0); //+ 0xFFFFCA74
	RA = 0x80048534; //ZZ_48504_30
	ZZ_CLOCKCYCLES(12,0x8004A910);
	goto ZZ_4A910;
ZZ_48504_30:
	A1 = 0x80050000;
	A1 -= 30036;
	RA = 0x80048544; //ZZ_48504_40
	A0 = 2;
	ZZ_CLOCKCYCLES(4,0x8004A940);
	goto ZZ_4A940;
ZZ_48504_40:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80046C8C,ZZ_46C6C_20);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80048504,0x80048534,ZZ_48504);
ZZ_MARK_TARGET(0x80048534,0x80048544,ZZ_48504_30);
ZZ_MARK_TARGET(0x80048544,0x80048554,ZZ_48504_40);
