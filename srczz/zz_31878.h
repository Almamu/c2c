#ifdef ZZ_INCLUDE_CODE
ZZ_31878:
	EMU_Write32(GP + 164,A0); //+ 0xA4
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80030038,ZZ_30004_34);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031878,ZZ_31878);
ZZ_MARK(0x8003187C);
ZZ_MARK(0x80031880);