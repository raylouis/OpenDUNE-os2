/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_Name()
 *
 * @name emu_GUI_Name
 * @implements 0AEC:0005:0010:9634 ()
 * @implements 0AEC:0015:001F:3C46
 * @implements 0AEC:0034:000A:5A66
 * @implements 0AEC:003E:0007:0BB0
 * @implements 0AEC:0045:0005:EAF1
 * @implements 0AEC:004A:0005:8BCF
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Name()
{
l__0005:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
l__0015:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0046; emu_last_cs = 0x0AEC; emu_last_ip = 0x0022; emu_last_length = 0x001F; emu_last_crc = 0x3C46; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0034:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1178_000D_B1D5();
l__003E:
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x0F78; emu_Map_SetSelection();
l__0045:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__004A;
l__004A:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Viewport()
 *
 * @name emu_GUI_Viewport
 * @implements 0AEC:004F:0024:1E6F ()
 * @implements 0AEC:0073:0007:CD55
 * @implements 0AEC:007A:0008:FD9A
 * @implements 0AEC:0082:0007:C5D5
 * @implements 0AEC:0089:0007:F655
 * @implements 0AEC:0090:0007:9AD5
 * @implements 0AEC:0097:0007:EF55
 * @implements 0AEC:009E:0002:C03A
 * @implements 0AEC:00A0:0048:33A5
 * @implements 0AEC:00E8:0019:CDE8
 * @implements 0AEC:00F1:0010:6EE9
 * @implements 0AEC:00FB:0006:FE11
 * @implements 0AEC:0101:0022:83CA
 * @implements 0AEC:0123:0032:DCBA
 * @implements 0AEC:013A:001B:CB76
 * @implements 0AEC:0155:0007:B045
 * @implements 0AEC:015C:0007:F4C5
 * @implements 0AEC:0163:0007:D945
 * @implements 0AEC:016A:0007:9DC5
 * @implements 0AEC:0171:0007:31AA
 * @implements 0AEC:0178:007A:7C0A
 * @implements 0AEC:0199:0059:1015
 * @implements 0AEC:01B4:003E:7CC6
 * @implements 0AEC:01D0:0022:10B3
 * @implements 0AEC:01DC:0016:5CAC
 * @implements 0AEC:01F2:0004:B2A4
 * @implements 0AEC:01F3:0003:22A1
 * @implements 0AEC:01F6:000F:8388
 * @implements 0AEC:0205:001E:2049
 * @implements 0AEC:020C:0017:8C1B
 * @implements 0AEC:0223:0022:AED2
 * @implements 0AEC:0245:0010:9E2E
 * @implements 0AEC:0255:000C:A970
 * @implements 0AEC:0261:000A:314E
 * @implements 0AEC:026B:0045:B28D
 * @implements 0AEC:026E:0042:B76D
 * @implements 0AEC:02B0:0027:E1FE
 * @implements 0AEC:02C9:000E:982A
 * @implements 0AEC:02D7:004A:8CD6
 * @implements 0AEC:02DA:0047:A292
 * @implements 0AEC:0321:001E:AF1F
 * @implements 0AEC:033A:0005:BAB6
 * @implements 0AEC:033F:0009:A8A9
 * @implements 0AEC:0348:000E:AD63
 * @implements 0AEC:0356:000A:C4B6
 * @implements 0AEC:0360:000F:7987
 * @implements 0AEC:036F:0014:9BC6
 * @implements 0AEC:0383:0003:1F38
 * @implements 0AEC:0386:0011:A949
 * @implements 0AEC:0397:0035:696E
 * @implements 0AEC:03CC:0004:59BF
 * @implements 0AEC:03D0:000C:BB87
 * @implements 0AEC:03D7:0005:BFC0
 * @implements 0AEC:03DC:0013:2700
 * @implements 0AEC:03EF:0011:DC23
 * @implements 0AEC:0400:0010:476E
 * @implements 0AEC:0410:0005:A7EE
 * @implements 0AEC:0415:000D:926F
 * @implements 0AEC:0422:0010:A74E
 * @implements 0AEC:0432:0010:8719
 * @implements 0AEC:0442:0019:27F9
 * @implements 0AEC:0459:0002:C03A
 * @implements 0AEC:045B:0010:6B0D
 * @implements 0AEC:046B:0003:EE9A
 * @implements 0AEC:046E:0032:26AD
 * @implements 0AEC:04A0:0005:517D
 * @implements 0AEC:04A5:000A:6AD3
 * @implements 0AEC:04AF:0009:1AAE
 * @implements 0AEC:04B2:0006:0EF2
 * @implements 0AEC:04B8:001C:FBF0
 * @implements 0AEC:04B9:001B:FE60
 * @implements 0AEC:04D4:0003:DCA3
 * @implements 0AEC:04D7:0009:9033
 * @implements 0AEC:04E0:000A:C920
 * @implements 0AEC:04EA:0024:77D8
 * @implements 0AEC:050E:000A:889E
 * @implements 0AEC:0518:000F:6E04
 * @implements 0AEC:0527:001D:6B69
 * @implements 0AEC:0544:003B:4271
 * @implements 0AEC:055D:0022:5BD5
 * @implements 0AEC:057F:0010:F5AC
 * @implements 0AEC:058F:001F:D112
 * @implements 0AEC:05AE:0010:37DB
 * @implements 0AEC:05BE:0012:A28E
 * @implements 0AEC:05C7:0009:BAB5
 * @implements 0AEC:05D0:000A:7F37
 * @implements 0AEC:05DA:001A:1D41
 * @implements 0AEC:05F4:0015:DE27
 * @implements 0AEC:0609:0019:DF1A
 * @implements 0AEC:0622:002E:D6BF
 * @implements 0AEC:0625:002B:F4D5
 * @implements 0AEC:0650:000B:36A0
 * @implements 0AEC:065B:0036:0E6D
 * @implements 0AEC:0691:0008:A466
 * @implements 0AEC:0699:0005:B8EE
 * @implements 0AEC:069C:0002:FC3A
 * @implements 0AEC:069E:000F:5504
 * @implements 0AEC:06AD:001E:C418
 * @implements 0AEC:06BE:000D:201F
 * @implements 0AEC:06CB:0004:457F
 * @implements 0AEC:06CF:000D:1D7F
 * @implements 0AEC:06DC:000D:92EB
 * @implements 0AEC:06E9:000C:A4A0
 * @implements 0AEC:06F5:000D:A042
 * @implements 0AEC:0702:0011:8982
 * @implements 0AEC:070D:0006:FDC2
 * @implements 0AEC:0713:0006:8BBA
 * @implements 0AEC:0716:0003:E198
 * @implements 0AEC:0719:0009:511D
 * @implements 0AEC:0722:0016:D5E1
 * @implements 0AEC:0738:0008:C3DB
 * @implements 0AEC:0740:002B:39A2
 * @implements 0AEC:0743:0028:3B11
 * @implements 0AEC:0765:0006:06EE
 * @implements 0AEC:076B:0012:C656
 * @implements 0AEC:0777:0006:0B02
 * @implements 0AEC:077D:000E:A7DE
 * @implements 0AEC:078B:0015:3A62
 * @implements 0AEC:078D:0013:A8AF
 * @implements 0AEC:07A0:0004:31B0
 * @implements 0AEC:07A1:0003:A1B5
 * @implements 0AEC:07A4:001E:F4A8
 * @implements 0AEC:07B0:0012:353C
 * @implements 0AEC:07C2:0002:D13A
 * @implements 0AEC:07C4:000F:8BC4
 * @implements 0AEC:07D3:0004:5F3F
 * @implements 0AEC:07D7:000F:54F3
 * @implements 0AEC:07E1:0005:5303
 * @implements 0AEC:07E6:0004:B1A1
 * @implements 0AEC:07EA:0003:E1A3
 * @implements 0AEC:07ED:0006:F7CE
 *
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:003E:C657
 * Called From: B4A2:06AC:0040:740E
 */
void emu_GUI_Viewport()
{
l__004F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A34);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_subw(&emu_bx, 0x27);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx > 0x6) goto l__009E;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x7FB);
	switch (emu_ip) {
		case 0x0073: goto l__0073;
		case 0x007A: goto l__007A;
		case 0x0082: goto l__0082;
		case 0x0089: goto l__0089;
		case 0x0090: goto l__0090;
		case 0x0097: goto l__0097;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x006E; emu_last_length = 0x0024; emu_last_crc = 0x1E6F;
			emu_call();
			return;
	}
