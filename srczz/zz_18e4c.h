#ifdef ZZ_INCLUDE_CODE
ZZ_18E4C:
	SP -= 48;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 40,RA); //+ 0x28
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	V1 = EMU_ReadU32(S0);
	S2 = A1;
	V0 = 0x2;
	if (V1 != V0)
	{
		S3 = A2;
		ZZ_CLOCKCYCLES(14,0x80018E90);
		goto ZZ_18E4C_44;
	}
	S3 = A2;
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(17,0x80018E94);
	goto ZZ_18E4C_48;
ZZ_18E4C_44:
	A0 = EMU_ReadU32(S0 + 76); //+ 0x4C
	ZZ_CLOCKCYCLES(1,0x80018E94);
ZZ_18E4C_48:
	if (!A0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(3,0x80018EE4);
		goto ZZ_18E4C_98;
	}
	V0 = -255;
	S5 = -25;
	S4 = 0x2;
	ZZ_CLOCKCYCLES(5,0x80018EA8);
ZZ_18E4C_5C:
	A1 = S2;
	S1 = EMU_ReadU32(A0 + 72); //+ 0x48
	RA = 0x80018EB8; //ZZ_18E4C_6C
	A2 = S3;
	ZZ_CLOCKCYCLES(4,0x80018C74);
	goto ZZ_18C74;
ZZ_18E4C_6C:
	if (V0 != S5)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x80018EDC);
		goto ZZ_18E4C_90;
	}
	A0 = S1;
	V0 = EMU_ReadU32(S0);
	if (V0 == S4)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(6,0x80018ED8);
		goto ZZ_18E4C_8C;
	}
	A0 = S0;
	RA = 0x80018ED8; //ZZ_18E4C_8C
	A1 = R0;
	ZZ_CLOCKCYCLES(8,0x80019CF4);
	goto ZZ_19CF4;
ZZ_18E4C_8C:
	A0 = S1;
	ZZ_CLOCKCYCLES(1,0x80018EDC);
ZZ_18E4C_90:
	if (A0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(2,0x80018EA8);
		goto ZZ_18E4C_5C;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(2,0x80018EE4);
ZZ_18E4C_98:
	RA = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8001D41C,ZZ_1D3D4_48);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018E4C,0x80018E90,ZZ_18E4C);
ZZ_MARK_TARGET(0x80018E90,0x80018E94,ZZ_18E4C_44);
ZZ_MARK_TARGET(0x80018E94,0x80018EA8,ZZ_18E4C_48);
ZZ_MARK_TARGET(0x80018EA8,0x80018EB8,ZZ_18E4C_5C);
ZZ_MARK_TARGET(0x80018EB8,0x80018ED8,ZZ_18E4C_6C);
ZZ_MARK_TARGET(0x80018ED8,0x80018EDC,ZZ_18E4C_8C);
ZZ_MARK_TARGET(0x80018EDC,0x80018EE4,ZZ_18E4C_90);
ZZ_MARK_TARGET(0x80018EE4,0x80018F0C,ZZ_18E4C_98);
