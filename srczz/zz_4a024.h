#ifdef ZZ_INCLUDE_CODE
ZZ_4A024:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 66;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// firstfile
ZZ_MARK_TARGET(0x8004A024,0x8004A030,ZZ_4A024);