l__0073:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__00A0;
l__007A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A36);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__00A0;
l__0082:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	goto l__00A0;
l__0089:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x2;
	goto l__00A0;
l__0090:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x4;
	goto l__00A0;
l__0097:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x3;
	goto l__00A0;
l__009E:
	goto l__00A0;
l__00A0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A34));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A34)) goto l__00F1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_get_memory16(emu_ds, 0x00, 0x343C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x343A) = emu_dx;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3444));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3442));
	emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
l__00E8:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = emu_ax;
l__00F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2D);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != 0x2D) goto l__0101;
l__00FB:
	emu_ax = 0x1;
	goto l__07ED;
l__0101:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1100);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2E) & 0x1100) == 0) goto l__0123;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x37B8) = 0x0;
	goto l__013A;
l__0123:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2200);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2E) & 0x2200) != 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B8), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x37B8) == 0x0) {
			emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
		}
	}
l__013A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_subw(&emu_bx, 0x27);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx > 0x3) goto l__0171;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x7F3);
	switch (emu_ip) {
		case 0x0082: goto l__0082;
		case 0x0155: goto l__0155;
		case 0x015C: goto l__015C;
		case 0x0163: goto l__0163;
		case 0x016A: goto l__016A;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x0150; emu_last_length = 0x001B; emu_last_crc = 0xCB76;
			emu_call();
			return;
	}
