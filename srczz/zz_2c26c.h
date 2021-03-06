#ifdef ZZ_INCLUDE_CODE
ZZ_2C26C:
	SP -= 48;
	EMU_Write32(SP + 32,S0); //+ 0x20
	S0 = A0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2916); //+ 0xB64
	EMU_Write32(SP + 36,S1); //+ 0x24
	S1 = A1;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	RA = 0x8002C294; //ZZ_2C26C_28
	EMU_Write32(SP + 40,S2); //+ 0x28
	ZZ_CLOCKCYCLES(10,0x80028060);
	goto ZZ_28060;
ZZ_2C26C_28:
	V1 = V0;
	V0 = (int32_t)V1 < -254;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8002C3E0);
		goto ZZ_2C26C_174;
	}
	A1 = EMU_ReadU32(S0 + 24); //+ 0x18
	S2 = EMU_ReadU32(A1 + 20); //+ 0x14
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	A0 = EMU_ReadU32(V1 + 52); //+ 0x34
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 <<= 8;
	V0 = V0 - A0;
	V1 = (int32_t)V1 < (int32_t)V0;
	if (!V1)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(16,0x8002C3E8);
		goto ZZ_2C26C_17C;
	}
	V0 = -255;
	V0 = EMU_ReadU32(A1 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= 0x2;
	if (!V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(23,0x8002C398);
		goto ZZ_2C26C_12C;
	}
	A0 = 0x1;
	V1 = EMU_ReadU32(S0 + 264); //+ 0x108
	V0 = 0x2;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(27,0x8002C398);
		goto ZZ_2C26C_12C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30772); //+ 0x7834
	V1 = EMU_ReadU32(V0 + 8); //+ 0x8
	V0 = 0x6400;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = 0x19;
	if (V1 == V0)
	{
		A2 = 0x900;
		ZZ_CLOCKCYCLES(36,0x8002C344);
		goto ZZ_2C26C_D8;
	}
	A2 = 0x900;
	V0 = V1 < 25;
	if (V0)
	{
		V0 = SP + 24;
		ZZ_CLOCKCYCLES(39,0x8002C380);
		goto ZZ_2C26C_114;
	}
	V0 = SP + 24;
	V0 = V1 < 34;
	if (!V0)
	{
		V0 = V1 < 32;
		ZZ_CLOCKCYCLES(42,0x8002C37C);
		goto ZZ_2C26C_110;
	}
	V0 = V1 < 32;
	if (V0)
	{
		V0 = SP + 24;
		ZZ_CLOCKCYCLES(44,0x8002C380);
		goto ZZ_2C26C_114;
	}
	V0 = SP + 24;
	ZZ_CLOCKCYCLES(44,0x8002C344);
ZZ_2C26C_D8:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= 0x800;
	if (V0)
	{
		V0 = SP + 24;
		ZZ_CLOCKCYCLES(10,0x8002C380);
		goto ZZ_2C26C_114;
	}
	V0 = SP + 24;
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12320); //+ 0xFFFFCFE0
	A2 = 0x2100;
	EMU_Write32(SP + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(14,0x8002C37C);
ZZ_2C26C_110:
	V0 = SP + 24;
	ZZ_CLOCKCYCLES(1,0x8002C380);
ZZ_2C26C_114:
	EMU_Write32(SP + 16,V0); //+ 0x10
	A0 = R0;
	A1 = S0;
	RA = 0x8002C394; //ZZ_2C26C_128
	A3 = 0x1;
	ZZ_CLOCKCYCLES(5,0x8001CD48);
	goto ZZ_1CD48;
ZZ_2C26C_128:
	A0 = R0;
	ZZ_CLOCKCYCLES(1,0x8002C398);
ZZ_2C26C_12C:
	if (!A0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(2,0x8002C3E8);
		goto ZZ_2C26C_17C;
	}
	V0 = -255;
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V1 = EMU_ReadU32(V1 + 52); //+ 0x34
	V0 <<= 8;
	V0 = V0 - V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V1 = EMU_ReadU32(S0 + 136); //+ 0x88
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	EMU_Write32(S0 + 136,R0); //+ 0x88
	V0 |= 0x1;
	EMU_Write32(S0 + 276,V1); //+ 0x114
	EMU_Write32(S0 + 168,V0); //+ 0xA8
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12804); //+ 0xFFFFCDFC
	EMU_Write32(S0 + 272,V0); //+ 0x110
	ZZ_CLOCKCYCLES(18,0x8002C3E4);
	goto ZZ_2C26C_178;
ZZ_2C26C_174:
	EMU_Write32(S0 + 24,V1); //+ 0x18
	ZZ_CLOCKCYCLES(1,0x8002C3E4);
ZZ_2C26C_178:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x8002C3E8);
ZZ_2C26C_17C:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8002C5EC,ZZ_2C404_1E8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002C26C,0x8002C294,ZZ_2C26C);
ZZ_MARK_TARGET(0x8002C294,0x8002C344,ZZ_2C26C_28);
ZZ_MARK_TARGET(0x8002C344,0x8002C37C,ZZ_2C26C_D8);
ZZ_MARK_TARGET(0x8002C37C,0x8002C380,ZZ_2C26C_110);
ZZ_MARK_TARGET(0x8002C380,0x8002C394,ZZ_2C26C_114);
ZZ_MARK_TARGET(0x8002C394,0x8002C398,ZZ_2C26C_128);
ZZ_MARK_TARGET(0x8002C398,0x8002C3E0,ZZ_2C26C_12C);
ZZ_MARK_TARGET(0x8002C3E0,0x8002C3E4,ZZ_2C26C_174);
ZZ_MARK_TARGET(0x8002C3E4,0x8002C3E8,ZZ_2C26C_178);
ZZ_MARK_TARGET(0x8002C3E8,0x8002C404,ZZ_2C26C_17C);
