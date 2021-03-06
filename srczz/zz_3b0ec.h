#ifdef ZZ_INCLUDE_CODE
ZZ_3B0EC:
	AT = 0x1F800000;
	EMU_Write32(AT,S0);
	EMU_Write32(AT + 4,S1); //+ 0x4
	EMU_Write32(AT + 8,S2); //+ 0x8
	EMU_Write32(AT + 12,S3); //+ 0xC
	EMU_Write32(AT + 16,S4); //+ 0x10
	EMU_Write32(AT + 20,S5); //+ 0x14
	EMU_Write32(AT + 24,S6); //+ 0x18
	EMU_Write32(AT + 28,S7); //+ 0x1C
	EMU_Write32(AT + 32,T8); //+ 0x20
	EMU_Write32(AT + 36,T9); //+ 0x24
	EMU_Write32(AT + 40,K0); //+ 0x28
	EMU_Write32(AT + 44,K1); //+ 0x2C
	EMU_Write32(AT + 48,GP); //+ 0x30
	EMU_Write32(AT + 52,SP); //+ 0x34
	EMU_Write32(AT + 56,FP); //+ 0x38
	EMU_Write32(AT + 60,RA); //+ 0x3C
	S6 = 0xFFFF;
	RA = 0x80040000;
	RA -= 19572;
	V0 = R0;
	T5 = R0;
	S0 = A0 + 8;
	AT = EMU_ReadU16(A0 + 4); //+ 0x4
	AT <<= 1;
	AT += 4;
	SP = EMU_CheckedAdd(A0,AT);
	T7 = SP;
	AT = EMU_ReadU16(A0 + 6); //+ 0x6
	AT <<= 1;
	AT += 4;
	FP = EMU_CheckedAdd(A0,AT);
	T6 = A1 + 4;
	GP = EMU_ReadU16(A1);
	S1 = A2 + 4;
	AT = EMU_ReadU16(S0);
	S0 += 2;
	T9 = (int32_t)S0 < (int32_t)SP;
	if (!T9)
	{
		T3 = R0;
		ZZ_CLOCKCYCLES(42,0x8003B1B0);
		goto ZZ_3B0EC_C4;
	}
	T3 = R0;
	T8 = AT;
	if (T8 == S6)
	{
		T1 = T8 & 0xFFF;
		ZZ_CLOCKCYCLES(45,0x8003B1B0);
		goto ZZ_3B0EC_C4;
	}
	T1 = T8 & 0xFFF;
	T3 = T8 & 0xF000;
	T3 >>= 12;
	T3 += 1;
	ZZ_CLOCKCYCLES(49,0x8003B1B4);
	goto ZZ_3B0EC_C8;
ZZ_3B0EC_C4:
	T1 = S6 << 8;
	ZZ_CLOCKCYCLES(1,0x8003B1B4);
ZZ_3B0EC_C8:
	if ((int32_t)T3 <= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8003B1C4);
		goto ZZ_3B0EC_D8;
	}
	T8 = EMU_ReadU16(S0);
	S0 += 2;
	ZZ_CLOCKCYCLES(4,0x8003B1C4);
ZZ_3B0EC_D8:
	AT = EMU_ReadU16(T7);
	T7 += 2;
	T9 = (int32_t)T7 < (int32_t)FP;
	if (!T9)
	{
		T2 = R0;
		ZZ_CLOCKCYCLES(5,0x8003B1F4);
		goto ZZ_3B0EC_108;
	}
	T2 = R0;
	S7 = AT;
	if (S7 == S6)
	{
		T0 = S7 & 0xFFF;
		ZZ_CLOCKCYCLES(8,0x8003B1F4);
		goto ZZ_3B0EC_108;
	}
	T0 = S7 & 0xFFF;
	T2 = S7 & 0xF000;
	T2 >>= 12;
	T2 += 1;
	ZZ_CLOCKCYCLES(12,0x8003B1F8);
	goto ZZ_3B0EC_10C;
ZZ_3B0EC_108:
	T0 = S6 << 8;
	ZZ_CLOCKCYCLES(1,0x8003B1F8);
ZZ_3B0EC_10C:
	if ((int32_t)T2 <= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8003B208);
		goto ZZ_3B0EC_11C;
	}
	S7 = EMU_ReadU16(T7);
	T7 += 2;
	ZZ_CLOCKCYCLES(4,0x8003B208);
ZZ_3B0EC_11C:
	V1 = R0;
	ZZ_CLOCKCYCLES(1,0x8003B20C);
