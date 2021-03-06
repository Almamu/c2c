#ifdef ZZ_INCLUDE_CODE
ZZ_2FF84:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A2;
	A1 = 0x1;
	EMU_Write32(SP + 24,RA); //+ 0x18
	RA = 0x8002FFA8; //ZZ_2FF84_24
	A2 = R0;
	ZZ_CLOCKCYCLES(9,0x80014364);
	goto ZZ_14364;
ZZ_2FF84_24:
	S0 <<= 1;
	S0 += S1;
	S0 <<= 2;
	V0 += S0;
	V0 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 += 3;
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x800219F0,ZZ_20C80_D70);
	ZZ_JUMPREGISTER(0x80021A14,ZZ_20C80_D94);
	ZZ_JUMPREGISTER(0x80021A30,ZZ_20C80_DB0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002FF84,0x8002FFA8,ZZ_2FF84);
ZZ_MARK_TARGET(0x8002FFA8,0x8002FFDC,ZZ_2FF84_24);
