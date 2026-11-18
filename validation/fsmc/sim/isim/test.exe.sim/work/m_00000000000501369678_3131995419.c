/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/SUEN27/vir5_PMSM/PCI.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 65535U};
static unsigned int ng4[] = {288U, 0U};
static unsigned int ng5[] = {305U, 0U};
static unsigned int ng6[] = {355U, 0U};
static unsigned int ng7[] = {135U, 0U};
static unsigned int ng8[] = {163U, 0U};
static unsigned int ng9[] = {439U, 0U};
static unsigned int ng10[] = {197U, 0U};
static unsigned int ng11[] = {279U, 0U};
static unsigned int ng12[] = {296U, 0U};
static unsigned int ng13[] = {117U, 0U};
static unsigned int ng14[] = {410U, 0U};
static unsigned int ng15[] = {150U, 0U};
static unsigned int ng16[] = {24U, 0U};
static unsigned int ng17[] = {317U, 0U};
static unsigned int ng18[] = {28U, 0U};
static unsigned int ng19[] = {382U, 0U};
static unsigned int ng20[] = {426U, 0U};
static unsigned int ng21[] = {459U, 0U};
static unsigned int ng22[] = {460U, 0U};
static unsigned int ng23[] = {461U, 0U};
static unsigned int ng24[] = {462U, 0U};
static unsigned int ng25[] = {463U, 0U};
static unsigned int ng26[] = {4080U, 0U};
static unsigned int ng27[] = {63267U, 0U};
static unsigned int ng28[] = {3258U, 0U};
static unsigned int ng29[] = {258U, 0U};
static unsigned int ng30[] = {275U, 0U};
static unsigned int ng31[] = {310U, 0U};
static unsigned int ng32[] = {120U, 0U};
static unsigned int ng33[] = {314U, 0U};
static unsigned int ng34[] = {379U, 0U};
static unsigned int ng35[] = {92U, 0U};
static unsigned int ng36[] = {369U, 0U};
static unsigned int ng37[] = {386U, 0U};
static unsigned int ng38[] = {87U, 0U};
static unsigned int ng39[] = {425U, 0U};
static unsigned int ng40[] = {105U, 0U};
static unsigned int ng41[] = {385U, 0U};
static unsigned int ng42[] = {467U, 0U};
static unsigned int ng43[] = {193U, 0U};
static unsigned int ng44[] = {487U, 0U};



static void NetDecl_116_0(char *t0)
{
    char t3[8];
    char t11[8];
    char t23[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t86[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;

LAB0:    t1 = (t0 + 12744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    memset(t11, 0, 8);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB11:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    memcpy(t40, t11, 8);

LAB14:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t73) != 0)
        goto LAB28;

LAB29:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB30;

LAB31:    memcpy(t93, t72, 8);

LAB32:    t125 = (t0 + 18424);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    memset(t129, 0, 8);
    t130 = 1U;
    t131 = t130;
    t132 = (t93 + 4);
    t133 = *((unsigned int *)t93);
    t130 = (t130 & t133);
    t134 = *((unsigned int *)t132);
    t131 = (t131 & t134);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 | t130);
    t137 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t137 | t131);
    xsi_driver_vfirst_trans(t125, 0, 0U);
    t138 = (t0 + 18024);
    *((int *)t138) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB10:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 1664U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t25 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t24) == 0)
        goto LAB15;

LAB17:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;

LAB18:    memset(t32, 0, 8);
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t23);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t33) != 0)
        goto LAB21;

LAB22:    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t11 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB21:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB22;

LAB23:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t11 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t11);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB25;

LAB26:    *((unsigned int *)t72) = 1;
    goto LAB29;

LAB28:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB29;

LAB30:    t84 = (t0 + 1824U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t84 = (t85 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t84) != 0)
        goto LAB35;

LAB36:    t94 = *((unsigned int *)t72);
    t95 = *((unsigned int *)t86);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t72 + 4);
    t98 = (t86 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t86) = 1;
    goto LAB36;

LAB35:    t92 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB36;

LAB37:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t72 + 4);
    t108 = (t86 + 4);
    t109 = *((unsigned int *)t72);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t86);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB39;

}

static void Always_120_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 12992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 18040);
    *((int *)t2) = 1;
    t3 = (t0 + 13024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 8224U);
    t5 = *((char **)t4);
    t4 = (t0 + 11504);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 11504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 11664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 8224U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(124, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 11824);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 11824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB15;

}

static void Cont_131_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t13[8];
    char t25[8];
    char t34[8];
    char t42[8];
    char t74[8];
    char t88[8];
    char t95[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;

LAB0:    t1 = (t0 + 13240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1824U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t13, 0, 8);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB11:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB12;

LAB13:    memcpy(t42, t13, 8);

LAB14:    memset(t74, 0, 8);
    t75 = (t42 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t42);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t75) != 0)
        goto LAB28;

LAB29:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB30;

