#ifdef ZZ_INCLUDE_CODE
ZZ_4C950:
	SP -= 32;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = 0x80060000;
	S2 -= 8266;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU8(S2);
	V0 = V0 < 2;
	if (V0)
	{
		S1 = A0;
		ZZ_CLOCKCYCLES(12,0x8004C99C);
		goto ZZ_4C950_4C;
	}
	S1 = A0;
	A0 = 0x80010000;
	A0 += 4084;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8272); //+ 0xFFFFDFB0
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C99C; //ZZ_4C950_4C
	A1 = S1;
	ZZ_CLOCKCYCLES_JR(19);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C994)
	ZZ_JUMPREGISTER_END();
ZZ_4C950_4C:
	S0 = S1 + 28;
	A0 = S0;
	RA = 0x8004C9AC; //ZZ_4C950_5C
	A1 = S1;
	ZZ_CLOCKCYCLES(4,0x8004D458);
	goto ZZ_4D458;
ZZ_4C950_5C:
	A0 = 0xFF0000;
	A0 |= 0xFFFF;
	A1 = S0;
	A2 = 64;
	V0 = EMU_ReadU32(S1 + 28); //+ 0x1C
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8276); //+ 0xFFFFDFAC
	V0 |= A0;
	EMU_Write32(S1 + 28,V0); //+ 0x1C
	A0 = EMU_ReadU32(V1 + 24); //+ 0x18
	V0 = EMU_ReadU32(V1 + 8); //+ 0x8
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C9E4; //ZZ_4C950_94
	A3 = R0;
	ZZ_CLOCKCYCLES_JR(14);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C9DC)
	ZZ_JUMPREGISTER_END();
ZZ_4C950_94:
	A3 = S2 + 14;
	A2 = S1;
	T0 = S1 + 80;
	ZZ_CLOCKCYCLES(3,0x8004C9F0);
ZZ_4C950_A0:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x8004C9F0);
		goto ZZ_4C950_A0;
	}
	A3 += 16;
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	V0 = S1;
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(25);
	ZZ_JUMPREGISTER(0x80016178,ZZ_16140_38);
	ZZ_JUMPREGISTER(0x800162F8,ZZ_161D4_124);
	ZZ_JUMPREGISTER(0x80016AF4,ZZ_1658C_568);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C950,0x8004C99C,ZZ_4C950);
ZZ_MARK_TARGET(0x8004C99C,0x8004C9AC,ZZ_4C950_4C);
ZZ_MARK_TARGET(0x8004C9AC,0x8004C9E4,ZZ_4C950_5C);
ZZ_MARK_TARGET(0x8004C9E4,0x8004C9F0,ZZ_4C950_94);
ZZ_MARK_TARGET(0x8004C9F0,0x8004CA54,ZZ_4C950_A0);
