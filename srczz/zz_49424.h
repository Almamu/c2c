#ifdef ZZ_INCLUDE_CODE
ZZ_49424:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 63;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// puts
ZZ_MARK_TARGET(0x80049424,0x80049430,ZZ_49424);
