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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_cordic180_equivalence.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1234567U, 0U};
static int ng4[] = {42, 0};
static const char *ng5 = "FAIL: CORDIC equivalence input=%0d cos=%0d/%0d sin=%0d/%0d";
static int ng6[] = {24, 0};
static int ng7[] = {720, 0};
static int ng8[] = {32768, 0};
static int ng9[] = {12345, 0};
static int ng10[] = {4, 0};
static int ng11[] = {5898240, 0};
static const char *ng12 = "PASS: CORDIC180 bit-exact sine/cosine samples=%0d";
static const char *ng13 = "FAIL: CORDIC180 equivalence errors=%0d";
static const char *ng14 = "FAIL: CORDIC180 equivalence timeout";



static int sp_calculate(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 4280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3160);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t6 = (t1 + 8456);
    *((int *)t6) = t11;

LAB8:    t7 = (t1 + 8456);
    if (*((int *)t7) > 0)
        goto LAB9;

LAB10:    goto LAB4;

LAB9:    xsi_set_current_line(47, ng0);
    t12 = (t2 + 88U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB11;
    goto LAB1;

LAB11:    t4 = (t1 + 8456);
    t11 = *((int *)t4);
    *((int *)t4) = (t11 - 1);
    goto LAB8;

}

static void Always_7_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 5008);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);
    t4 = (t0 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2680);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_22_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t30[8];
    char t31[8];
    char t39[8];
    char t67[8];
    char t84[8];
    char t85[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t86;
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
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;

LAB0:    t1 = (t0 + 5448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 6264);
    *((int *)t2) = 1;
    t3 = (t0 + 5480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t5 = (t0 + 2840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(24, ng0);

LAB13:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(23, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 4120);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB12;

LAB14:    xsi_set_current_line(25, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 4120);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB16;

LAB17:    xsi_set_current_line(26, ng0);

LAB20:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 1800U);
    t6 = *((char **)t5);
    t5 = (t0 + 3320);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 18);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 3480);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 18);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB21:    xsi_set_current_line(30, ng0);

LAB24:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 3800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t7, 32, t8, 32);
    t14 = (t0 + 3800);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t6) == 0)
        goto LAB25;

LAB27:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB28:    memset(t23, 0, 8);
    t8 = (t4 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t8) != 0)
        goto LAB31;

LAB32:    t15 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB33;

LAB34:    memcpy(t39, t23, 8);

LAB35:    memset(t67, 0, 8);
    t68 = (t39 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t39);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t68) != 0)
        goto LAB45;

LAB46:    t75 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = (!(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB47;

LAB48:    memcpy(t93, t67, 8);

LAB49:    t121 = (t93 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t93);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB23;

LAB25:    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t23) = 1;
    goto LAB32;

LAB31:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    t21 = (t0 + 2120U);
    t22 = *((char **)t21);
    t21 = (t0 + 3320);
    t28 = (t21 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_signed_case_noteq(t30, 18, t22, 18, t29, 18);
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t32) != 0)
        goto LAB38;

LAB39:    t40 = *((unsigned int *)t23);
    t41 = *((unsigned int *)t31);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = (t23 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB38:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB39;

LAB40:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t23 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t23);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t31);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    goto LAB42;

LAB43:    *((unsigned int *)t67) = 1;
    goto LAB46;

LAB45:    t74 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB46;

LAB47:    t80 = (t0 + 2280U);
    t81 = *((char **)t80);
    t80 = (t0 + 3480);
    t82 = (t80 + 56U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    xsi_vlog_signed_case_noteq(t84, 18, t81, 18, t83, 18);
    memset(t85, 0, 8);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t84);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t86) != 0)
        goto LAB52;

LAB53:    t94 = *((unsigned int *)t67);
    t95 = *((unsigned int *)t85);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = (t67 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t85) = 1;
    goto LAB53;

LAB52:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB53;

LAB54:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t67 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t67);
    t112 = (t111 & t110);
    t113 = *((unsigned int *)t108);
    t114 = (~(t113));
    t115 = *((unsigned int *)t85);
    t116 = (t115 & t114);
    t117 = (~(t112));
    t118 = (~(t116));
    t119 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t119 & t117);
    t120 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t120 & t118);
    goto LAB56;

LAB57:    xsi_set_current_line(32, ng0);

LAB60:    xsi_set_current_line(33, ng0);
    t127 = (t0 + 3160);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    t130 = (t0 + 2120U);
    t131 = *((char **)t130);
    t130 = (t0 + 3320);
    t132 = (t130 + 56U);
    t133 = *((char **)t132);
    t134 = (t0 + 2280U);
    t135 = *((char **)t134);
    t134 = (t0 + 3480);
    t136 = (t134 + 56U);
    t137 = *((char **)t136);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)119, t129, 32, (char)119, t131, 18, (char)119, t133, 18, (char)119, t135, 18, (char)119, t137, 18);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB59;

}

static void Initial_50_2(char *t0)
{
    char t12[8];
    char t18[8];
    char t35[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;

LAB0:    t1 = (t0 + 5696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 8460);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 8460);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t2, 32);
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);

LAB9:    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_leq(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t2, 32);
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);

LAB18:    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng10)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t2, 32);
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);

LAB27:    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng10)));
    memset(t12, 0, 8);
    xsi_vlog_signed_leq(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)119, t8, 32);

