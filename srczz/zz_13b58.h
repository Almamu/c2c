#ifdef ZZ_INCLUDE_CODE
ZZ_13B58:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	if (!A1)
	{
		EMU_Write32(SP + 20,RA); //+ 0x14
		ZZ_CLOCKCYCLES(5,0x80013BA0);
		goto ZZ_13B58_48;
	}
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x80013B74; //ZZ_13B58_1C
	ZZ_CLOCKCYCLES(7,0x80013A6C);
	goto ZZ_13A6C;
ZZ_13B58_1C:
	V0 = S0 << 1;
	V0 += S0;
	V0 <<= 2;
	V0 = V0 - S0;
	V0 <<= 2;
	V1 = 0x1E;
	AT = 0x80060000;
	AT += V0;
	EMU_Write16(AT + 12296,V1); //+ 0x3008
	ZZ_CLOCKCYCLES(11,0x80013BD8);
	goto ZZ_13B58_80;
ZZ_13B58_48:
	V0 = S0 << 1;
	V0 += S0;
	V0 <<= 2;
	V0 = V0 - S0;
	A0 = V0 << 2;
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadS16(AT + 12296); //+ 0x3008
	V0 = 0x1E;
	if (V1 != V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(11,0x80013BD8);
		goto ZZ_13B58_80;
	}
	V0 = 0x1;
	AT = 0x80060000;
	AT += A0;
	EMU_Write16(AT + 12296,V0); //+ 0x3008
	ZZ_CLOCKCYCLES(14,0x80013BD8);
ZZ_13B58_80:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80027BAC,ZZ_27B6C_40);
	ZZ_JUMPREGISTER(0x80027BB8,ZZ_27B6C_4C);
	ZZ_JUMPREGISTER(0x80027BC4,ZZ_27B6C_58);
	ZZ_JUMPREGISTER(0x80027BD0,ZZ_27B6C_64);
	ZZ_JUMPREGISTER(0x80027198,ZZ_27168_30);
	ZZ_JUMPREGISTER(0x800271A4,ZZ_27168_3C);
	ZZ_JUMPREGISTER(0x800271B0,ZZ_27168_48);
	ZZ_JUMPREGISTER(0x800271BC,ZZ_27168_54);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80013B58,ZZ_13B58);
ZZ_MARK(0x80013B5C);
ZZ_MARK(0x80013B60);
ZZ_MARK(0x80013B64);
ZZ_MARK(0x80013B68);
ZZ_MARK(0x80013B6C);
ZZ_MARK(0x80013B70);
ZZ_MARK_TARGET(0x80013B74,ZZ_13B58_1C);
ZZ_MARK(0x80013B78);
ZZ_MARK(0x80013B7C);
ZZ_MARK(0x80013B80);
ZZ_MARK(0x80013B84);
ZZ_MARK(0x80013B88);
ZZ_MARK(0x80013B8C);
ZZ_MARK(0x80013B90);
ZZ_MARK(0x80013B94);
ZZ_MARK(0x80013B98);
ZZ_MARK(0x80013B9C);
ZZ_MARK_TARGET(0x80013BA0,ZZ_13B58_48);
ZZ_MARK(0x80013BA4);
ZZ_MARK(0x80013BA8);
ZZ_MARK(0x80013BAC);
ZZ_MARK(0x80013BB0);
ZZ_MARK(0x80013BB4);
ZZ_MARK(0x80013BB8);
ZZ_MARK(0x80013BBC);
ZZ_MARK(0x80013BC0);
ZZ_MARK(0x80013BC4);
ZZ_MARK(0x80013BC8);
ZZ_MARK(0x80013BCC);
ZZ_MARK(0x80013BD0);
ZZ_MARK(0x80013BD4);
ZZ_MARK_TARGET(0x80013BD8,ZZ_13B58_80);
ZZ_MARK(0x80013BDC);
ZZ_MARK(0x80013BE0);
ZZ_MARK(0x80013BE4);
ZZ_MARK(0x80013BE8);