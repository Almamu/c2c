#ifdef ZZ_INCLUDE_CODE
ZZ_4A54C:
	T2 = 192;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 3;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xC0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// SysDecIntRP
ZZ_MARK_TARGET(0x8004A54C,0x8004A558,ZZ_4A54C);
