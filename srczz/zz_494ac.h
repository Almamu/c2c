#ifdef ZZ_INCLUDE_CODE
ZZ_494AC:
	T2 = 160;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 40;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xA0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800494AC,ZZ_494AC);
ZZ_MARK(0x800494B0);
ZZ_MARK(0x800494B4);