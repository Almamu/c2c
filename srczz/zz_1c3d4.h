#ifdef ZZ_INCLUDE_CODE
ZZ_1C3D4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14060); //+ 0x36EC
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = EMU_ReadU32(V0 + 12); //+ 0xC
	V0 = 0xCCCC0000;
	V0 |= 0xCCCD;
	EMU_UMultiply(V1,V0);
	A3 = HI;
	V0 = A3 >> 5;
	AT = 0x80070000;
	EMU_Write32(AT - 12804,V0); //+ 0xFFFFCDFC
	RA = 0x8001C410; //ZZ_1C3D4_3C
	S0 = A0;
	ZZ_CLOCKCYCLES(15,0x8002CDAC);
	goto ZZ_2CDAC;
ZZ_1C3D4_3C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3036); //+ 0xBDC
	AT = 0x80070000;
	EMU_Write32(AT - 12476,V0); //+ 0xFFFFCF44
	RA = 0x8001C428; //ZZ_1C3D4_54
	ZZ_CLOCKCYCLES(6,0x8001A040);
	goto ZZ_1A040;
ZZ_1C3D4_54:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001C454);
		goto ZZ_1C3D4_80;
	}
	A0 = 0x80020000;
	A0 -= 29232;
	A1 = 0x80020000;
	A1 -= 14256;
	RA = 0x8001C454; //ZZ_1C3D4_80
	A2 = S0;
	ZZ_CLOCKCYCLES(11,0x80018F0C);
	goto ZZ_18F0C;
ZZ_1C3D4_80:
	V0 = 0x80060000;
	V0 -= 14420;
	AT = 0x1F800000;
	EMU_Write32(AT + 92,V0); //+ 0x5C
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80011D8C,ZZ_11800_58C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001C3D4,ZZ_1C3D4);
ZZ_MARK(0x8001C3D8);
ZZ_MARK(0x8001C3DC);
ZZ_MARK(0x8001C3E0);
ZZ_MARK(0x8001C3E4);
ZZ_MARK(0x8001C3E8);
ZZ_MARK(0x8001C3EC);
ZZ_MARK(0x8001C3F0);
ZZ_MARK(0x8001C3F4);
ZZ_MARK(0x8001C3F8);
ZZ_MARK(0x8001C3FC);
ZZ_MARK(0x8001C400);
ZZ_MARK(0x8001C404);
ZZ_MARK(0x8001C408);
ZZ_MARK(0x8001C40C);
ZZ_MARK_TARGET(0x8001C410,ZZ_1C3D4_3C);
ZZ_MARK(0x8001C414);
ZZ_MARK(0x8001C418);
ZZ_MARK(0x8001C41C);
ZZ_MARK(0x8001C420);
ZZ_MARK(0x8001C424);
ZZ_MARK_TARGET(0x8001C428,ZZ_1C3D4_54);
ZZ_MARK(0x8001C42C);
ZZ_MARK(0x8001C430);
ZZ_MARK(0x8001C434);
ZZ_MARK(0x8001C438);
ZZ_MARK(0x8001C43C);
ZZ_MARK(0x8001C440);
ZZ_MARK(0x8001C444);
ZZ_MARK(0x8001C448);
ZZ_MARK(0x8001C44C);
ZZ_MARK(0x8001C450);
ZZ_MARK_TARGET(0x8001C454,ZZ_1C3D4_80);
ZZ_MARK(0x8001C458);
ZZ_MARK(0x8001C45C);
ZZ_MARK(0x8001C460);
ZZ_MARK(0x8001C464);
ZZ_MARK(0x8001C468);
ZZ_MARK(0x8001C46C);
ZZ_MARK(0x8001C470);
ZZ_MARK(0x8001C474);