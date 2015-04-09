#ifdef ZZ_INCLUDE_CODE
ZZ_1144C:
	AT = 0x80060000;
	EMU_Write32(AT - 2756,A0); //+ 0xFFFFF53C
	EMU_Write32(A0,R0);
	V0 = A1 >> 2;
	V0 <<= 2;
	A0 += V0;
	A0 += 4;
	AT = 0x80060000;
	EMU_Write32(AT - 2740,A0); //+ 0xFFFFF54C
	A1 -= 4;
	AT = 0x80060000;
	EMU_Write32(AT - 2748,A1); //+ 0xFFFFF544
	AT = 0x80060000;
	EMU_Write32(AT - 2732,R0); //+ 0xFFFFF554
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001144C,0x8001148C,ZZ_1144C);