l__0155:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x6;
	goto l__0178;
l__015C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2;
	goto l__0178;
l__0163:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0178;
l__016A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x4;
	goto l__0178;
l__0171:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	goto l__0178;
l__0178:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xFFFF) goto l__01F6;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3440);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x343E);
	emu_addw(&emu_dx, 0xA);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__01D0;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__01D0;
	}
l__0199:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x343C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x343A);
	emu_addw(&emu_dx, 0x14);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__01D0;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__01D0;
	}
l__01B4:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41CA) != 0x0) goto l__01DC;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x98E5), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x98E5) == 0x1) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x4);
		if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x4) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x3);
			if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x3) goto l__01DC;
		}
	}
l__01D0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__01F3;
	}
l__01DC:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_get_memory16(emu_ds, 0x00, 0x3440) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x343E) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01F2); emu_cs = 0x0F78; emu_Map_MoveDirection();
l__01F2:
	emu_pop(&emu_cx);
l__01F3:
	goto l__00FB;
l__01F6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__0205;
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x7064);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7066);
	goto l__020C;
l__0205:
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7062);
l__020C:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_cmpw(&emu_ax, 0x2B);
	if (emu_ax == 0x2B) goto l__0223;
	emu_cmpw(&emu_ax, 0x2C);
	if (emu_ax == 0x2C) goto l__0261;
	goto l__033F;
l__0223:
	emu_ax = emu_di;
	emu_bx = 0x10;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, 0xFFD8);
	emu_bx = 0x10;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x0F3F; emu_Tile_GetPackX();
l__0245:
	emu_pop(&emu_cx);
	emu_dx = emu_di;
	emu_addw(&emu_dx, emu_ax);
	emu_di = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x0255); emu_cs = 0x0F3F; emu_Tile_GetPackY();
l__0255:
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	goto l__033F;
l__0261:
	emu_cmpw(&emu_di, 0x100);
	if ((int16)emu_di <= (int16)0x100) goto l__026B;
	emu_ax = emu_di;
	goto l__026E;
