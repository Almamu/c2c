#ifdef ZZ_INCLUDE_CODE
ZZ_1E844:
	if ((int32_t)A2 <= 0)
	{
		V1 = A1 - A0;
		ZZ_CLOCKCYCLES(2,0x8001E874);
		goto ZZ_1E844_30;
	}
	V1 = A1 - A0;
	if ((int32_t)V1 < 0)
	{
		V0 = (int32_t)V1 < (int32_t)A2;
		ZZ_CLOCKCYCLES(4,0x8001E864);
		goto ZZ_1E844_20;
	}
	V0 = (int32_t)V1 < (int32_t)A2;
	if (V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(6,0x8001E880);
		goto ZZ_1E844_3C;
	}
	V0 = A1;
	ZZ_CLOCKCYCLES(8,0x8001E874);
	goto ZZ_1E844_30;
ZZ_1E844_20:
	V0 = -V1;
	V0 = (int32_t)V0 < (int32_t)A2;
	if (V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(4,0x8001E880);
		goto ZZ_1E844_3C;
	}
	V0 = A1;
	ZZ_CLOCKCYCLES(4,0x8001E874);
ZZ_1E844_30:
	if ((int32_t)V1 > 0)
	{
		V0 = A0 + A2;
		ZZ_CLOCKCYCLES(2,0x8001E880);
		goto ZZ_1E844_3C;
	}
	V0 = A0 + A2;
	V0 = A0 - A2;
	ZZ_CLOCKCYCLES(3,0x8001E880);
ZZ_1E844_3C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80028C80,ZZ_28C38_48);
	ZZ_JUMPREGISTER(0x8002C22C,ZZ_2BF4C_2E0);
	ZZ_JUMPREGISTER(0x8002C158,ZZ_2BF4C_20C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001E844,ZZ_1E844);
ZZ_MARK(0x8001E848);
ZZ_MARK(0x8001E84C);
ZZ_MARK(0x8001E850);
ZZ_MARK(0x8001E854);
ZZ_MARK(0x8001E858);
ZZ_MARK(0x8001E85C);
ZZ_MARK(0x8001E860);
ZZ_MARK_TARGET(0x8001E864,ZZ_1E844_20);
ZZ_MARK(0x8001E868);
ZZ_MARK(0x8001E86C);
ZZ_MARK(0x8001E870);
ZZ_MARK_TARGET(0x8001E874,ZZ_1E844_30);
ZZ_MARK(0x8001E878);
ZZ_MARK(0x8001E87C);
ZZ_MARK_TARGET(0x8001E880,ZZ_1E844_3C);
ZZ_MARK(0x8001E884);