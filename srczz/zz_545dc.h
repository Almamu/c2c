#ifdef ZZ_INCLUDE_CODE
ZZ_545DC:
	A0 <<= 16;
	A0 = (int32_t)A0 >> 14;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	A1 = V1 + V0;
	V1 = EMU_ReadU32(A1);
	V0 = V1 + 1;
	EMU_Write32(A1,V0);
	A0 = EMU_ReadU8(V1);
	if (A0)
	{
		V0 = A0 & 0x80;
		ZZ_CLOCKCYCLES(21,0x80054638);
		goto ZZ_545DC_5C;
	}
	V0 = A0 & 0x80;
	V0 = R0;
	ZZ_CLOCKCYCLES(23,0x80054684);
	goto ZZ_545DC_A8;
ZZ_545DC_5C:
	if (!V0)
	{
		V0 = A0 << 2;
		ZZ_CLOCKCYCLES(2,0x80054670);
		goto ZZ_545DC_94;
	}
	V0 = A0 << 2;
	A0 &= 0x7F;
	ZZ_CLOCKCYCLES(3,0x80054644);
ZZ_545DC_68:
	V1 = EMU_ReadU32(A1);
	V0 = V1 + 1;
	EMU_Write32(A1,V0);
	V1 = EMU_ReadU8(V1);
	A0 <<= 7;
	V0 = V1 & 0x7F;
	V1 &= 0x80;
	if (V1)
	{
		A0 += V0;
		ZZ_CLOCKCYCLES(10,0x80054644);
		goto ZZ_545DC_68;
	}
	A0 += V0;
	V0 = A0 << 2;
	ZZ_CLOCKCYCLES(11,0x80054670);
ZZ_545DC_94:
	V0 += A0;
	V1 = EMU_ReadU32(A1 + 136); //+ 0x88
	V0 <<= 1;
	V1 += V0;
	EMU_Write32(A1 + 136,V1); //+ 0x88
	ZZ_CLOCKCYCLES(5,0x80054684);
ZZ_545DC_A8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80054934,ZZ_5468C_2A8);
	ZZ_JUMPREGISTER(0x800545C4,ZZ_5456C_58);
	ZZ_JUMPREGISTER(0x80053D8C,ZZ_53D10_7C);
	ZZ_JUMPREGISTER(0x80053E2C,ZZ_53D10_11C);
	ZZ_JUMPREGISTER(0x80053DF8,ZZ_53D10_E8);
	ZZ_JUMPREGISTER(0x80053DCC,ZZ_53D10_BC);
	ZZ_JUMPREGISTER(0x80054070,ZZ_53FE0_90);
	ZZ_JUMPREGISTER(0x800542B0,ZZ_54090_220);
	ZZ_JUMPREGISTER(0x800538D8,ZZ_53830_A8);
	ZZ_JUMPREGISTER(0x80053608,ZZ_53408_200);
	ZZ_JUMPREGISTER(0x800537F8,ZZ_53408_3F0);
	ZZ_JUMPREGISTER(0x800537D8,ZZ_53408_3D0);
	ZZ_JUMPREGISTER(0x80054480,ZZ_542C8_1B8);
	ZZ_JUMPREGISTER(0x80056188,ZZ_55EF0_298);
	ZZ_JUMPREGISTER(0x80056048,ZZ_55EF0_158);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800545DC,0x80054638,ZZ_545DC);
ZZ_MARK_TARGET(0x80054638,0x80054644,ZZ_545DC_5C);
ZZ_MARK_TARGET(0x80054644,0x80054670,ZZ_545DC_68);
ZZ_MARK_TARGET(0x80054670,0x80054684,ZZ_545DC_94);
ZZ_MARK_TARGET(0x80054684,0x8005468C,ZZ_545DC_A8);
