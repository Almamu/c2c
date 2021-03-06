#ifdef ZZ_INCLUDE_CODE
ZZ_420B8:
	if ((int32_t)A0 < 0)
	{
		A2 = A0 << 16;
		ZZ_CLOCKCYCLES(2,0x800420B0);
		goto ZZ_41D10_3A0;
	}
	A2 = A0 << 16;
	if ((int32_t)A2 < 0)
	{
		A0 >>= 16;
		ZZ_CLOCKCYCLES(4,0x800420B0);
		goto ZZ_41D10_3A0;
	}
	A0 >>= 16;
	if ((int32_t)A1 < 0)
	{
		A2 >>= 16;
		ZZ_CLOCKCYCLES(6,0x800420B0);
		goto ZZ_41D10_3A0;
	}
	A2 >>= 16;
	A0 = EMU_CheckedAdd(A0,-256);
	if ((int32_t)A0 >= 0)
	{
		A2 = EMU_CheckedAdd(A2,-512);
		ZZ_CLOCKCYCLES(9,0x800420B0);
		goto ZZ_41D10_3A0;
	}
	A2 = EMU_CheckedAdd(A2,-512);
	if ((int32_t)A2 >= 0)
	{
		ZZ_CLOCKCYCLES(11,0x800420B0);
		goto ZZ_41D10_3A0;
	}
	RA = EMU_ReadU32(V1 + 100); //+ 0x64
	ZZ_CLOCKCYCLES(12,0x800420E8);
ZZ_420B8_30:
	T8 = 0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80041FFC,ZZ_41D10_2EC);
	ZZ_JUMPREGISTER(0x8004200C,ZZ_41D10_2FC);
	ZZ_JUMPREGISTER(0x8004201C,ZZ_41D10_30C);
	ZZ_JUMPREGISTER(0x80042050,ZZ_41D10_340);
	ZZ_JUMPREGISTER(0x80042060,ZZ_41D10_350);
	ZZ_JUMPREGISTER(0x80042070,ZZ_41D10_360);
	ZZ_JUMPREGISTER(0x80042098,ZZ_41D10_388);
	ZZ_JUMPREGISTER(0x800420A8,ZZ_41D10_398);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800420B8,0x800420E8,ZZ_420B8);
ZZ_MARK_TARGET(0x800420E8,0x800420F4,ZZ_420B8_30);
