#ifdef ZZ_INCLUDE_CODE
ZZ_5456C:
	SP -= 24;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V1 = A0 << 2;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	AT = 0x80070000;
	AT += V1;
	S0 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	S0 += V0;
	V0 = EMU_ReadU8(S0 + 23); //+ 0x17
	V0 += S0;
	RA = 0x800545C4; //ZZ_5456C_58
	EMU_Write8(V0 + 55,A2); //+ 0x37
	ZZ_CLOCKCYCLES(22,0x800545DC);
	goto ZZ_545DC;
ZZ_5456C_58:
	EMU_Write32(S0 + 144,V0); //+ 0x90
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005456C,0x800545C4,ZZ_5456C);
ZZ_MARK_TARGET(0x800545C4,0x800545DC,ZZ_5456C_58);