l__026B:
	emu_ax = 0x100;
l__026E:
	emu_di = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_addw(&emu_ax, 0xFF00);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_bx);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_di = emu_dx;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax <= (int16)emu_di) goto l__02B0;
	emu_ax = emu_di;
	goto l__02C9;
l__02B0:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_decw(&emu_ax);
l__02C9:
	emu_di = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x88);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) <= (int16)0x88) goto l__02D7;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	goto l__02DA;
l__02D7:
	emu_ax = 0x88;
l__02DA:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, 0xFF78);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_bx);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__0321;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	goto l__033A;
l__0321:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_decw(&emu_ax);
l__033A:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__033F;
l__033F:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0348); emu_cs = 0x0F3F; emu_Tile_PackXY();
l__0348:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__0356;
	goto l__04D7;
l__0356:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) == 0x1) goto l__0360;
	goto l__04D7;
l__0360:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x036F); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__036F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_ax == 0) goto l__0386;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0383); emu_cs = 0x1423; f__1423_07C5_0016_E9C2();
l__0383:
	goto l__07E6;
l__0386:
	emu_si = emu_get_memory16(emu_ds, 0x00, 0x38F6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_cs); emu_push(0x0397); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__0397:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	emu_cmpw(&emu_si, 0x1);
	if (emu_si == 0x1) goto l__03D0;
	emu_cmpw(&emu_si, 0x5);
	if (emu_si == 0x5) goto l__03D0;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
l__03CC:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	goto l__03D7;
l__03D0:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
l__03D7:
	emu_push(emu_cs); emu_push(0x03DC); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__03DC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_cs); emu_push(0x03EF); emu_cs = 0x176C; emu_Unit_SetAction();
l__03EF:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_si;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0400;
	emu_cmpw(&emu_ax, 0x5);
	if (emu_ax == 0x5) goto l__0415;
	goto l__0422;
l__0400:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x1A34; emu_Unit_SetDestination();
l__0410:
	emu_addw(&emu_sp, 0x6);
	goto l__045B;
l__0415:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	goto l__045B;
l__0422:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_cs); emu_push(0x0432); emu_cs = 0x1A34; emu_Unit_SetTarget();
l__0432:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__0442:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_get_memory8(emu_es, emu_bx, 0x6E) = 0x8;
	}
l__0459:
	goto l__045B;
l__045B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) != 0x0) goto l__046E;
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046B); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
l__046B:
	emu_pop(&emu_cx);
	goto l__04B9;
l__046E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__04A0;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x78));
	/* Unresolved jump */ emu_ip = 0x04B3; emu_last_cs = 0x0AEC; emu_last_ip = 0x049E; emu_last_length = 0x0032; emu_last_crc = 0x26AD; emu_call();
l__04A0:
	emu_push(emu_cs); emu_push(0x04A5); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__04A5:
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) == 0) goto l__04AF;
	emu_ax = 0x11;
	goto l__04B2;
l__04AF:
	emu_ax = 0x14;
l__04B2:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04B8); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0156_0019_AEFE();
l__04B8:
	emu_pop(&emu_cx);
l__04B9:
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04D4); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__04D4:
	goto l__07E6;
l__04D7:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__04E0;
	goto l__0719;
l__04E0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) == 0x2) goto l__04EA;
	goto l__0719;
l__04EA:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38E2);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_push(emu_cs); emu_push(0x050E); emu_cs = 0x0C3A; emu_Structure_Place();
l__050E:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0518;
	goto l__069E;
l__0518:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__0527:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x2) goto l__055D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0544:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_si = emu_ax;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x20) = emu_cx;
	emu_get_memory16(emu_es, emu_si, 0x1E) = emu_bx;
l__055D:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xC);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E2) != 0xC) goto l__05C7;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__05C7;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x057F); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__057F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x058F); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
l__058F:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax != 0) goto l__05AE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x2));
	goto l__05C7;
