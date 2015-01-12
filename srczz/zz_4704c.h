#ifdef ZZ_INCLUDE_CODE
ZZ_4704C:
	SP -= 48;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	EMU_Write32(SP + 32,S4); //+ 0x20
	S4 = A0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 3;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = S4 & 0xFF;
	V1 = 0x80060000;
	V1 -= 13860;
	EMU_Write32(SP + 36,S5); //+ 0x24
	S5 = 0x80060000;
	S5 = EMU_ReadU32(S5 - 13724); //+ 0xFFFFCA64
	V0 = S3 << 2;
	EMU_Write32(SP + 40,S6); //+ 0x28
	S6 = V0 + V1;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	ZZ_CLOCKCYCLES(20,0x8004709C);
ZZ_4704C_50:
	AT = 0x80060000;
	EMU_Write32(AT - 13724,R0); //+ 0xFFFFCA64
	V0 = 1;
	if (S3 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x800470D8);
		goto ZZ_4704C_8C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 13708); //+ 0xFFFFCA74
	V0 &= 0x10;
	if (!V0)
	{
		A0 = 1;
		ZZ_CLOCKCYCLES(11,0x800470D8);
		goto ZZ_4704C_8C;
	}
	A0 = 1;
	A1 = R0;
	A2 = R0;
	RA = 0x800470D8; //ZZ_4704C_8C
	A3 = R0;
	ZZ_CLOCKCYCLES(15,0x80047E8C);
	goto ZZ_47E8C;
ZZ_4704C_8C:
	if (!S1)
	{
		ZZ_CLOCKCYCLES(2,0x80047108);
		goto ZZ_4704C_BC;
	}
	V0 = EMU_ReadU32(S6);
	if (!V0)
	{
		A0 = 2;
		ZZ_CLOCKCYCLES(6,0x80047108);
		goto ZZ_4704C_BC;
	}
	A0 = 2;
	A1 = S1;
	A2 = S2;
	RA = 0x80047100; //ZZ_4704C_B4
	A3 = R0;
	ZZ_CLOCKCYCLES(10,0x80047E8C);
	goto ZZ_47E8C;
ZZ_4704C_B4:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8004712C);
		goto ZZ_4704C_E0;
	}
	ZZ_CLOCKCYCLES(2,0x80047108);
ZZ_4704C_BC:
	AT = 0x80060000;
	EMU_Write32(AT - 13724,S5); //+ 0xFFFFCA64
	A0 = S4 & 0xFF;
	A1 = S1;
	A2 = S2;
	RA = 0x80047124; //ZZ_4704C_D8
	A3 = R0;
	ZZ_CLOCKCYCLES(7,0x80047E8C);
	goto ZZ_47E8C;
ZZ_4704C_D8:
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x80047144);
		goto ZZ_4704C_F8;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004712C);
ZZ_4704C_E0:
	S0 -= 1;
	V0 = -1;
	if (S0 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004709C);
		goto ZZ_4704C_50;
	}
	AT = 0x80060000;
	EMU_Write32(AT - 13724,S5); //+ 0xFFFFCA64
	ZZ_CLOCKCYCLES(6,0x80047144);
ZZ_4704C_F8:
	if (V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(2,0x80047160);
		goto ZZ_4704C_114;
	}
	A0 = R0;
	RA = 0x80047154; //ZZ_4704C_108
	A1 = S2;
	ZZ_CLOCKCYCLES(4,0x80047940);
	goto ZZ_47940;
ZZ_4704C_108:
	V0 ^= 0x2;
	V0 = V0 < 1;
	ZZ_CLOCKCYCLES(3,0x80047164);
	goto ZZ_4704C_118;
ZZ_4704C_114:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x80047164);
ZZ_4704C_118:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x800492F8,ZZ_4920C_EC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004704C,ZZ_4704C);
ZZ_MARK(0x80047050);
ZZ_MARK(0x80047054);
ZZ_MARK(0x80047058);
ZZ_MARK(0x8004705C);
ZZ_MARK(0x80047060);
ZZ_MARK(0x80047064);
ZZ_MARK(0x80047068);
ZZ_MARK(0x8004706C);
ZZ_MARK(0x80047070);
ZZ_MARK(0x80047074);
ZZ_MARK(0x80047078);
ZZ_MARK(0x8004707C);
ZZ_MARK(0x80047080);
ZZ_MARK(0x80047084);
ZZ_MARK(0x80047088);
ZZ_MARK(0x8004708C);
ZZ_MARK(0x80047090);
ZZ_MARK(0x80047094);
ZZ_MARK(0x80047098);
ZZ_MARK_TARGET(0x8004709C,ZZ_4704C_50);
ZZ_MARK(0x800470A0);
ZZ_MARK(0x800470A4);
ZZ_MARK(0x800470A8);
ZZ_MARK(0x800470AC);
ZZ_MARK(0x800470B0);
ZZ_MARK(0x800470B4);
ZZ_MARK(0x800470B8);
ZZ_MARK(0x800470BC);
ZZ_MARK(0x800470C0);
ZZ_MARK(0x800470C4);
ZZ_MARK(0x800470C8);
ZZ_MARK(0x800470CC);
ZZ_MARK(0x800470D0);
ZZ_MARK(0x800470D4);
ZZ_MARK_TARGET(0x800470D8,ZZ_4704C_8C);
ZZ_MARK(0x800470DC);
ZZ_MARK(0x800470E0);
ZZ_MARK(0x800470E4);
ZZ_MARK(0x800470E8);
ZZ_MARK(0x800470EC);
ZZ_MARK(0x800470F0);
ZZ_MARK(0x800470F4);
ZZ_MARK(0x800470F8);
ZZ_MARK(0x800470FC);
ZZ_MARK_TARGET(0x80047100,ZZ_4704C_B4);
ZZ_MARK(0x80047104);
ZZ_MARK_TARGET(0x80047108,ZZ_4704C_BC);
ZZ_MARK(0x8004710C);
ZZ_MARK(0x80047110);
ZZ_MARK(0x80047114);
ZZ_MARK(0x80047118);
ZZ_MARK(0x8004711C);
ZZ_MARK(0x80047120);
ZZ_MARK_TARGET(0x80047124,ZZ_4704C_D8);
ZZ_MARK(0x80047128);
ZZ_MARK_TARGET(0x8004712C,ZZ_4704C_E0);
ZZ_MARK(0x80047130);
ZZ_MARK(0x80047134);
ZZ_MARK(0x80047138);
ZZ_MARK(0x8004713C);
ZZ_MARK(0x80047140);
ZZ_MARK_TARGET(0x80047144,ZZ_4704C_F8);
ZZ_MARK(0x80047148);
ZZ_MARK(0x8004714C);
ZZ_MARK(0x80047150);
ZZ_MARK_TARGET(0x80047154,ZZ_4704C_108);
ZZ_MARK(0x80047158);
ZZ_MARK(0x8004715C);
ZZ_MARK_TARGET(0x80047160,ZZ_4704C_114);
ZZ_MARK_TARGET(0x80047164,ZZ_4704C_118);
ZZ_MARK(0x80047168);
ZZ_MARK(0x8004716C);
ZZ_MARK(0x80047170);
ZZ_MARK(0x80047174);
ZZ_MARK(0x80047178);
ZZ_MARK(0x8004717C);
ZZ_MARK(0x80047180);
ZZ_MARK(0x80047184);
ZZ_MARK(0x80047188);
ZZ_MARK(0x8004718C);