ZZ_3B0EC_120:
	AT = (int32_t)V1 < (int32_t)GP;
	A3 = (int32_t)R0 < (int32_t)T3;
	AT &= A3;
	if (!AT)
	{
		AT = EMU_CheckedAdd(T1,-1);
		ZZ_CLOCKCYCLES(5,0x8003B2A0);
		goto ZZ_3B0EC_1B4;
	}
	AT = EMU_CheckedAdd(T1,-1);
	AT = EMU_CheckedSubtract(AT,V1);
	if (AT)
	{
		ZZ_CLOCKCYCLES(8,0x8003B2A0);
		goto ZZ_3B0EC_1B4;
	}
	T3 = EMU_CheckedAdd(T3,-1);
	T5 += 1;
	V1 += 1;
	T6 += 2;
	if ((int32_t)T3 <= 0)
	{
		ZZ_CLOCKCYCLES(14,0x8003B254);
		goto ZZ_3B0EC_168;
	}
	T8 = EMU_ReadU16(S0);
	S0 += 2;
	ZZ_CLOCKCYCLES(18,0x8003B38C);
	goto ZZ_3B0EC_2A0;
ZZ_3B0EC_168:
	AT = EMU_ReadU16(S0);
	S0 += 2;
	T9 = (int32_t)S0 < (int32_t)SP;
	if (!T9)
	{
		T3 = R0;
		ZZ_CLOCKCYCLES(5,0x8003B284);
		goto ZZ_3B0EC_198;
	}
	T3 = R0;
	T8 = AT;
	if (T8 == S6)
	{
		T1 = T8 & 0xFFF;
		ZZ_CLOCKCYCLES(8,0x8003B284);
		goto ZZ_3B0EC_198;
	}
	T1 = T8 & 0xFFF;
	T3 = T8 & 0xF000;
	T3 >>= 12;
	T3 += 1;
	ZZ_CLOCKCYCLES(12,0x8003B288);
	goto ZZ_3B0EC_19C;
ZZ_3B0EC_198:
	T1 = S6 << 8;
	ZZ_CLOCKCYCLES(1,0x8003B288);
ZZ_3B0EC_19C:
	if ((int32_t)T3 <= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8003B38C);
		goto ZZ_3B0EC_2A0;
	}
	T8 = EMU_ReadU16(S0);
	S0 += 2;
	ZZ_CLOCKCYCLES(6,0x8003B38C);
	goto ZZ_3B0EC_2A0;
ZZ_3B0EC_1B4:
	if ((int32_t)T2 <= 0)
	{
		AT = EMU_CheckedAdd(T0,T5);
		ZZ_CLOCKCYCLES(2,0x8003B328);
		goto ZZ_3B0EC_23C;
	}
	AT = EMU_CheckedAdd(T0,T5);
	AT = EMU_CheckedSubtract(AT,V1);
	if (AT)
	{
		AT = S7 & 0xFFFF;
		ZZ_CLOCKCYCLES(5,0x8003B328);
		goto ZZ_3B0EC_23C;
	}
	AT = S7 & 0xFFFF;
	EMU_Write16(S1,AT);
	S1 += 2;
	V0 += 1;
	T2 = EMU_CheckedAdd(T2,-1);
	if ((int32_t)T2 <= 0)
	{
		ZZ_CLOCKCYCLES(11,0x8003B2DC);
		goto ZZ_3B0EC_1F0;
	}
	S7 = EMU_ReadU16(T7);
	T7 += 2;
	ZZ_CLOCKCYCLES(15,0x8003B38C);
	goto ZZ_3B0EC_2A0;
ZZ_3B0EC_1F0:
	AT = EMU_ReadU16(T7);
	T7 += 2;
	T9 = (int32_t)T7 < (int32_t)FP;
	if (!T9)
	{
		T2 = R0;
		ZZ_CLOCKCYCLES(5,0x8003B30C);
		goto ZZ_3B0EC_220;
	}
	T2 = R0;
	S7 = AT;
	if (S7 == S6)
	{
		T0 = S7 & 0xFFF;
		ZZ_CLOCKCYCLES(8,0x8003B30C);
		goto ZZ_3B0EC_220;
	}
	T0 = S7 & 0xFFF;
	T2 = S7 & 0xF000;
	T2 >>= 12;
	T2 += 1;
	ZZ_CLOCKCYCLES(12,0x8003B310);
	goto ZZ_3B0EC_224;
ZZ_3B0EC_220:
	T0 = S6 << 8;
	ZZ_CLOCKCYCLES(1,0x8003B310);
ZZ_3B0EC_224:
	if ((int32_t)T2 <= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8003B38C);
		goto ZZ_3B0EC_2A0;
	}
	S7 = EMU_ReadU16(T7);
	T7 += 2;
	ZZ_CLOCKCYCLES(6,0x8003B38C);
	goto ZZ_3B0EC_2A0;
