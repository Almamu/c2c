#ifdef ZZ_INCLUDE_CODE
ZZ_27410:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	V0 = -256;
	A1 = 0x1;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(S0,V0);
	RA = 0x80027434; //ZZ_27410_24
	EMU_Write32(S0 + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(9,0x8002744C);
	goto ZZ_2744C;
ZZ_27410_24:
	EMU_Write32(S0,R0);
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80027370,ZZ_27338_38);
	ZZ_JUMPREGISTER(0x800273C4,ZZ_27338_8C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027410,ZZ_27410);
ZZ_MARK(0x80027414);
ZZ_MARK(0x80027418);
ZZ_MARK(0x8002741C);
ZZ_MARK(0x80027420);
ZZ_MARK(0x80027424);
ZZ_MARK(0x80027428);
ZZ_MARK(0x8002742C);
ZZ_MARK(0x80027430);
ZZ_MARK_TARGET(0x80027434,ZZ_27410_24);
ZZ_MARK(0x80027438);
ZZ_MARK(0x8002743C);
ZZ_MARK(0x80027440);
ZZ_MARK(0x80027444);
ZZ_MARK(0x80027448);