l__05AE:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x05BE); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__05BE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
l__05C7:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05D0); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__05D0:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F0));
	emu_push(emu_cs); emu_push(0x05DA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__05DA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) goto l__0625;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
l__05F4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x4C);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x0609); emu_cs = 0x01F7; emu_Tools_Shld();
l__0609:
	emu_pop(&emu_bx);
	emu_pop(&emu_cx);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx != 0) goto l__0625;
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
l__0622:
	emu_addw(&emu_sp, 0x6);
l__0625:
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2B));
	emu_push(emu_cs); emu_push(0x0650); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__0650:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x065B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0D74_0020_7CC1();
l__065B:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x18));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_es, emu_bx, 0x18)) goto l__069C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_andw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx == 0) goto l__069C;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x14C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__0691:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__0699:
	emu_addw(&emu_sp, 0x6);
l__069C:
	goto l__0716;
l__069E:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x2F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06AD); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__06AD:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E2) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0x1);
		if (emu_get_memory16(emu_ds, 0x00, 0x38E2) != 0x1) goto l__06CF;
	}
l__06BE:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x87;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__06CB:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	goto l__070D;
l__06CF:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0x1A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06DC); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__06DC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x06E9); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__06E9:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x86;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06F5); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__06F5:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0702); emu_cs = 0x01F7; emu_String_sprintf();
l__0702:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
l__070D:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0713); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__0713:
	emu_addw(&emu_sp, 0x6);
l__0716:
	goto l__00FB;
l__0719:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__0722;
	goto l__07A4;
l__0722:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2B);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != 0x2B) goto l__07A4;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__0738;
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0xC);
	goto l__0743;
l__0738:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
l__0740:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
l__0743:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x39F2)) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__078D;
	}
l__0765:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x076B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
l__076B:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__078D;
	}
l__0777:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x077D); emu_cs = 0x0F78; emu_Map_SetSelection();
l__077D:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x078B); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
l__078B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__078D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2E) & 0x1000) == 0) goto l__07A1;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07A0); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1178_000D_B1D5();
l__07A0:
	emu_pop(&emu_cx);
l__07A1:
	goto l__00FB;
l__07A4:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__07C4;
	}
l__07B0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2C);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != 0x2C) goto l__07C4;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07C2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1178_000D_B1D5();
l__07C2:
	goto l__07E6;
l__07C4:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x1) goto l__07D7;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
l__07D3:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	goto l__07E1;
l__07D7:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x2) goto l__07EA;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
l__07E1:
	emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x0F78; emu_Map_SetSelection();
l__07E6:
	emu_pop(&emu_cx);
	goto l__00FB;
l__07EA:
	goto l__00FB;
l__07ED:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Cancel()
 *
 * @name emu_GUI_Cancel
 * @implements 0AEC:0FD8:0017:6202 ()
 * @implements 0AEC:0FEF:0021:7407
 * @implements 0AEC:101F:001B:5BA9
 * @implements 0AEC:103A:0042:BBAB
 * @implements 0AEC:1041:003B:40DA
 * @implements 0AEC:107C:000C:379D
 * @implements 0AEC:1088:0006:B1FB
 * @implements 0AEC:1089:0005:D5FA
 * @implements 0AEC:108E:0005:8BCF
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Cancel()
{
l__0FD8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E2) == 0xFFFF) goto l__1041;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F0));
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0FEF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1010; emu_last_cs = 0x0AEC; emu_last_ip = 0x0FFC; emu_last_length = 0x0021; emu_last_crc = 0x7407; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	goto l__101F;
l__101F:
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = 0xFFFF;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x103A); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__103A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = 0x0;
l__1041:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38F2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38F4));
	if (emu_ax == 0) goto l__1089;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
l__107C:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1088); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__1088:
	emu_pop(&emu_cx);
l__1089:
	emu_ax = 0x1;
	goto l__108E;