ZZ_3B0EC_23C:
	AT = (int32_t)V1 < (int32_t)GP;
	if (!AT)
	{
		AT = EMU_CheckedSubtract(T1,V1);
		ZZ_CLOCKCYCLES(3,0x8003B38C);
		goto ZZ_3B0EC_2A0;
	}
	AT = EMU_CheckedSubtract(T1,V1);
	AT = EMU_CheckedAdd(AT,-1);
	A3 = EMU_CheckedAdd(T0,T5);
	A3 = EMU_CheckedSubtract(A3,V1);
	T9 = (int32_t)AT < (int32_t)A3;
	if (T9)
	{
		ZZ_CLOCKCYCLES(9,0x8003B350);
		goto ZZ_3B0EC_264;
	}
	AT = A3;
	ZZ_CLOCKCYCLES(10,0x8003B350);
ZZ_3B0EC_264:
	A3 = EMU_CheckedSubtract(GP,V1);
	A3 = EMU_CheckedAdd(A3,-1);
	T9 = (int32_t)AT < (int32_t)A3;
	if (T9)
	{
		ZZ_CLOCKCYCLES(5,0x8003B368);
		goto ZZ_3B0EC_27C;
	}
	AT = A3;
	ZZ_CLOCKCYCLES(6,0x8003B368);
ZZ_3B0EC_27C:
	A3 = (int32_t)AT < 2;
	if (!A3)
	{
		ZZ_CLOCKCYCLES(3,0x8003B910);
		goto ZZ_3B4E4_42C;
	}
	AT = EMU_ReadU16(T6);
	T6 += 2;
	EMU_Write16(S1,AT);
	S1 += 2;
	V0 += 1;
	V1 += 1;
	ZZ_CLOCKCYCLES(9,0x8003B38C);
ZZ_3B0EC_2A0:
	AT = (int32_t)V1 < (int32_t)GP;
	A3 = (int32_t)R0 < (int32_t)T2;
	AT |= A3;
	A3 = (int32_t)R0 < (int32_t)T3;
	AT |= A3;
	if (AT)
	{
		ZZ_CLOCKCYCLES(7,0x8003B20C);
		goto ZZ_3B0EC_120;
	}
	AT = EMU_ReadU16(A0 + 6); //+ 0x6
	AT <<= 1;
	AT += 4;
	T6 = EMU_CheckedAdd(A0,AT);
	AT = EMU_ReadU16(A0);
	AT <<= 1;
	AT += 4;
	T7 = EMU_CheckedAdd(A0,AT);
	ZZ_CLOCKCYCLES(17,0x8003B3D0);
ZZ_3B0EC_2E4:
	A3 = (int32_t)T6 < (int32_t)T7;
	if (!A3)
	{
		ZZ_CLOCKCYCLES(3,0x8003B494);
		goto ZZ_3B0EC_3A8;
	}
	AT = EMU_ReadU16(T6);
	T6 += 2;
	if (AT == S6)
	{
		A3 = AT & 0x8000;
		ZZ_CLOCKCYCLES(7,0x8003B494);
		goto ZZ_3B0EC_3A8;
	}
	A3 = AT & 0x8000;
	if (!A3)
	{
		S3 = AT & 0x7800;
		ZZ_CLOCKCYCLES(9,0x8003B400);
		goto ZZ_3B0EC_314;
	}
	S3 = AT & 0x7800;
	S3 >>= 11;
	S4 = AT & 0x7FF;
	ZZ_CLOCKCYCLES(12,0x8003B45C);
	goto ZZ_3B0EC_370;
ZZ_3B0EC_314:
	A3 = AT & 0x4000;
	if (!A3)
	{
		S3 = AT & 0x1F;
		ZZ_CLOCKCYCLES(3,0x8003B420);
		goto ZZ_3B0EC_334;
	}
	S3 = AT & 0x1F;
	S3 += 16;
	A3 = AT & 0x3FE0;
	A3 >>= 5;
	S4 += A3;
	ZZ_CLOCKCYCLES(8,0x8003B45C);
	goto ZZ_3B0EC_370;
ZZ_3B0EC_334:
	A3 = AT & 0x2000;
	if (!A3)
	{
		S4 = AT & 0x7FF;
		ZZ_CLOCKCYCLES(3,0x8003B44C);
		goto ZZ_3B0EC_360;
	}
	S4 = AT & 0x7FF;
	S4 <<= 1;
	A3 = A2 + 4;
	S4 += A3;
	A3 = EMU_ReadU16(S4);
	T9 = AT & 0x1800;
	A3 ^= T9;
	EMU_Write16(S4,A3);
	ZZ_CLOCKCYCLES(11,0x8003B3D0);
	goto ZZ_3B0EC_2E4;
ZZ_3B0EC_360:
	S4 = AT & 0xFFF;
	AT = EMU_ReadU16(T6);
	T6 += 2;
	S3 = AT & 0xFFF;
	ZZ_CLOCKCYCLES(4,0x8003B45C);
