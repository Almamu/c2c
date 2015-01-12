#ifdef ZZ_INCLUDE_CODE
ZZ_31498:
	SP -= 40;
	EMU_Write32(SP + 32,RA); //+ 0x20
	V0 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(A1);
	V0 = V0 - V1;
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V0);
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	A3 = LO;
	V0 = V0 - V1;
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V0);
	EMU_Write32(SP + 20,V0); //+ 0x14
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	A2 = LO;
	V0 = V0 - V1;
	V0 = (int32_t)V0 >> 8;
	EMU_SMultiply(V0,V0);
	EMU_Write32(SP + 24,V0); //+ 0x18
	A0 = A3 + A2;
	V1 = LO;
	RA = 0x80031504; //ZZ_31498_6C
	A0 += V1;
	ZZ_CLOCKCYCLES(27,0x80041D10);
	goto ZZ_41D10;
ZZ_31498_6C:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	V0 <<= 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 40;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80037A5C,ZZ_37930_12C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031498,ZZ_31498);
ZZ_MARK(0x8003149C);
ZZ_MARK(0x800314A0);
ZZ_MARK(0x800314A4);
ZZ_MARK(0x800314A8);
ZZ_MARK(0x800314AC);
ZZ_MARK(0x800314B0);
ZZ_MARK(0x800314B4);
ZZ_MARK(0x800314B8);
ZZ_MARK(0x800314BC);
ZZ_MARK(0x800314C0);
ZZ_MARK(0x800314C4);
ZZ_MARK(0x800314C8);
ZZ_MARK(0x800314CC);
ZZ_MARK(0x800314D0);
ZZ_MARK(0x800314D4);
ZZ_MARK(0x800314D8);
ZZ_MARK(0x800314DC);
ZZ_MARK(0x800314E0);
ZZ_MARK(0x800314E4);
ZZ_MARK(0x800314E8);
ZZ_MARK(0x800314EC);
ZZ_MARK(0x800314F0);
ZZ_MARK(0x800314F4);
ZZ_MARK(0x800314F8);
ZZ_MARK(0x800314FC);
ZZ_MARK(0x80031500);
ZZ_MARK_TARGET(0x80031504,ZZ_31498_6C);
ZZ_MARK(0x80031508);
ZZ_MARK(0x8003150C);
ZZ_MARK(0x80031510);