l__108E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_BuildPlace()
 *
 * @name emu_GUI_BuildPlace
 * @implements 0AEC:1093:000F:2295 ()
 * @implements 0AEC:10A2:0016:DDD2
 * @implements 0AEC:10B8:0007:A0A5
 * @implements 0AEC:10BF:0018:52CC
 * @implements 0AEC:10D7:002B:C27D
 * @implements 0AEC:1102:001C:5E7F
 * @implements 0AEC:111E:0003:E81A
 * @implements 0AEC:1121:000B:597F
 * @implements 0AEC:112C:0013:430C
 * @implements 0AEC:113F:0012:7EA1
 * @implements 0AEC:1151:0005:8C6E
 * @implements 0AEC:1156:000B:1C58
 * @implements 0AEC:1161:0004:5A1F
 * @implements 0AEC:1165:0002:C03A
 * @implements 0AEC:1167:0004:E839
 * @implements 0AEC:116B:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_BuildPlace()
{
l__1093:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x10A2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__10A2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x97E5);
	emu_subw(&emu_bx, 0x26);
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx <= 0x8) goto l__10B8;
	goto l__1165;
l__10B8:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x116F);
	switch (emu_ip) {
		case 0x10BF: goto l__10BF;
		case 0x1121: goto l__1121;
		case 0x112C: goto l__112C;
		case 0x113F: goto l__113F;
		case 0x1156: goto l__1156;
		case 0x1165: goto l__1165;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x10BA; emu_last_length = 0x0007; emu_last_crc = 0xA0A5;
			emu_call();
			return;
	}
l__10BF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) { /* Unresolved jump */ emu_ip = 0x111F; emu_last_cs = 0x0AEC; emu_last_ip = 0x10C7; emu_last_length = 0x0018; emu_last_crc = 0x52CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10D7); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__10D7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4C);
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_cs); emu_push(0x1102); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
l__1102:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A02);
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__111E:
	emu_pop(&emu_cx);
	goto l__1167;
l__1121:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	goto l__1167;
l__112C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x9FFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	goto l__1167;
l__113F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
l__1151:
	emu_addw(&emu_sp, 0x6);
	goto l__1167;
l__1156:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1161); emu_cs = 0x1423; f__1423_04F2_0016_CD6B();
l__1161:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__1167;
l__1165:
	goto l__1167;
l__1167:
	emu_xorw(&emu_ax, emu_ax);
	goto l__116B;
l__116B:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Picture()
 *
 * @name emu_GUI_Picture
 * @implements 0AEC:1181:001C:DFE4 ()
 * @implements 0AEC:11A1:0009:6093
 * @implements 0AEC:11AA:0041:E018
 * @implements 0AEC:11EB:0007:F90C
 * @implements 0AEC:11F2:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Picture()
{
l__1181:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__11A1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x119D); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
	/* Unresolved jump */ emu_ip = 0x119D; emu_last_cs = 0x0AEC; emu_last_ip = 0x119D; emu_last_length = 0x001C; emu_last_crc = 0xDFE4; emu_call();
l__11A1:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x11AA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__11AA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11B7; emu_last_length = 0x0041; emu_last_crc = 0xE018; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) == 0) { /* Unresolved jump */ emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11DA; emu_last_length = 0x0041; emu_last_crc = 0xE018; emu_call(); return; }
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11EB); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
l__11EB:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__11F2;
l__11F2:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_RepairUpgrade()
 *
 * @name emu_GUI_RepairUpgrade
 * @implements 0AEC:11F6:000F:2195 ()
 * @implements 0AEC:1205:001C:6F1D
 * @implements 0AEC:1221:001C:8D4B
 * @implements 0AEC:123D:0007:F96C
 * @implements 0AEC:1240:0004:E839
 * @implements 0AEC:1244:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_RepairUpgrade()
{
l__11F6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1205); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__1205:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
l__1221:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1240;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x0C3A; f__0C3A_2714_0015_B6F6();
l__123D:
	emu_addw(&emu_sp, 0xA);
l__1240:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1244;
l__1244:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
