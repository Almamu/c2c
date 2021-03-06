#ifdef ZZ_INCLUDE_CODE
ZZ_4D6E8:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 8268); //+ 0xFFFFDFB4
	V0 -= 1;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8004D720);
		goto ZZ_4D6E8_38;
	}
	if (!A1)
	{
		V1 = 0xE1000000;
		ZZ_CLOCKCYCLES(9,0x8004D710);
		goto ZZ_4D6E8_28;
	}
	V1 = 0xE1000000;
	V1 |= 0x800;
	ZZ_CLOCKCYCLES(10,0x8004D710);
ZZ_4D6E8_28:
	if (!A0)
	{
		V0 = A2 & 0x27FF;
		ZZ_CLOCKCYCLES(2,0x8004D738);
		goto ZZ_4D6E8_50;
	}
	V0 = A2 & 0x27FF;
	V0 |= 0x1000;
	ZZ_CLOCKCYCLES(4,0x8004D738);
	goto ZZ_4D6E8_50;
ZZ_4D6E8_38:
	if (!A1)
	{
		V1 = 0xE1000000;
		ZZ_CLOCKCYCLES(2,0x8004D72C);
		goto ZZ_4D6E8_44;
	}
	V1 = 0xE1000000;
	V1 |= 0x200;
	ZZ_CLOCKCYCLES(3,0x8004D72C);
ZZ_4D6E8_44:
	if (!A0)
	{
		V0 = A2 & 0x9FF;
		ZZ_CLOCKCYCLES(2,0x8004D738);
		goto ZZ_4D6E8_50;
	}
	V0 = A2 & 0x9FF;
	V0 |= 0x400;
	ZZ_CLOCKCYCLES(3,0x8004D738);
ZZ_4D6E8_50:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 |= V1;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8004D4E4,ZZ_4D458_8C);
	ZZ_JUMPREGISTER(0x8004D218,ZZ_4D1E8_30);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004D6E8,0x8004D710,ZZ_4D6E8);
ZZ_MARK_TARGET(0x8004D710,0x8004D720,ZZ_4D6E8_28);
ZZ_MARK_TARGET(0x8004D720,0x8004D72C,ZZ_4D6E8_38);
ZZ_MARK_TARGET(0x8004D72C,0x8004D738,ZZ_4D6E8_44);
ZZ_MARK_TARGET(0x8004D738,0x8004D740,ZZ_4D6E8_50);
