#ifdef ZZ_INCLUDE_CODE
ZZ_4F090:
	T0 = EMU_ReadU32(A0);
	T3 = EMU_ReadU32(A1);
	T1 = T0 & 0xFFFF;
	T1 <<= 16;
	T1 = (int32_t)T1 >> 16;
	EMU_UMultiply(T1,T3);
	T4 = EMU_ReadU32(A1 + 4); //+ 0x4
	T2 = (int32_t)T0 >> 16;
	T5 = EMU_ReadU32(A1 + 8); //+ 0x8
	T0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 = A0;
	T1 = LO;
	T1 = (int32_t)T1 >> 12;
	T1 &= 0xFFFF;
	EMU_UMultiply(T2,T4);
	T2 = LO;
	T2 = (int32_t)T2 >> 12;
	T2 <<= 16;
	T1 |= T2;
	EMU_Write32(A0,T1);
	T1 = T0 & 0xFFFF;
	T1 <<= 16;
	T1 = (int32_t)T1 >> 16;
	EMU_UMultiply(T1,T5);
	T2 = (int32_t)T0 >> 16;
	T0 = EMU_ReadU32(A0 + 8); //+ 0x8
	T1 = LO;
	T1 = (int32_t)T1 >> 12;
	T1 &= 0xFFFF;
	EMU_UMultiply(T2,T3);
	T2 = LO;
	T2 = (int32_t)T2 >> 12;
	T2 <<= 16;
	T1 |= T2;
	EMU_Write32(A0 + 4,T1); //+ 0x4
	T1 = T0 & 0xFFFF;
	T1 <<= 16;
	T1 = (int32_t)T1 >> 16;
	EMU_UMultiply(T1,T4);
	T2 = (int32_t)T0 >> 16;
	T0 = EMU_ReadU32(A0 + 12); //+ 0xC
	T1 = LO;
	T1 = (int32_t)T1 >> 12;
	T1 &= 0xFFFF;
	EMU_UMultiply(T2,T5);
	T2 = LO;
	T2 = (int32_t)T2 >> 12;
	T2 <<= 16;
	T1 |= T2;
	EMU_Write32(A0 + 8,T1); //+ 0x8
	T1 = T0 & 0xFFFF;
	T1 <<= 16;
	T1 = (int32_t)T1 >> 16;
	EMU_UMultiply(T1,T3);
	T2 = (int32_t)T0 >> 16;
	T0 = EMU_ReadU32(A0 + 16); //+ 0x10
	T1 = LO;
	T1 = (int32_t)T1 >> 12;
	T1 &= 0xFFFF;
	EMU_UMultiply(T2,T4);
	T2 = LO;
	T2 = (int32_t)T2 >> 12;
	T2 <<= 16;
	T1 |= T2;
	EMU_Write32(A0 + 12,T1); //+ 0xC
	T1 = T0 & 0xFFFF;
	T1 <<= 16;
	T1 = (int32_t)T1 >> 16;
	EMU_UMultiply(T1,T5);
	T1 = LO;
	T1 = (int32_t)T1 >> 12;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A0 + 16,T1); //+ 0x10
	ZZ_CLOCKCYCLES_JR(73);
	ZZ_JUMPREGISTER(0x8001EB08,ZZ_1E9C8_140);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F090,ZZ_4F090);
ZZ_MARK(0x8004F094);
ZZ_MARK(0x8004F098);
ZZ_MARK(0x8004F09C);
ZZ_MARK(0x8004F0A0);
ZZ_MARK(0x8004F0A4);
ZZ_MARK(0x8004F0A8);
ZZ_MARK(0x8004F0AC);
ZZ_MARK(0x8004F0B0);
ZZ_MARK(0x8004F0B4);
ZZ_MARK(0x8004F0B8);
ZZ_MARK(0x8004F0BC);
ZZ_MARK(0x8004F0C0);
ZZ_MARK(0x8004F0C4);
ZZ_MARK(0x8004F0C8);
ZZ_MARK(0x8004F0CC);
ZZ_MARK(0x8004F0D0);
ZZ_MARK(0x8004F0D4);
ZZ_MARK(0x8004F0D8);
ZZ_MARK(0x8004F0DC);
ZZ_MARK(0x8004F0E0);
ZZ_MARK(0x8004F0E4);
ZZ_MARK(0x8004F0E8);
ZZ_MARK(0x8004F0EC);
ZZ_MARK(0x8004F0F0);
ZZ_MARK(0x8004F0F4);
ZZ_MARK(0x8004F0F8);
ZZ_MARK(0x8004F0FC);
ZZ_MARK(0x8004F100);
ZZ_MARK(0x8004F104);
ZZ_MARK(0x8004F108);
ZZ_MARK(0x8004F10C);
ZZ_MARK(0x8004F110);
ZZ_MARK(0x8004F114);
ZZ_MARK(0x8004F118);
ZZ_MARK(0x8004F11C);
ZZ_MARK(0x8004F120);
ZZ_MARK(0x8004F124);
ZZ_MARK(0x8004F128);
ZZ_MARK(0x8004F12C);
ZZ_MARK(0x8004F130);
ZZ_MARK(0x8004F134);
ZZ_MARK(0x8004F138);
ZZ_MARK(0x8004F13C);
ZZ_MARK(0x8004F140);
ZZ_MARK(0x8004F144);
ZZ_MARK(0x8004F148);
ZZ_MARK(0x8004F14C);
ZZ_MARK(0x8004F150);
ZZ_MARK(0x8004F154);
ZZ_MARK(0x8004F158);
ZZ_MARK(0x8004F15C);
ZZ_MARK(0x8004F160);
ZZ_MARK(0x8004F164);
ZZ_MARK(0x8004F168);
ZZ_MARK(0x8004F16C);
ZZ_MARK(0x8004F170);
ZZ_MARK(0x8004F174);
ZZ_MARK(0x8004F178);
ZZ_MARK(0x8004F17C);
ZZ_MARK(0x8004F180);
ZZ_MARK(0x8004F184);
ZZ_MARK(0x8004F188);
ZZ_MARK(0x8004F18C);
ZZ_MARK(0x8004F190);
ZZ_MARK(0x8004F194);
ZZ_MARK(0x8004F198);
ZZ_MARK(0x8004F19C);
ZZ_MARK(0x8004F1A0);
ZZ_MARK(0x8004F1A4);
ZZ_MARK(0x8004F1A8);
ZZ_MARK(0x8004F1AC);
ZZ_MARK(0x8004F1B0);