#ifdef ZZ_INCLUDE_CODE
ZZ_12AE4:
	SP -= 48;
	V1 = 0x80070000;
	V1 -= 32180;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	V0 = EMU_ReadU32(V1);
	S3 = A0;
	if (V0 != S3)
	{
		ZZ_CLOCKCYCLES(13,0x80012B1C);
		goto ZZ_12AE4_38;
	}
	EMU_Write32(V1,R0);
	ZZ_CLOCKCYCLES(14,0x80012B1C);
ZZ_12AE4_38:
	V0 = EMU_ReadU16(S3 + 4); //+ 0x4
	V0 -= 20;
	V0 = V0 < 2;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(6,0x80012B7C);
		goto ZZ_12AE4_98;
	}
	V0 = 0x1;
	A1 = EMU_ReadU32(S3);
	A0 = EMU_ReadU16(A1 + 2); //+ 0x2
	V1 = A0 & 0xFFFF;
	if (V1 == V0)
	{
		V0 = A0 - 3;
		ZZ_CLOCKCYCLES(13,0x80012B5C);
		goto ZZ_12AE4_78;
	}
	V0 = A0 - 3;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(16,0x80012B94);
		goto ZZ_12AE4_B0;
	}
	ZZ_CLOCKCYCLES(16,0x80012B5C);
ZZ_12AE4_78:
	V0 = EMU_ReadU32(S3 + 20); //+ 0x14
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32164); //+ 0xFFFF825C
	V0 = (int32_t)V0 >> 1;
	V0 <<= 2;
	V0 += V1;
	V1 = -18;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(8,0x80012B7C);
ZZ_12AE4_98:
	V0 = -255;
	V1 = 0x1;
	EMU_Write16(S3 + 4,V1); //+ 0x4
	EMU_Write8(S3 + 15,R0); //+ 0xF
	EMU_Write8(S3 + 14,R0); //+ 0xE
	ZZ_CLOCKCYCLES(6,0x80012C64);
	goto ZZ_12AE4_180;
ZZ_12AE4_B0:
	V0 = EMU_ReadU32(A1 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 4); //+ 0x4
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 30760); //+ 0x7828
	A0 = EMU_ReadU32(A1 + 8); //+ 0x8
	S4 = EMU_ReadU32(S3 + 20); //+ 0x14
	V0 >>= 13;
	V0 &= 0x3FC;
	V0 += V1;
	S1 = EMU_ReadU32(V0);
	if (!A0)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(13,0x80012C58);
		goto ZZ_12AE4_174;
	}
	S2 = R0;
	S0 = S1 + 4;
	ZZ_CLOCKCYCLES(14,0x80012BCC);
ZZ_12AE4_E8:
	V0 = EMU_ReadU32(S3);
	V1 = S2 << 2;
	V1 += V0;
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(9,0x80012C04);
		goto ZZ_12AE4_120;
	}
	ZZ_CLOCKCYCLES(9,0x80012BF0);
ZZ_12AE4_10C:
	S0 += 8;
	V0 = EMU_ReadU32(S0);
	if (V0 != V1)
	{
		S1 += 8;
		ZZ_CLOCKCYCLES(5,0x80012BF0);
		goto ZZ_12AE4_10C;
	}
	S1 += 8;
	ZZ_CLOCKCYCLES(5,0x80012C04);
ZZ_12AE4_120:
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 19324); //+ 0xFFFFB484
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80012C38);
		goto ZZ_12AE4_154;
	}
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80012C38; //ZZ_12AE4_154
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80020178,ZZ_20178);
	ZZ_JUMPREGISTER_END();
ZZ_12AE4_154:
	EMU_Write32(S1,S4);
	V0 = EMU_ReadU32(S3);
	V0 = EMU_ReadU32(V0 + 8); //+ 0x8
	S2 += 1;
	V0 = S2 < V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x80012BCC);
		goto ZZ_12AE4_E8;
	}
	ZZ_CLOCKCYCLES(8,0x80012C58);
ZZ_12AE4_174:
	RA = 0x80012C60; //ZZ_12AE4_17C
	A0 = S3;
	ZZ_CLOCKCYCLES(2,0x8001402C);
	goto ZZ_1402C;
ZZ_12AE4_17C:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x80012C64);
ZZ_12AE4_180:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x8001392C,ZZ_137CC_160);
	ZZ_JUMPREGISTER(0x80012850,ZZ_126BC_194);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012AE4,ZZ_12AE4);
