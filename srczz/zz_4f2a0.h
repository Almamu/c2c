#ifdef ZZ_INCLUDE_CODE
ZZ_4F2A0:
	GTE_SetRegister(GTE_CREG_H,A0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80017AEC,ZZ_17AB0_3C);
	ZZ_JUMPREGISTER(0x8002FBC8,ZZ_2F9D4_1F4);
	ZZ_JUMPREGISTER(0x80016FF0,ZZ_16D84_26C);
	ZZ_JUMPREGISTER(0x80020AF4,ZZ_20304_7F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F2A0,0x8004F2AC,ZZ_4F2A0);
