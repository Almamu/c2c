#ifdef ZZ_INCLUDE_CODE
ZZ_11E24:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 3052); //+ 0xFFFFF414
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80011E78);
		goto ZZ_11E24_54;
	}
	V0 = 0x80040000;
	V0 += 9912;
	AT = 0x80060000;
	EMU_Write32(AT + 11460,V0); //+ 0x2CC4
	V0 = 0x80040000;
	V0 += 10552;
	AT = 0x80060000;
	EMU_Write32(AT + 11464,V0); //+ 0x2CC8
	V0 = 0x80040000;
	V0 += 10208;
	AT = 0x80060000;
	EMU_Write32(AT + 11468,V0); //+ 0x2CCC
	V0 = 0x80040000;
	V0 += 10928;
	AT = 0x80060000;
	EMU_Write32(AT + 11472,V0); //+ 0x2CD0
	ZZ_CLOCKCYCLES(21,0x80011E78);
ZZ_11E24_54:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80020DC0,ZZ_20C80_140);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80011E24,0x80011E78,ZZ_11E24);
ZZ_MARK_TARGET(0x80011E78,0x80011E80,ZZ_11E24_54);
