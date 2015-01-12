#ifdef ZZ_INCLUDE_CODE
ZZ_1730C:
	SP -= 72;
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write32(SP + 64,RA); //+ 0x40
	EMU_Write32(SP + 60,S5); //+ 0x3C
	EMU_Write32(SP + 56,S4); //+ 0x38
	EMU_Write32(SP + 52,S3); //+ 0x34
	EMU_Write32(SP + 48,S2); //+ 0x30
	EMU_Write32(SP + 40,S0); //+ 0x28
	S3 = EMU_ReadU32(A0 + 16); //+ 0x10
	S2 = EMU_ReadU32(A0 + 28); //+ 0x1C
	V0 = 0x63960000;
	V0 |= 0x347F;
	S4 = EMU_ReadU32(S3 + 52); //+ 0x34
	if (A2 == V0)
	{
		S1 = -1;
		ZZ_CLOCKCYCLES(15,0x800173AC);
		goto ZZ_1730C_A0;
	}
	S1 = -1;
	V0 = EMU_ReadU32(S3 + 64); //+ 0x40
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(19,0x80017450);
		goto ZZ_1730C_144;
	}
	S0 = R0;
	A3 = V0;
	A0 = S3;
	ZZ_CLOCKCYCLES(21,0x80017360);
ZZ_1730C_54:
	V1 = EMU_ReadU32(A0 + 12); //+ 0xC
	V0 = V1 & 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80017384);
		goto ZZ_1730C_78;
	}
	if (A2 == V1)
	{
		S1 = S0;
		ZZ_CLOCKCYCLES(7,0x800173AC);
		goto ZZ_1730C_A0;
	}
	S1 = S0;
	S0 += 1;
	ZZ_CLOCKCYCLES(9,0x80017398);
	goto ZZ_1730C_8C;
ZZ_1730C_78:
	V0 = EMU_ReadU32(V1 + 4); //+ 0x4
	if (A2 == V0)
	{
		S1 = S0;
		ZZ_CLOCKCYCLES(4,0x800173AC);
		goto ZZ_1730C_A0;
	}
	S1 = S0;
	S0 += 1;
	ZZ_CLOCKCYCLES(5,0x80017398);
ZZ_1730C_8C:
	V0 = (int32_t)S0 < (int32_t)A3;
	if (V0)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(3,0x80017360);
		goto ZZ_1730C_54;
	}
	A0 += 4;
	V0 = -255;
	ZZ_CLOCKCYCLES(5,0x80017454);
	goto ZZ_1730C_148;
ZZ_1730C_A0:
	if (!A1)
	{
		ZZ_CLOCKCYCLES(2,0x80017400);
		goto ZZ_1730C_F4;
	}
	if ((int32_t)S4 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(4,0x80017450);
		goto ZZ_1730C_144;
	}
	S0 = R0;
	S5 = -1;
	ZZ_CLOCKCYCLES(5,0x800173C0);
ZZ_1730C_B4:
	if (S1 == S5)
	{
		A0 = S2;
		ZZ_CLOCKCYCLES(2,0x800173E0);
		goto ZZ_1730C_D4;
	}
	A0 = S2;
	V0 = EMU_ReadU16(S2 + 6); //+ 0x6
	V0 >>= 10;
	V0 &= 0x7;
	if (S1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x800173E8);
		goto ZZ_1730C_DC;
	}
	ZZ_CLOCKCYCLES(8,0x800173E0);
ZZ_1730C_D4:
	RA = 0x800173E8; //ZZ_1730C_DC
	A1 = S3 + 12;
	ZZ_CLOCKCYCLES(2,0x80018598);
	goto ZZ_18598;
ZZ_1730C_DC:
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)S4;
	if (V0)
	{
		S2 += 12;
		ZZ_CLOCKCYCLES(4,0x800173C0);
		goto ZZ_1730C_B4;
	}
	S2 += 12;
	V0 = -255;
	ZZ_CLOCKCYCLES(6,0x80017454);
	goto ZZ_1730C_148;
ZZ_1730C_F4:
	if ((int32_t)S4 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(2,0x80017450);
		goto ZZ_1730C_144;
	}
	S0 = R0;
	V1 = -1;
	A0 = S2 + 6;
	ZZ_CLOCKCYCLES(4,0x80017410);
ZZ_1730C_104:
	if (S1 == V1)
	{
		ZZ_CLOCKCYCLES(2,0x80017430);
		goto ZZ_1730C_124;
	}
	V0 = EMU_ReadU16(A0);
	V0 >>= 10;
	V0 &= 0x7;
	if (S1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x80017440);
		goto ZZ_1730C_134;
	}
	ZZ_CLOCKCYCLES(8,0x80017430);
ZZ_1730C_124:
	V0 = EMU_ReadU16(A0);
	V0 &= 0xFDFF;
	EMU_Write16(A0,V0);
	ZZ_CLOCKCYCLES(4,0x80017440);
ZZ_1730C_134:
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)S4;
	if (V0)
	{
		A0 += 12;
		ZZ_CLOCKCYCLES(4,0x80017410);
		goto ZZ_1730C_104;
	}
	A0 += 12;
	ZZ_CLOCKCYCLES(4,0x80017450);