LAB31:    memcpy(t95, t74, 8);

LAB32:    memset(t4, 0, 8);
    t127 = (t95 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t95);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t127) != 0)
        goto LAB42;

LAB43:    t134 = (t4 + 4);
    t135 = *((unsigned int *)t4);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB44;

LAB45:    t141 = *((unsigned int *)t4);
    t142 = (~(t141));
    t143 = *((unsigned int *)t134);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t134) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t4) > 0)
        goto LAB50;

LAB51:    memcpy(t3, t145, 8);

LAB52:    t146 = (t0 + 18488);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    memset(t150, 0, 8);
    t151 = 65535U;
    t152 = t151;
    t153 = (t3 + 4);
    t154 = *((unsigned int *)t3);
    t151 = (t151 & t154);
    t155 = *((unsigned int *)t153);
    t152 = (t152 & t155);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t157 | t151);
    t158 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t158 | t152);
    xsi_driver_vfirst_trans(t146, 0, 15);
    t159 = (t0 + 18056);
    *((int *)t159) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB10:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB12:    t26 = (t0 + 1984U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t26 = (t27 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t26) == 0)
        goto LAB15;

LAB17:    t33 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t33) = 1;

LAB18:    memset(t34, 0, 8);
    t35 = (t25 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t25);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t35) != 0)
        goto LAB21;

LAB22:    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t13 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB21:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB22;

LAB23:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t13 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t13);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB25;

LAB26:    *((unsigned int *)t74) = 1;
    goto LAB29;

LAB28:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB29;

LAB30:    t86 = (t0 + 1664U);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    t86 = (t87 + 4);
    t89 = *((unsigned int *)t86);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t86) != 0)
        goto LAB35;

LAB36:    t96 = *((unsigned int *)t74);
    t97 = *((unsigned int *)t88);
    t98 = (t96 & t97);
    *((unsigned int *)t95) = t98;
    t99 = (t74 + 4);
    t100 = (t88 + 4);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t99);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t88) = 1;
    goto LAB36;

LAB35:    t94 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB36;

LAB37:    t107 = *((unsigned int *)t95);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t95) = (t107 | t108);
    t109 = (t74 + 4);
    t110 = (t88 + 4);
    t111 = *((unsigned int *)t74);
    t112 = (~(t111));
    t113 = *((unsigned int *)t109);
    t114 = (~(t113));
    t115 = *((unsigned int *)t88);
    t116 = (~(t115));
    t117 = *((unsigned int *)t110);
    t118 = (~(t117));
    t119 = (t112 & t114);
    t120 = (t116 & t118);
    t121 = (~(t119));
    t122 = (~(t120));
    t123 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t123 & t121);
    t124 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t124 & t122);
    t125 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t125 & t121);
    t126 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t126 & t122);
    goto LAB39;

LAB40:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB42:    t133 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB43;

LAB44:    t138 = (t0 + 8624);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    goto LAB45;

LAB46:    t145 = ((char*)((ng3)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t3, 16, t140, 16, t145, 16);
    goto LAB52;

LAB50:    memcpy(t3, t140, 8);
    goto LAB52;

}

static void Always_136_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 13488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 18072);
    *((int *)t2) = 1;
    t3 = (t0 + 13520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t4, 12);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng38)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng40)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng42)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng43)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng44)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 12, t2, 12);
    if (t6 == 1)
        goto LAB85;

LAB86:
LAB88:
LAB87:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB89:    goto LAB2;

LAB7:    xsi_set_current_line(138, ng0);
    t7 = (t0 + 4704U);
    t8 = *((char **)t7);
    t7 = (t0 + 8624);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 16);
    goto LAB89;

LAB9:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 4864U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB11:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 5024U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB13:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 5184U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB15:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 5344U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB17:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 5504U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB19:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 5664U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB21:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 5824U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB23:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 5984U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB25:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 6144U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB27:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 6304U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB29:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 6464U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB31:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 6624U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB33:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 6784U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB35:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 6944U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB37:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 7104U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB39:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 7264U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB41:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 7424U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB43:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 7584U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB45:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 7744U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB47:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 7904U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB49:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 8064U);
    t4 = *((char **)t3);
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB89;

LAB51:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 8624);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB89;

LAB53:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 8784);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB55:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 8944);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB57:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 9104);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB59:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 9264);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB61:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 9424);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB63:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 9584);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB65:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 9744);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB67:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 9904);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB69:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 10064);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB71:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 10224);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB73:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 10384);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB75:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 10544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB77:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 10704);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB79:    xsi_set_current_line(176, ng0);
    t3 = (t0 + 10864);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB81:    xsi_set_current_line(177, ng0);
    t3 = (t0 + 11024);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB83:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 11184);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

LAB85:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 11344);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 8624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB89;

}