LAB57:    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(51, ng0);
    t10 = (t0 + 6328);
    *((int *)t10) = 1;
    t11 = (t0 + 5728);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 8460);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 3960);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    memset(t18, 0, 8);
    xsi_vlog_signed_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 5504);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t20, t21);
    t22 = (t0 + 4280);
    xsi_vlogvar_assign_value(t22, t18, 0, 0, 32);

LAB14:    t23 = (t0 + 5600);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t0, t24);

LAB16:    if (t7 != 0)
        goto LAB17;

LAB12:    t24 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t24);

LAB13:    t31 = (t0 + 5600);
    t32 = *((char **)t31);
    t31 = (t0 + 848);
    t33 = (t0 + 5504);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 3960);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB9;

LAB15:;
LAB17:    t23 = (t0 + 5696U);
    *((char **)t23) = &&LAB14;
    goto LAB1;

LAB19:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 3960);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    memset(t18, 0, 8);
    xsi_vlog_signed_multiply(t18, 32, t16, 32, t17, 32);
    t19 = ((char*)((ng9)));
    memset(t35, 0, 8);
    xsi_vlog_signed_add(t35, 32, t18, 32, t19, 32);
    t20 = (t0 + 5504);
    t21 = (t0 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t0 + 4280);
    xsi_vlogvar_assign_value(t23, t35, 0, 0, 32);

LAB23:    t24 = (t0 + 5600);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t7 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB25:    if (t7 != 0)
        goto LAB26;

LAB21:    t25 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB22:    t32 = (t0 + 5600);
    t33 = *((char **)t32);
    t32 = (t0 + 848);
    t34 = (t0 + 5504);
    t36 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t36);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 3960);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB18;

LAB24:;
LAB26:    t24 = (t0 + 5696U);
    *((char **)t24) = &&LAB23;
    goto LAB1;

LAB28:    xsi_set_current_line(54, ng0);

LAB30:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 3960);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng11)));
    memset(t18, 0, 8);
    xsi_vlog_signed_multiply(t18, 32, t16, 32, t17, 32);
    t19 = (t0 + 5504);
    t20 = (t0 + 848);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t20, t21);
    t22 = (t0 + 4280);
    xsi_vlogvar_assign_value(t22, t18, 0, 0, 32);

LAB33:    t23 = (t0 + 5600);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t0, t24);

LAB35:    if (t7 != 0)
        goto LAB36;

LAB31:    t24 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t24);

LAB32:    t31 = (t0 + 5600);
    t32 = *((char **)t31);
    t31 = (t0 + 848);
    t33 = (t0 + 5504);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng10)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t9, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_greater(t18, 32, t8, 32, t12, 32);
    t10 = (t18 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t18);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng10)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 3960);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB27;

LAB34:;
LAB36:    t23 = (t0 + 5696U);
    *((char **)t23) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 3960);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng11)));
    memset(t35, 0, 8);
    xsi_vlog_signed_multiply(t35, 32, t16, 32, t17, 32);
    t19 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_signed_minus(t37, 32, t35, 32, t19, 32);
    t20 = (t0 + 5504);
    t21 = (t0 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t0 + 4280);
    xsi_vlogvar_assign_value(t23, t37, 0, 0, 32);

LAB42:    t24 = (t0 + 5600);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t7 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB44:    if (t7 != 0)
        goto LAB45;

LAB40:    t25 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB41:    t32 = (t0 + 5600);
    t33 = *((char **)t32);
    t32 = (t0 + 848);
    t34 = (t0 + 5504);
    t36 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t36);
    goto LAB39;

LAB43:;
LAB45:    t24 = (t0 + 5696U);
    *((char **)t24) = &&LAB42;
    goto LAB1;

LAB46:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 3960);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng11)));
    memset(t18, 0, 8);
    xsi_vlog_signed_multiply(t18, 32, t16, 32, t17, 32);
    t19 = ((char*)((ng1)));
    memset(t35, 0, 8);
    xsi_vlog_signed_add(t35, 32, t18, 32, t19, 32);
    t20 = (t0 + 5504);
    t21 = (t0 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t0 + 4280);
    xsi_vlogvar_assign_value(t23, t35, 0, 0, 32);

LAB51:    t24 = (t0 + 5600);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t7 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB53:    if (t7 != 0)
        goto LAB54;

LAB49:    t25 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB50:    t32 = (t0 + 5600);
    t33 = *((char **)t32);
    t32 = (t0 + 848);
    t34 = (t0 + 5504);
    t36 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t36);
    goto LAB48;

LAB52:;
LAB54:    t24 = (t0 + 5696U);
    *((char **)t24) = &&LAB51;
    goto LAB1;

LAB55:    xsi_set_current_line(59, ng0);
    t11 = (t0 + 3800);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)119, t16, 32);
    goto LAB57;

}

static void Initial_63_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);

LAB4:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5752);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(65, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(66, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002818766378_1531062109_init()
{
	static char *pe[] = {(void *)Always_7_0,(void *)Always_22_1,(void *)Initial_50_2,(void *)Initial_63_3};
	static char *se[] = {(void *)sp_calculate};
	xsi_register_didat("work_m_00000000002818766378_1531062109", "isim/tb_cordic180_equivalence.exe.sim/work/m_00000000002818766378_1531062109.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
