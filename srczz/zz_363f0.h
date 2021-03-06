#ifdef ZZ_INCLUDE_CODE
ZZ_363F0:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	A0 = ~A0;
	V1 &= A0;
	EMU_Write32(V0 + 4,V1); //+ 0x4
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = R0;
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x800366F4,ZZ_366AC_48);
	ZZ_JUMPREGISTER(0x80036690,ZZ_36668_28);
	ZZ_JUMPREGISTER(0x80036460,ZZ_36410_50);
	ZZ_JUMPREGISTER(0x800369F8,ZZ_369C4_34);
	ZZ_JUMPREGISTER(0x80034B70,ZZ_34B44_2C);
	ZZ_JUMPREGISTER(0x80034BA8,ZZ_34B44_64);
	ZZ_JUMPREGISTER(0x80035D70,ZZ_35D34_3C);
	ZZ_JUMPREGISTER(0x80034B2C,ZZ_34A0C_120);
	ZZ_JUMPREGISTER(0x80034AF4,ZZ_34A0C_E8);
	ZZ_JUMPREGISTER(0x80034F60,ZZ_34F00_60);
	ZZ_JUMPREGISTER(0x80034CB8,ZZ_34BCC_EC);
	ZZ_JUMPREGISTER(0x80035CF8,ZZ_3578C_56C);
	ZZ_JUMPREGISTER(0x80035D10,ZZ_3578C_584);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800363F0,0x80036410,ZZ_363F0);