ZZ_3B0EC_370:
	T9 = S4;
	S3 += 1;
	S3 += S4;
	S3 <<= 1;
	S4 <<= 1;
	AT = A2 + 4;
	S4 += AT;
	S3 += AT;
	AT = EMU_ReadU16(S4);
	A3 = EMU_ReadU16(S3);
	EMU_Write16(S3,AT);
	EMU_Write16(S4,A3);
	S4 = T9;
	ZZ_CLOCKCYCLES(14,0x8003B3D0);
	goto ZZ_3B0EC_2E4;
ZZ_3B0EC_3A8:
	EMU_Write16(A2,V0);
	AT = 0x1F800000;
	S0 = EMU_ReadU32(AT);
	S1 = EMU_ReadU32(AT + 4); //+ 0x4
	S2 = EMU_ReadU32(AT + 8); //+ 0x8
	S3 = EMU_ReadU32(AT + 12); //+ 0xC
	S4 = EMU_ReadU32(AT + 16); //+ 0x10
	S5 = EMU_ReadU32(AT + 20); //+ 0x14
	S6 = EMU_ReadU32(AT + 24); //+ 0x18
	S7 = EMU_ReadU32(AT + 28); //+ 0x1C
	T8 = EMU_ReadU32(AT + 32); //+ 0x20
	T9 = EMU_ReadU32(AT + 36); //+ 0x24
	K0 = EMU_ReadU32(AT + 40); //+ 0x28
	K1 = EMU_ReadU32(AT + 44); //+ 0x2C
	GP = EMU_ReadU32(AT + 48); //+ 0x30
	SP = EMU_ReadU32(AT + 52); //+ 0x34
	RA = EMU_ReadU32(AT + 60); //+ 0x3C
	FP = EMU_ReadU32(AT + 56); //+ 0x38
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(20);
	ZZ_JUMPREGISTER(0x80029ACC,ZZ_29A74_58);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003B0EC,0x8003B1B0,ZZ_3B0EC);
ZZ_MARK_TARGET(0x8003B1B0,0x8003B1B4,ZZ_3B0EC_C4);
ZZ_MARK_TARGET(0x8003B1B4,0x8003B1C4,ZZ_3B0EC_C8);
ZZ_MARK_TARGET(0x8003B1C4,0x8003B1F4,ZZ_3B0EC_D8);
ZZ_MARK_TARGET(0x8003B1F4,0x8003B1F8,ZZ_3B0EC_108);
ZZ_MARK_TARGET(0x8003B1F8,0x8003B208,ZZ_3B0EC_10C);
ZZ_MARK_TARGET(0x8003B208,0x8003B20C,ZZ_3B0EC_11C);
ZZ_MARK_TARGET(0x8003B20C,0x8003B254,ZZ_3B0EC_120);
ZZ_MARK_TARGET(0x8003B254,0x8003B284,ZZ_3B0EC_168);
ZZ_MARK_TARGET(0x8003B284,0x8003B288,ZZ_3B0EC_198);
ZZ_MARK_TARGET(0x8003B288,0x8003B2A0,ZZ_3B0EC_19C);
ZZ_MARK_TARGET(0x8003B2A0,0x8003B2DC,ZZ_3B0EC_1B4);
ZZ_MARK_TARGET(0x8003B2DC,0x8003B30C,ZZ_3B0EC_1F0);
ZZ_MARK_TARGET(0x8003B30C,0x8003B310,ZZ_3B0EC_220);
ZZ_MARK_TARGET(0x8003B310,0x8003B328,ZZ_3B0EC_224);
ZZ_MARK_TARGET(0x8003B328,0x8003B350,ZZ_3B0EC_23C);
ZZ_MARK_TARGET(0x8003B350,0x8003B368,ZZ_3B0EC_264);
ZZ_MARK_TARGET(0x8003B368,0x8003B38C,ZZ_3B0EC_27C);
ZZ_MARK_TARGET(0x8003B38C,0x8003B3D0,ZZ_3B0EC_2A0);
ZZ_MARK_TARGET(0x8003B3D0,0x8003B400,ZZ_3B0EC_2E4);
ZZ_MARK_TARGET(0x8003B400,0x8003B420,ZZ_3B0EC_314);
ZZ_MARK_TARGET(0x8003B420,0x8003B44C,ZZ_3B0EC_334);
ZZ_MARK_TARGET(0x8003B44C,0x8003B45C,ZZ_3B0EC_360);
ZZ_MARK_TARGET(0x8003B45C,0x8003B494,ZZ_3B0EC_370);
ZZ_MARK_TARGET(0x8003B494,0x8003B4E4,ZZ_3B0EC_3A8);