static void Always_188_4(char *t0)
{
    char t7[8];
    char t19[8];
    char t30[8];
    char t38[8];
    char t70[8];
    char t84[8];
    char t91[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    int t131;
    char *t132;
    char *t133;

LAB0:    t1 = (t0 + 13736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 18088);
    *((int *)t2) = 1;
    t3 = (t0 + 13768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(188, ng0);

LAB5:    xsi_set_current_line(189, ng0);
    t4 = (t0 + 11664);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t38, t7, 8);

LAB12:    memset(t70, 0, 8);
    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t71) != 0)
        goto LAB26;

LAB27:    t78 = (t70 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB28;

LAB29:    memcpy(t91, t70, 8);

LAB30:    t123 = (t91 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t91);
    t127 = (t126 & t125);
    t128 = (t127 != 0);
    if (t128 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 11824);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t23) == 0)
        goto LAB13;

LAB15:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;

LAB16:    memset(t30, 0, 8);
    t31 = (t19 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t31) != 0)
        goto LAB19;

LAB20:    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t7 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB19:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB21:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB23;

LAB24:    *((unsigned int *)t70) = 1;
    goto LAB27;

LAB26:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB27;

LAB28:    t82 = (t0 + 8224U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    t82 = (t83 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t82) != 0)
        goto LAB33;

LAB34:    t92 = *((unsigned int *)t70);
    t93 = *((unsigned int *)t84);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t70 + 4);
    t96 = (t84 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t84) = 1;
    goto LAB34;

LAB33:    t90 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB34;

LAB35:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t70 + 4);
    t106 = (t84 + 4);
    t107 = *((unsigned int *)t70);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t84);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB37;

LAB38:    xsi_set_current_line(189, ng0);

LAB41:    xsi_set_current_line(190, ng0);
    t129 = (t0 + 1344U);
    t130 = *((char **)t129);

LAB42:    t129 = ((char*)((ng28)));
    t131 = xsi_vlog_unsigned_case_compare(t130, 12, t129, 12);
    if (t131 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng29)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng30)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng31)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng32)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng33)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng34)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng35)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng36)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng37)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng38)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng39)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng40)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng41)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng42)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng43)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng44)));
    t62 = xsi_vlog_unsigned_case_compare(t130, 12, t2, 12);
    if (t62 == 1)
        goto LAB75;

LAB76:
LAB78:
LAB77:    xsi_set_current_line(208, ng0);

LAB80:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 8784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8784);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 8944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8944);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 9104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 9264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9264);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 9424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9424);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 9584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 9744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 10064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 10224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 10384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 10544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10544);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 10704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10704);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 10864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 11024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 11184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 11344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11344);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);

LAB79:    goto LAB40;

LAB43:    xsi_set_current_line(191, ng0);
    t132 = (t0 + 1504U);
    t133 = *((char **)t132);
    t132 = (t0 + 8784);
    xsi_vlogvar_wait_assign_value(t132, t133, 0, 0, 16, 0LL);
    goto LAB79;

LAB45:    xsi_set_current_line(192, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 8944);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB47:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 9104);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB49:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 9264);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB51:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 9424);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB53:    xsi_set_current_line(196, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 9584);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB55:    xsi_set_current_line(197, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 9744);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB57:    xsi_set_current_line(198, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 9904);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB59:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 10064);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB61:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 10224);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB63:    xsi_set_current_line(201, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 10384);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB65:    xsi_set_current_line(202, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 10544);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB67:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 10704);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB69:    xsi_set_current_line(204, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 10864);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB71:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 11024);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB73:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 11184);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

LAB75:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 11344);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB79;

}

static void Cont_231_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 8944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18104);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_232_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 9104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18120);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_233_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 9264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18136);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_234_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 9424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18152);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_235_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 9584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18168);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_236_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 9744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18184);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_237_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 9904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18200);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_238_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 10064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18216);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_239_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 10224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18232);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_240_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 10384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18248);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_241_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 10544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_242_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 10704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18280);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_243_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 10864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18296);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_244_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 17208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 11024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19384);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18312);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_245_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 17456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 11184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18328);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_246_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 17704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 11344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18344);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000501369678_3131995419_init()
{
	static char *pe[] = {(void *)NetDecl_116_0,(void *)Always_120_1,(void *)Cont_131_2,(void *)Always_136_3,(void *)Always_188_4,(void *)Cont_231_5,(void *)Cont_232_6,(void *)Cont_233_7,(void *)Cont_234_8,(void *)Cont_235_9,(void *)Cont_236_10,(void *)Cont_237_11,(void *)Cont_238_12,(void *)Cont_239_13,(void *)Cont_240_14,(void *)Cont_241_15,(void *)Cont_242_16,(void *)Cont_243_17,(void *)Cont_244_18,(void *)Cont_245_19,(void *)Cont_246_20};
	xsi_register_didat("work_m_00000000000501369678_3131995419", "isim/test.exe.sim/work/m_00000000000501369678_3131995419.didat");
	xsi_register_executes(pe);
}
