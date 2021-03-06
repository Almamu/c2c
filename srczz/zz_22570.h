#ifdef ZZ_INCLUDE_CODE
ZZ_22570:
	SP -= 120;
	EMU_Write32(SP + 112,S2); //+ 0x70
	S2 = A1;
	EMU_Write32(SP + 116,RA); //+ 0x74
	EMU_Write32(SP + 108,S1); //+ 0x6C
	EMU_Write32(SP + 104,S0); //+ 0x68
	A1 = EMU_ReadU32(A0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 30772); //+ 0x7834
	EMU_Write32(SP + 24,A1); //+ 0x18
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	EMU_Write32(SP + 32,V0); //+ 0x20
	V1 = EMU_ReadU32(V1 + 8); //+ 0x8
	V0 = 0x3;
	if (V1 != V0)
	{
		S1 = SP + 40;
		ZZ_CLOCKCYCLES(20,0x800225D0);
		goto ZZ_22570_60;
	}
	S1 = SP + 40;
	V0 = A1 << 2;
	V0 += A1;
	V0 = (int32_t)V0 >> 3;
	EMU_Write32(SP + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(24,0x800225D0);
ZZ_22570_60:
	A0 = S1;
	S0 = 0x80060000;
	S0 += 2916;
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	T0 = EMU_ReadU32(S0 + 20); //+ 0x14
	A1 = SP + 24;
	A2 = SP + 88;
	A3 = SP + 92;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = SP + 96;
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,T0); //+ 0x30
	RA = 0x8002260C; //ZZ_22570_9C
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(15,0x800245B0);
	goto ZZ_245B0;
ZZ_22570_9C:
	if ((int32_t)V0 <= 0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x80022664);
		goto ZZ_22570_F4;
	}
	A0 = S1;
	V1 = EMU_ReadU32(SP + 96); //+ 0x60
	V0 = 0x1;
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 16,V1); //+ 0x10
	A2 = EMU_ReadU32(SP + 92); //+ 0x5C
	A1 = SP + 24;
	RA = 0x80022634; //ZZ_22570_C4
	A3 = R0;
	ZZ_CLOCKCYCLES(10,0x800248CC);
	goto ZZ_248CC;
ZZ_22570_C4:
	A3 = -1;
	if (!S2)
	{
		A2 = SP + 72;
		ZZ_CLOCKCYCLES(3,0x80022644);
		goto ZZ_22570_D4;
	}
	A2 = SP + 72;
	A3 = 0x100;
	ZZ_CLOCKCYCLES(4,0x80022644);
ZZ_22570_D4:
	A0 = S1;
	RA = 0x80022650; //ZZ_22570_E0
	A1 = V0;
	ZZ_CLOCKCYCLES(3,0x800240D4);
	goto ZZ_240D4;
ZZ_22570_E0:
	A0 = EMU_ReadU32(SP + 72); //+ 0x48
	A1 = EMU_ReadU32(SP + 76); //+ 0x4C
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	ZZ_CLOCKCYCLES(5,0x800226C8);
	goto ZZ_22570_158;
ZZ_22570_F4:
	if ((int32_t)V0 >= 0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x800226BC);
		goto ZZ_22570_14C;
	}
	V0 = 0x1;
	V1 = EMU_ReadU32(SP + 96); //+ 0x60
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 16,V1); //+ 0x10
	A2 = EMU_ReadU32(SP + 88); //+ 0x58
	A0 = S1;
	A1 = SP + 24;
	RA = 0x8002268C; //ZZ_22570_11C
	A3 = 0x1;
	ZZ_CLOCKCYCLES(10,0x800248CC);
	goto ZZ_248CC;
ZZ_22570_11C:
	A3 = -1;
	if (!S2)
	{
		A2 = SP + 72;
		ZZ_CLOCKCYCLES(3,0x8002269C);
		goto ZZ_22570_12C;
	}
	A2 = SP + 72;
	A3 = 0x100;
	ZZ_CLOCKCYCLES(4,0x8002269C);
ZZ_22570_12C:
	A0 = S1;
	RA = 0x800226A8; //ZZ_22570_138
	A1 = V0;
	ZZ_CLOCKCYCLES(3,0x800240D4);
	goto ZZ_240D4;
ZZ_22570_138:
	A0 = EMU_ReadU32(SP + 72); //+ 0x48
	A1 = EMU_ReadU32(SP + 76); //+ 0x4C
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	ZZ_CLOCKCYCLES(5,0x800226C8);
	goto ZZ_22570_158;
ZZ_22570_14C:
	A0 = EMU_ReadU32(S0);
	A1 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = EMU_ReadU32(S0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(3,0x800226C8);
ZZ_22570_158:
	RA = 0x800226D0; //ZZ_22570_160
	A3 = R0;
	ZZ_CLOCKCYCLES(2,0x80020304);
	goto ZZ_20304;
ZZ_22570_160:
	RA = 0x800226D8; //ZZ_22570_168
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(2,0x800226FC);
	goto ZZ_226FC;
ZZ_22570_168:
	RA = 0x800226E0; //ZZ_22570_170
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(2,0x80023424);
	goto ZZ_23424;
ZZ_22570_170:
	RA = EMU_ReadU32(SP + 116); //+ 0x74
	S2 = EMU_ReadU32(SP + 112); //+ 0x70
	S1 = EMU_ReadU32(SP + 108); //+ 0x6C
	S0 = EMU_ReadU32(SP + 104); //+ 0x68
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80027110,ZZ_26F14_1FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80022570,0x800225D0,ZZ_22570);
ZZ_MARK_TARGET(0x800225D0,0x8002260C,ZZ_22570_60);
ZZ_MARK_TARGET(0x8002260C,0x80022634,ZZ_22570_9C);
ZZ_MARK_TARGET(0x80022634,0x80022644,ZZ_22570_C4);
ZZ_MARK_TARGET(0x80022644,0x80022650,ZZ_22570_D4);
ZZ_MARK_TARGET(0x80022650,0x80022664,ZZ_22570_E0);
ZZ_MARK_TARGET(0x80022664,0x8002268C,ZZ_22570_F4);
ZZ_MARK_TARGET(0x8002268C,0x8002269C,ZZ_22570_11C);
ZZ_MARK_TARGET(0x8002269C,0x800226A8,ZZ_22570_12C);
ZZ_MARK_TARGET(0x800226A8,0x800226BC,ZZ_22570_138);
ZZ_MARK_TARGET(0x800226BC,0x800226C8,ZZ_22570_14C);
ZZ_MARK_TARGET(0x800226C8,0x800226D0,ZZ_22570_158);
ZZ_MARK_TARGET(0x800226D0,0x800226D8,ZZ_22570_160);
ZZ_MARK_TARGET(0x800226D8,0x800226E0,ZZ_22570_168);
ZZ_MARK_TARGET(0x800226E0,0x800226FC,ZZ_22570_170);