ZZ_1730C_144:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x80017454);
ZZ_1730C_148:
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	S5 = EMU_ReadU32(SP + 60); //+ 0x3C
	S4 = EMU_ReadU32(SP + 56); //+ 0x38
	S3 = EMU_ReadU32(SP + 52); //+ 0x34
	S2 = EMU_ReadU32(SP + 48); //+ 0x30
	S1 = EMU_ReadU32(SP + 44); //+ 0x2C
	S0 = EMU_ReadU32(SP + 40); //+ 0x28
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x80017494,ZZ_1747C_18);
	ZZ_JUMPREGISTER(0x80017274,ZZ_171D8_9C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001730C,ZZ_1730C);
ZZ_MARK(0x80017310);
ZZ_MARK(0x80017314);
ZZ_MARK(0x80017318);
ZZ_MARK(0x8001731C);
ZZ_MARK(0x80017320);
ZZ_MARK(0x80017324);
ZZ_MARK(0x80017328);
ZZ_MARK(0x8001732C);
ZZ_MARK(0x80017330);
ZZ_MARK(0x80017334);
ZZ_MARK(0x80017338);
ZZ_MARK(0x8001733C);
ZZ_MARK(0x80017340);
ZZ_MARK(0x80017344);
ZZ_MARK(0x80017348);
ZZ_MARK(0x8001734C);
ZZ_MARK(0x80017350);
ZZ_MARK(0x80017354);
ZZ_MARK(0x80017358);
ZZ_MARK(0x8001735C);
ZZ_MARK_TARGET(0x80017360,ZZ_1730C_54);
ZZ_MARK(0x80017364);
ZZ_MARK(0x80017368);
ZZ_MARK(0x8001736C);
ZZ_MARK(0x80017370);
ZZ_MARK(0x80017374);
ZZ_MARK(0x80017378);
ZZ_MARK(0x8001737C);
ZZ_MARK(0x80017380);
ZZ_MARK_TARGET(0x80017384,ZZ_1730C_78);
ZZ_MARK(0x80017388);
ZZ_MARK(0x8001738C);
ZZ_MARK(0x80017390);
ZZ_MARK(0x80017394);
ZZ_MARK_TARGET(0x80017398,ZZ_1730C_8C);
ZZ_MARK(0x8001739C);
ZZ_MARK(0x800173A0);
ZZ_MARK(0x800173A4);
ZZ_MARK(0x800173A8);
ZZ_MARK_TARGET(0x800173AC,ZZ_1730C_A0);
ZZ_MARK(0x800173B0);
ZZ_MARK(0x800173B4);
ZZ_MARK(0x800173B8);
ZZ_MARK(0x800173BC);
ZZ_MARK_TARGET(0x800173C0,ZZ_1730C_B4);
ZZ_MARK(0x800173C4);
ZZ_MARK(0x800173C8);
ZZ_MARK(0x800173CC);
ZZ_MARK(0x800173D0);
ZZ_MARK(0x800173D4);
ZZ_MARK(0x800173D8);
ZZ_MARK(0x800173DC);
ZZ_MARK_TARGET(0x800173E0,ZZ_1730C_D4);
ZZ_MARK(0x800173E4);
ZZ_MARK_TARGET(0x800173E8,ZZ_1730C_DC);
ZZ_MARK(0x800173EC);
ZZ_MARK(0x800173F0);
ZZ_MARK(0x800173F4);
ZZ_MARK(0x800173F8);
ZZ_MARK(0x800173FC);
ZZ_MARK_TARGET(0x80017400,ZZ_1730C_F4);
ZZ_MARK(0x80017404);
ZZ_MARK(0x80017408);
ZZ_MARK(0x8001740C);
ZZ_MARK_TARGET(0x80017410,ZZ_1730C_104);
ZZ_MARK(0x80017414);
ZZ_MARK(0x80017418);
ZZ_MARK(0x8001741C);
ZZ_MARK(0x80017420);
ZZ_MARK(0x80017424);
ZZ_MARK(0x80017428);
ZZ_MARK(0x8001742C);
ZZ_MARK_TARGET(0x80017430,ZZ_1730C_124);
ZZ_MARK(0x80017434);
ZZ_MARK(0x80017438);
ZZ_MARK(0x8001743C);
ZZ_MARK_TARGET(0x80017440,ZZ_1730C_134);
ZZ_MARK(0x80017444);
ZZ_MARK(0x80017448);
ZZ_MARK(0x8001744C);
ZZ_MARK_TARGET(0x80017450,ZZ_1730C_144);
ZZ_MARK_TARGET(0x80017454,ZZ_1730C_148);
ZZ_MARK(0x80017458);
ZZ_MARK(0x8001745C);
ZZ_MARK(0x80017460);
ZZ_MARK(0x80017464);
ZZ_MARK(0x80017468);
ZZ_MARK(0x8001746C);
ZZ_MARK(0x80017470);
ZZ_MARK(0x80017474);
ZZ_MARK(0x80017478);