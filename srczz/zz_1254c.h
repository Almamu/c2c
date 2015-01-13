#ifdef ZZ_INCLUDE_CODE
ZZ_1254C:
	T1 = A0;
	V1 = EMU_ReadU16(T1 + 2); //+ 0x2
	A0 = EMU_ReadU32(T1 + 8); //+ 0x8
	V0 = 0x1;
	if (V1 != V0)
	{
		T2 = T1 + 16;
		ZZ_CLOCKCYCLES(6,0x8001256C);
		goto ZZ_1254C_20;
	}
	T2 = T1 + 16;
	V0 = -255;
	ZZ_CLOCKCYCLES(8,0x800125F0);
	goto ZZ_1254C_A4;
ZZ_1254C_20:
	V1 = EMU_ReadU16(T1);
	V0 = 0x1234;
	if (V1 != V0)
	{
		V0 = -18;
		ZZ_CLOCKCYCLES(4,0x800125F0);
		goto ZZ_1254C_A4;
	}
	V0 = -18;
	T0 = A0 - 1;
	if ((int32_t)T0 < 0)
	{
		V0 = T0 << 2;
		ZZ_CLOCKCYCLES(7,0x800125D8);
		goto ZZ_1254C_8C;
	}
	V0 = T0 << 2;
	A3 = V0 + T2;
	ZZ_CLOCKCYCLES(8,0x8001258C);
ZZ_1254C_40:
	V0 = EMU_ReadU32(A3);
	A2 = T1 + V0;
	EMU_Write32(A3,A2);
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	if ((int32_t)A1 < 0)
	{
		V1 = A2 + 16;
		ZZ_CLOCKCYCLES(8,0x800125CC);
		goto ZZ_1254C_80;
	}
	V1 = A2 + 16;
	V0 = A1 << 2;
	V1 += V0;
	ZZ_CLOCKCYCLES(10,0x800125B4);
ZZ_1254C_68:
	V0 = EMU_ReadU32(V1);
	A1 -= 1;
	V0 += A2;
	EMU_Write32(V1,V0);
	if ((int32_t)A1 >= 0)
	{
		V1 -= 4;
		ZZ_CLOCKCYCLES(6,0x800125B4);
		goto ZZ_1254C_68;
	}
	V1 -= 4;
	ZZ_CLOCKCYCLES(6,0x800125CC);
ZZ_1254C_80:
	T0 -= 1;
	if ((int32_t)T0 >= 0)
	{
		A3 -= 4;
		ZZ_CLOCKCYCLES(3,0x8001258C);
		goto ZZ_1254C_40;
	}
	A3 -= 4;
	ZZ_CLOCKCYCLES(3,0x800125D8);
ZZ_1254C_8C:
	A0 <<= 2;
	A0 += T2;
	V1 = EMU_ReadU32(A0);
	V0 = -255;
	V1 += T1;
	EMU_Write32(A0,V1);
	ZZ_CLOCKCYCLES(6,0x800125F0);
ZZ_1254C_A4:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001254C,ZZ_1254C);
ZZ_MARK(0x80012550);
ZZ_MARK(0x80012554);
ZZ_MARK(0x80012558);
ZZ_MARK(0x8001255C);
ZZ_MARK(0x80012560);
ZZ_MARK(0x80012564);
ZZ_MARK(0x80012568);
ZZ_MARK_TARGET(0x8001256C,ZZ_1254C_20);
ZZ_MARK(0x80012570);
ZZ_MARK(0x80012574);
ZZ_MARK(0x80012578);
ZZ_MARK(0x8001257C);
ZZ_MARK(0x80012580);
ZZ_MARK(0x80012584);
ZZ_MARK(0x80012588);
ZZ_MARK_TARGET(0x8001258C,ZZ_1254C_40);
ZZ_MARK(0x80012590);
ZZ_MARK(0x80012594);
ZZ_MARK(0x80012598);
ZZ_MARK(0x8001259C);
ZZ_MARK(0x800125A0);
ZZ_MARK(0x800125A4);
ZZ_MARK(0x800125A8);
ZZ_MARK(0x800125AC);
ZZ_MARK(0x800125B0);
ZZ_MARK_TARGET(0x800125B4,ZZ_1254C_68);
ZZ_MARK(0x800125B8);
ZZ_MARK(0x800125BC);
ZZ_MARK(0x800125C0);
ZZ_MARK(0x800125C4);
ZZ_MARK(0x800125C8);
ZZ_MARK_TARGET(0x800125CC,ZZ_1254C_80);
ZZ_MARK(0x800125D0);
ZZ_MARK(0x800125D4);
ZZ_MARK_TARGET(0x800125D8,ZZ_1254C_8C);
ZZ_MARK(0x800125DC);
ZZ_MARK(0x800125E0);
ZZ_MARK(0x800125E4);
ZZ_MARK(0x800125E8);
ZZ_MARK(0x800125EC);
ZZ_MARK_TARGET(0x800125F0,ZZ_1254C_A4);
ZZ_MARK(0x800125F4);
