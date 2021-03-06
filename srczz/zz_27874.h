#ifdef ZZ_INCLUDE_CODE
ZZ_27874:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	V1 = R0;
	V0 = A3 & 0x100;
	if (!V0)
	{
		T0 = R0;
		ZZ_CLOCKCYCLES(6,0x80027890);
		goto ZZ_27874_1C;
	}
	T0 = R0;
	V1 = EMU_ReadU32(A0 + 52); //+ 0x34
	ZZ_CLOCKCYCLES(7,0x80027890);
ZZ_27874_1C:
	V0 = A3 & 0x200;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x800278A0);
		goto ZZ_27874_2C;
	}
	T0 = EMU_ReadU32(A0 + 56); //+ 0x38
	ZZ_CLOCKCYCLES(4,0x800278A0);
ZZ_27874_2C:
	if (T0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(3,0x800278B4);
		goto ZZ_27874_40;
	}
	V0 = 0x1;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(5,0x800278C8);
		goto ZZ_27874_54;
	}
	ZZ_CLOCKCYCLES(5,0x800278B4);
ZZ_27874_40:
	A0 = 0x1;
	A3 = T0;
	EMU_Write32(SP + 16,V1); //+ 0x10
	RA = 0x800278C8; //ZZ_27874_54
	EMU_Write32(SP + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(5,0x80017800);
	goto ZZ_17800;
ZZ_27874_54:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80039FA8,ZZ_39EA0_108);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027874,0x80027890,ZZ_27874);
ZZ_MARK_TARGET(0x80027890,0x800278A0,ZZ_27874_1C);
ZZ_MARK_TARGET(0x800278A0,0x800278B4,ZZ_27874_2C);
ZZ_MARK_TARGET(0x800278B4,0x800278C8,ZZ_27874_40);
ZZ_MARK_TARGET(0x800278C8,0x800278D8,ZZ_27874_54);