ZZ_MARK(0x80012AE8);
ZZ_MARK(0x80012AEC);
ZZ_MARK(0x80012AF0);
ZZ_MARK(0x80012AF4);
ZZ_MARK(0x80012AF8);
ZZ_MARK(0x80012AFC);
ZZ_MARK(0x80012B00);
ZZ_MARK(0x80012B04);
ZZ_MARK(0x80012B08);
ZZ_MARK(0x80012B0C);
ZZ_MARK(0x80012B10);
ZZ_MARK(0x80012B14);
ZZ_MARK(0x80012B18);
ZZ_MARK_TARGET(0x80012B1C,ZZ_12AE4_38);
ZZ_MARK(0x80012B20);
ZZ_MARK(0x80012B24);
ZZ_MARK(0x80012B28);
ZZ_MARK(0x80012B2C);
ZZ_MARK(0x80012B30);
ZZ_MARK(0x80012B34);
ZZ_MARK(0x80012B38);
ZZ_MARK(0x80012B3C);
ZZ_MARK(0x80012B40);
ZZ_MARK(0x80012B44);
ZZ_MARK(0x80012B48);
ZZ_MARK(0x80012B4C);
ZZ_MARK(0x80012B50);
ZZ_MARK(0x80012B54);
ZZ_MARK(0x80012B58);
ZZ_MARK_TARGET(0x80012B5C,ZZ_12AE4_78);
ZZ_MARK(0x80012B60);
ZZ_MARK(0x80012B64);
ZZ_MARK(0x80012B68);
ZZ_MARK(0x80012B6C);
ZZ_MARK(0x80012B70);
ZZ_MARK(0x80012B74);
ZZ_MARK(0x80012B78);
ZZ_MARK_TARGET(0x80012B7C,ZZ_12AE4_98);
ZZ_MARK(0x80012B80);
ZZ_MARK(0x80012B84);
ZZ_MARK(0x80012B88);
ZZ_MARK(0x80012B8C);
ZZ_MARK(0x80012B90);
ZZ_MARK_TARGET(0x80012B94,ZZ_12AE4_B0);
ZZ_MARK(0x80012B98);
ZZ_MARK(0x80012B9C);
ZZ_MARK(0x80012BA0);
ZZ_MARK(0x80012BA4);
ZZ_MARK(0x80012BA8);
ZZ_MARK(0x80012BAC);
ZZ_MARK(0x80012BB0);
ZZ_MARK(0x80012BB4);
ZZ_MARK(0x80012BB8);
ZZ_MARK(0x80012BBC);
ZZ_MARK(0x80012BC0);
ZZ_MARK(0x80012BC4);
ZZ_MARK(0x80012BC8);
ZZ_MARK_TARGET(0x80012BCC,ZZ_12AE4_E8);
ZZ_MARK(0x80012BD0);
ZZ_MARK(0x80012BD4);
ZZ_MARK(0x80012BD8);
ZZ_MARK(0x80012BDC);
ZZ_MARK(0x80012BE0);
ZZ_MARK(0x80012BE4);
ZZ_MARK(0x80012BE8);
ZZ_MARK(0x80012BEC);
ZZ_MARK_TARGET(0x80012BF0,ZZ_12AE4_10C);
ZZ_MARK(0x80012BF4);
ZZ_MARK(0x80012BF8);
ZZ_MARK(0x80012BFC);
ZZ_MARK(0x80012C00);
ZZ_MARK_TARGET(0x80012C04,ZZ_12AE4_120);
ZZ_MARK(0x80012C08);
ZZ_MARK(0x80012C0C);
ZZ_MARK(0x80012C10);
ZZ_MARK(0x80012C14);
ZZ_MARK(0x80012C18);
ZZ_MARK(0x80012C1C);
ZZ_MARK(0x80012C20);
ZZ_MARK(0x80012C24);
ZZ_MARK(0x80012C28);
ZZ_MARK(0x80012C2C);
ZZ_MARK(0x80012C30);
ZZ_MARK(0x80012C34);
ZZ_MARK_TARGET(0x80012C38,ZZ_12AE4_154);
ZZ_MARK(0x80012C3C);
ZZ_MARK(0x80012C40);
ZZ_MARK(0x80012C44);
ZZ_MARK(0x80012C48);
ZZ_MARK(0x80012C4C);
ZZ_MARK(0x80012C50);
ZZ_MARK(0x80012C54);
ZZ_MARK_TARGET(0x80012C58,ZZ_12AE4_174);
ZZ_MARK(0x80012C5C);
ZZ_MARK_TARGET(0x80012C60,ZZ_12AE4_17C);
ZZ_MARK_TARGET(0x80012C64,ZZ_12AE4_180);
ZZ_MARK(0x80012C68);
ZZ_MARK(0x80012C6C);
ZZ_MARK(0x80012C70);
ZZ_MARK(0x80012C74);
ZZ_MARK(0x80012C78);
ZZ_MARK(0x80012C7C);
ZZ_MARK(0x80012C80);
ZZ_MARK(0x80012C84);