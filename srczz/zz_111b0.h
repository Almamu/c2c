#ifdef ZZ_INCLUDE_CODE
ZZ_111B0:
	if (!A0)
	{
		ZZ_CLOCKCYCLES(2,0x80011228);
		goto ZZ_111B0_78;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2748); //+ 0xFFFFF544
	V0 = V1 < A0;
	if (V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(8,0x800111D8);
		goto ZZ_111B0_28;
	}
	A1 = A0;
	A1 = V1;
	ZZ_CLOCKCYCLES(10,0x800111DC);
	goto ZZ_111B0_2C;
ZZ_111B0_28:
	A0 = V1;
	ZZ_CLOCKCYCLES(1,0x800111DC);
ZZ_111B0_2C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2740); //+ 0xFFFFF54C
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2756); //+ 0xFFFFF53C
	V0 = V0 - V1;
	V0 = (int32_t)V0 >> 2;
	V0 <<= 2;
	V1 = V0 - 8;
	V0 = (int32_t)V1 < (int32_t)A1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x80011214);
		goto ZZ_111B0_64;
	}
	A0 = A1;
	ZZ_CLOCKCYCLES(14,0x80011248);
	goto ZZ_111B0_98;
ZZ_111B0_64:
	V0 = (int32_t)V1 < (int32_t)A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x80011248);
		goto ZZ_111B0_98;
	}
	ZZ_CLOCKCYCLES(3,0x80011220);
ZZ_111B0_70:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x8001129C);
	goto ZZ_111B0_EC;
ZZ_111B0_78:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2756); //+ 0xFFFFF53C
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 2740); //+ 0xFFFFF54C
	V0 = V0 < V1;
	if (!V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(8,0x80011220);
		goto ZZ_111B0_70;
	}
	A0 = R0;
	ZZ_CLOCKCYCLES(8,0x80011248);
ZZ_111B0_98:
	if ((int32_t)A0 >= 0)
	{
		V0 = A0;
		ZZ_CLOCKCYCLES(2,0x80011254);
		goto ZZ_111B0_A4;
	}
	V0 = A0;
	V0 = A0 + 3;
	ZZ_CLOCKCYCLES(3,0x80011254);
ZZ_111B0_A4:
	A1 = A0 + 4;
	V0 = (int32_t)V0 >> 2;
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 - 2756); //+ 0xFFFFF53C
	V0 <<= 2;
	V1 = -2;
	V0 += A2;
	EMU_Write32(V0,V1);
	V0 = A0 | 0x1;
	if ((int32_t)A1 >= 0)
	{
		EMU_Write32(A2 - 4,V0); //+ 0xFFFFFFFC
		ZZ_CLOCKCYCLES(11,0x80011284);
		goto ZZ_111B0_D4;
	}
	EMU_Write32(A2 - 4,V0); //+ 0xFFFFFFFC
	A1 = A0 + 7;
	ZZ_CLOCKCYCLES(12,0x80011284);
ZZ_111B0_D4:
	V0 = (int32_t)A1 >> 2;
	V0 <<= 2;
	V0 += A2;
	AT = 0x80060000;
	EMU_Write32(AT - 2756,V0); //+ 0xFFFFF53C
	V0 = R0;
	ZZ_CLOCKCYCLES(6,0x8001129C);
ZZ_111B0_EC:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80011504,ZZ_1148C_78);
	ZZ_JUMPREGISTER(0x80011644,ZZ_1148C_1B8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800111B0,0x800111D8,ZZ_111B0);
ZZ_MARK_TARGET(0x800111D8,0x800111DC,ZZ_111B0_28);
ZZ_MARK_TARGET(0x800111DC,0x80011214,ZZ_111B0_2C);
ZZ_MARK_TARGET(0x80011214,0x80011220,ZZ_111B0_64);
ZZ_MARK_TARGET(0x80011220,0x80011228,ZZ_111B0_70);
ZZ_MARK_TARGET(0x80011228,0x80011248,ZZ_111B0_78);
ZZ_MARK_TARGET(0x80011248,0x80011254,ZZ_111B0_98);
ZZ_MARK_TARGET(0x80011254,0x80011284,ZZ_111B0_A4);
ZZ_MARK_TARGET(0x80011284,0x8001129C,ZZ_111B0_D4);
ZZ_MARK_TARGET(0x8001129C,0x800112A4,ZZ_111B0_EC);
