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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/test_backEMF.v";
static int ng1[] = {1, 0};
static int ng2[] = {12, 0};
static int ng3[] = {2, 0, 0, 0};
static int ng4[] = {1, 0, 0, 0};
static int ng5[] = {120, 0};
static unsigned int ng6[] = {67108U, 0U, 0U, 0U};
static int ng7[] = {14, 0};
static int ng8[] = {4, 0, 0, 0};
static int ng9[] = {13, 0};
static int ng10[] = {0, 0};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {1U, 1U};
static const char *ng13 = "FAIL: angle=%0d speed=%0d phase=%0d actual=%0d expected=%f error=%f";
static const char *ng14 = "FAIL: five-phase voltage sum=%f";
static int ng15[] = {4, 0};
static int ng16[] = {3, 0};
static int ng17[] = {2, 0};
static const char *ng18 = "FAIL: signed FMC left shift";
static int ng19[] = {7, 0};
static int ng20[] = {10, 0};
static const char *ng21 = "FAIL: mixed CORDIC batches at slot %0d";
static const char *ng22 = "FAIL: CORDIC latency no longer matches frame schedule";
static int ng23[] = {18, 0};
static const char *ng24 = "FAIL: five-phase multiplier/frame mismatch";
static const char *ng25 = "FAIL: output changed outside count 18";
static int ng26[] = {15, 0};
static const char *ng27 = "FAIL: STM32 truncation";
static unsigned int ng28[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static const char *ng29 = "FAIL: reset outputs";
static unsigned int ng30[] = {1U, 0U};
static int ng31[] = {32768, 0};
static int ng32[] = {512, 0};
static int ng33[] = {24576, 0};
static unsigned int ng34[] = {400U, 0U};
static int ng35[] = {8192, 0};
static unsigned int ng36[] = {800U, 0U};
static unsigned int ng37[] = {8192U, 0U};
static unsigned int ng38[] = {0U, 0U};
static unsigned int ng39[] = {512U, 0U};
static unsigned int ng40[] = {32768U, 0U};
static unsigned int ng41[] = {32767U, 0U};
static int ng42[] = {250, 0};
static int ng43[] = {1979, 0};
static unsigned int ng44[] = {300U, 0U};
static unsigned int ng45[] = {450U, 0U};
static unsigned int ng46[] = {12000U, 0U};
static unsigned int ng47[] = {6000U, 0U};
static const char *ng48 = "FAIL: asynchronous reset";
static const char *ng49 = "FAIL: periodic CORDIC requests stopped";
static const char *ng50 = "PASS: five-phase BackEMF, %0d numerical checks, frame timing, dynamic inputs and reset";
static const char *ng51 = "FAIL: %0d errors";
static const char *ng52 = "FAIL: test timeout";



static int sp_reference_sin(char *t1, char *t2)
{
    char t9[8];
    char t34[16];
    char t39[16];
    char t41[16];
    char t42[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    double t6;
    char *t7;
    unsigned int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    double t19;
    double t20;
    char *t21;
    double t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    double t28;
    double t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    double t43;
    double t44;
    char *t45;

LAB0:    t0 = 1;
    xsi_set_current_line(254, ng0);

LAB2:    xsi_set_current_line(255, ng0);
    t3 = (t1 + 5672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 5832);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(256, ng0);

LAB3:    t3 = (t1 + 5832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t8 = (t6 > 3.1415926535897931);
    *((unsigned int *)t9) = t8;
    t7 = (t9 + 4);
    *((unsigned int *)t7) = 0U;
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(257, ng0);

LAB6:    t3 = (t1 + 5832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t19 = (-(3.1415926535897931));
    t8 = (t6 < t19);
    *((unsigned int *)t9) = t8;
    t7 = (t9 + 4);
    *((unsigned int *)t7) = 0U;
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(258, ng0);
    t3 = (t1 + 5832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 5992);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(259, ng0);
    t3 = (t1 + 5832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 6152);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(260, ng0);
    xsi_set_current_line(260, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 6312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB9:    t3 = (t1 + 6312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_leq(t9, 32, t5, 32, t7, 32);
    t10 = (t9 + 4);
    t8 = *((unsigned int *)t10);
    t11 = (~(t8));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(264, ng0);
    t3 = (t1 + 6152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 5512);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(256, ng0);
    t16 = (t1 + 5832);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = *((double *)t18);
    t20 = (t19 - 6.2831853071795862);
    t21 = (t1 + 5832);
    xsi_vlogvar_assign_value_double(t21, t20, 0);
    goto LAB3;

LAB7:    xsi_set_current_line(257, ng0);
    t16 = (t1 + 5832);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = *((double *)t18);
    t22 = (t20 + 6.2831853071795862);
    t21 = (t1 + 5832);
    xsi_vlogvar_assign_value_double(t21, t22, 0);
    goto LAB6;

LAB10:    xsi_set_current_line(260, ng0);

LAB12:    xsi_set_current_line(261, ng0);
    t16 = (t1 + 5992);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t6 = *((double *)t18);
    t19 = (-(t6));
    t21 = (t1 + 5832);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t20 = *((double *)t24);
    t22 = (t19 * t20);
    t25 = (t1 + 5832);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = *((double *)t27);
    t29 = (t22 * t28);
    t30 = ((char*)((ng3)));
    t31 = (t1 + 6312);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_signed_multiply(t34, 64, t30, 32, t33, 32);
    t35 = ((char*)((ng3)));
    t36 = (t1 + 6312);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_signed_multiply(t39, 64, t35, 32, t38, 32);
    t40 = ((char*)((ng4)));
    xsi_vlog_signed_add(t41, 64, t39, 64, t40, 32);
    xsi_vlog_signed_multiply(t42, 64, t34, 64, t41, 64);
    t43 = xsi_vlog_convert_to_real(t42, 32, 1);
    t44 = (t29 / t43);
    t45 = (t1 + 5992);
    xsi_vlogvar_assign_value_double(t45, t44, 0);
    xsi_set_current_line(262, ng0);
    t3 = (t1 + 6152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 5992);
    t10 = (t7 + 56U);
    t16 = *((char **)t10);
    t19 = *((double *)t16);
    t20 = (t6 + t19);
    t17 = (t1 + 6152);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(260, ng0);
    t3 = (t1 + 6312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t10 = (t1 + 6312);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB9;

}

static int sp_settle_and_check(char *t1, char *t2)
{
    char t16[16];
    char t27[16];
    char t31[8];
    char t64[8];
    char t65[8];
    char t66[8];
    char t67[8];
    char t71[8];
    char t106[16];
    char t118[8];
    char t122[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    double t28;
    double t29;
    double t30;
    char *t32;
    char *t33;
    double t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    double t39;
    double t40;
    double t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    double t58;
    char *t59;
    char *t60;
    char *t61;
    double t62;
    char *t63;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    char *t120;
    char *t121;
    char *t123;
    unsigned int t124;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(272, ng0);

LAB5:    xsi_set_current_line(273, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t1 + 12424);
    *((int *)t11) = t10;

LAB6:    t12 = (t1 + 12424);
    if (*((int *)t12) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(274, ng0);
    t4 = (t1 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t16, t6, 8);
    t11 = (t16 + 8);
    memset(t11, 0, 8);
    t9 = *((unsigned int *)t6);
    t17 = (t9 & 32768U);
    t7 = t17;
    t12 = (t6 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (t18 & 32768U);
    t8 = t19;
    t20 = (t17 != 0);
    if (t20 == 1)
        goto LAB10;

LAB11:    t23 = (t19 != 0);
    if (t23 == 1)
        goto LAB12;

LAB13:    t26 = (t1 + 6632);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 64);
    xsi_set_current_line(275, ng0);
    t4 = (t1 + 6632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng6)));
    xsi_vlog_signed_multiply(t16, 64, t6, 64, t11, 64);
    t12 = ((char*)((ng7)));
    xsi_vlog_signed_arith_rshift(t27, 64, t16, 64, t12, 32);
    t13 = (t1 + 6632);
    xsi_vlogvar_assign_value(t13, t27, 0, 0, 64);
    xsi_set_current_line(276, ng0);
    t4 = (t1 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t16, t6, 8);
    t11 = (t16 + 8);
    memset(t11, 0, 8);
    t9 = *((unsigned int *)t6);
    t17 = (t9 & 32768U);
    t7 = t17;
    t12 = (t6 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (t18 & 32768U);
    t8 = t19;
    t20 = (t17 != 0);
    if (t20 == 1)
        goto LAB14;

LAB15:    t23 = (t19 != 0);
    if (t23 == 1)
        goto LAB16;

LAB17:    t26 = (t1 + 6792);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 64);
    xsi_set_current_line(277, ng0);
    t4 = (t1 + 6792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng8)));
    xsi_vlog_signed_multiply(t16, 64, t6, 64, t11, 32);
    t12 = (t1 + 6792);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 64);
    xsi_set_current_line(278, ng0);
    t4 = (t1 + 6792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t1 + 6632);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_multiply(t16, 64, t6, 64, t13, 64);
    t14 = ((char*)((ng9)));
    xsi_vlog_signed_arith_rshift(t27, 64, t16, 64, t14, 32);
    t15 = (t1 + 6792);
    xsi_vlogvar_assign_value(t15, t27, 0, 0, 64);
    xsi_set_current_line(279, ng0);
    t4 = (t1 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_sign_extend(t16, 64, t6, 16);
    t28 = xsi_vlog_convert_to_real(t16, 16, 1);
    t29 = (t28 * 6.2831853071795862);
    t30 = (t29 / 32768.000000000000);
    t11 = (t1 + 6952);
    xsi_vlogvar_assign_value_double(t11, t30, 0);
    xsi_set_current_line(280, ng0);
    t4 = (t1 + 6792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t28 = xsi_vlog_convert_to_real(t6, 64, 1);
    t29 = (t28 * 512.00000000000000);
    t30 = (t29 * 0.0010000000000000000);
    t11 = (t1 + 7432);
    xsi_vlogvar_assign_value_double(t11, t30, 0);
    xsi_set_current_line(281, ng0);
    t4 = (t1 + 7432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t28 = *((double *)t6);
    t7 = (t28 < 0.00000000000000000);
    *((unsigned int *)t31) = t7;
    t11 = (t31 + 4);
    *((unsigned int *)t11) = 0U;
    t12 = (t31 + 4);
    t8 = *((unsigned int *)t12);
    t9 = (~(t8));
    t17 = *((unsigned int *)t31);
    t18 = (t17 & t9);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(282, ng0);
    t4 = (t1 + 7432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t28 = *((double *)t6);
    t29 = (t28 + 8.0000000000000000);
    t11 = (t1 + 7432);
    xsi_vlogvar_assign_value_double(t11, t29, 0);
    xsi_set_current_line(283, ng0);
    t4 = (t1 + 7592);
    xsi_vlogvar_assign_value_double(t4, 0.00000000000000000, 0);
    xsi_set_current_line(284, ng0);
    xsi_set_current_line(284, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t1 + 6472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB21:    t4 = (t1 + 6472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng11)));
    memset(t31, 0, 8);
    xsi_vlog_signed_less(t31, 32, t6, 32, t11, 32);
    t12 = (t31 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t31);
    t17 = (t9 & t8);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(296, ng0);
    t4 = (t1 + 7592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t28 = *((double *)t6);
    t11 = (t1 + 7432);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t29 = *((double *)t13);
    t30 = (5.0000000000000000 * t29);
    t7 = (t28 > t30);
    *((unsigned int *)t31) = t7;
    t14 = (t31 + 4);
    *((unsigned int *)t14) = 0U;
    memset(t64, 0, 8);
    t15 = (t31 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t17 = *((unsigned int *)t31);
    t18 = (t17 & t9);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t15) != 0)
        goto LAB54;

LAB55:    t32 = (t64 + 4);
    t20 = *((unsigned int *)t64);
    t21 = (!(t20));
    t22 = *((unsigned int *)t32);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB56;

LAB57:    memcpy(t67, t64, 8);

LAB58:    t52 = (t67 + 4);
    t94 = *((unsigned int *)t52);
    t95 = (~(t94));
    t96 = *((unsigned int *)t67);
    t97 = (t96 & t95);
    t124 = (t97 != 0);
    if (t124 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(273, ng0);
    t13 = (t2 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    xsi_wp_set_status(t15, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    t4 = (t1 + 12424);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB6;

LAB10:    t21 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t21 | 4294901760U);
    t13 = (t16 + 8);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 | 4294967295U);
    goto LAB11;

LAB12:    t14 = (t16 + 4);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 | 4294901760U);
    t15 = (t16 + 12);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 | 4294967295U);
    goto LAB13;

LAB14:    t21 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t21 | 4294901760U);
    t13 = (t16 + 8);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 | 4294967295U);
    goto LAB15;

LAB16:    t14 = (t16 + 4);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 | 4294901760U);
    t15 = (t16 + 12);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 | 4294967295U);
    goto LAB17;

LAB18:    xsi_set_current_line(281, ng0);
    t13 = (t1 + 7432);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t29 = *((double *)t15);
    t30 = (-(t29));
    t26 = (t1 + 7432);
    xsi_vlogvar_assign_value_double(t26, t30, 0);
    goto LAB20;

LAB22:    xsi_set_current_line(284, ng0);

LAB24:    xsi_set_current_line(285, ng0);
    t13 = (t1 + 6792);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t28 = xsi_vlog_convert_to_real(t15, 64, 1);
    t29 = (-(t28));
    t30 = (t29 * 512.00000000000000);
    t26 = (t1 + 6952);
    t32 = (t26 + 56U);
    t33 = *((char **)t32);
    t34 = *((double *)t33);
    t35 = (t1 + 6472);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = xsi_vlog_convert_to_real(t37, 32, 1);
    t39 = (t38 * 6.2831853071795862);
    t40 = (t39 / 5.0000000000000000);
    t41 = (t34 - t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 848);
    t45 = xsi_create_subprogram_invocation(t43, 0, t1, t44, 0, t2);
    t46 = (t1 + 5672);
    xsi_vlogvar_assign_value_double(t46, t41, 0);

LAB25:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t10 = ((int  (*)(char *, char *))t54)(t1, t48);
    if (t10 != 0)
        goto LAB27;

LAB26:    t48 = (t2 + 64U);
    t55 = *((char **)t48);
    t48 = (t1 + 5512);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    t58 = *((double *)t57);
    t59 = (t1 + 848);
    t60 = (t2 + 56U);
    t61 = *((char **)t60);
    xsi_delete_subprogram_invocation(t59, t55, t1, t61, t2);
    t62 = (t30 * t58);
    t63 = (t1 + 7112);
    xsi_vlogvar_assign_value_double(t63, t62, 0);
    xsi_set_current_line(286, ng0);
    t4 = (t1 + 1912U);
    t5 = *((char **)t4);
    t4 = (t1 + 1872U);
    t6 = (t4 + 72U);
    t11 = *((char **)t6);
    t12 = (t1 + 1872U);
    t13 = (t12 + 48U);
    t14 = *((char **)t13);
    t15 = (t1 + 6472);
    t26 = (t15 + 56U);
    t32 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t27, 35, t5, t11, t14, 1, 1, t32, 32, 1);
    xsi_vlogtype_sign_extend(t16, 64, t27, 35);
    t28 = xsi_vlog_convert_to_real(t16, 35, 1);
    t33 = (t1 + 7112);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    t29 = *((double *)t36);
    t30 = (t28 - t29);
    t37 = (t1 + 7272);
    xsi_vlogvar_assign_value_double(t37, t30, 0);
    xsi_set_current_line(287, ng0);
    t4 = (t1 + 7272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t28 = *((double *)t6);
    t7 = (t28 < 0.00000000000000000);
    *((unsigned int *)t31) = t7;
    t11 = (t31 + 4);
    *((unsigned int *)t11) = 0U;
    t12 = (t31 + 4);
    t8 = *((unsigned int *)t12);
    t9 = (~(t8));
    t17 = *((unsigned int *)t31);
    t18 = (t17 & t9);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(288, ng0);
    t4 = (t1 + 1912U);
    t5 = *((char **)t4);
    t4 = (t1 + 1872U);
    t6 = (t4 + 72U);
    t11 = *((char **)t6);
    t12 = (t1 + 1872U);
    t13 = (t12 + 48U);
    t14 = *((char **)t13);
    t15 = (t1 + 6472);
    t26 = (t15 + 56U);
    t32 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t16, 35, t5, t11, t14, 1, 1, t32, 32, 1);
    xsi_vlog_unary_xor(t31, 1, t16, 35);
    t33 = ((char*)((ng12)));
    memset(t64, 0, 8);
    if (*((unsigned int *)t31) != *((unsigned int *)t33))
        goto LAB33;

LAB31:    t35 = (t31 + 4);
    t36 = (t33 + 4);
    if (*((unsigned int *)t35) != *((unsigned int *)t36))
        goto LAB33;

LAB32:    *((unsigned int *)t64) = 1;

LAB33:    memset(t65, 0, 8);
    t37 = (t64 + 4);
    t7 = *((unsigned int *)t37);
    t8 = (~(t7));
    t9 = *((unsigned int *)t64);
    t17 = (t9 & t8);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t37) != 0)
        goto LAB36;

LAB37:    t43 = (t65 + 4);
    t19 = *((unsigned int *)t65);
    t20 = (!(t19));
    t21 = *((unsigned int *)t43);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB38;

LAB39:    memcpy(t71, t65, 8);

LAB40:    t59 = (t71 + 4);
    t93 = *((unsigned int *)t59);
    t94 = (~(t93));
    t95 = *((unsigned int *)t71);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(293, ng0);
    t4 = (t1 + 7592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t28 = *((double *)t6);
    t11 = (t1 + 1912U);
    t12 = *((char **)t11);
    t11 = (t1 + 1872U);
    t13 = (t11 + 72U);
    t14 = *((char **)t13);
    t15 = (t1 + 1872U);
    t26 = (t15 + 48U);
    t32 = *((char **)t26);
    t33 = (t1 + 6472);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t27, 35, t12, t14, t32, 1, 1, t36, 32, 1);
    xsi_vlogtype_sign_extend(t16, 64, t27, 35);
    t29 = xsi_vlog_convert_to_real(t16, 35, 1);
    t30 = (t28 + t29);
    t37 = (t1 + 7592);
    xsi_vlogvar_assign_value_double(t37, t30, 0);
    xsi_set_current_line(294, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t6, 32, t11, 32);
    t12 = (t1 + 3432);
    xsi_vlogvar_assign_value(t12, t31, 0, 0, 32);
    xsi_set_current_line(284, ng0);
    t4 = (t1 + 6472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t6, 32, t11, 32);
    t12 = (t1 + 6472);
    xsi_vlogvar_assign_value(t12, t31, 0, 0, 32);
    goto LAB21;

LAB27:    t47 = (t2 + 48U);
    *((char **)t47) = &&LAB25;
    goto LAB1;

LAB28:    xsi_set_current_line(287, ng0);
    t13 = (t1 + 7272);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t29 = *((double *)t15);
    t30 = (-(t29));
    t26 = (t1 + 7272);
    xsi_vlogvar_assign_value_double(t26, t30, 0);
    goto LAB30;

LAB34:    *((unsigned int *)t65) = 1;
    goto LAB37;

LAB36:    t42 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB37;

LAB38:    t44 = (t1 + 7272);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t28 = *((double *)t46);
    t47 = (t1 + 7432);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t29 = *((double *)t49);
    t23 = (t28 > t29);
    *((unsigned int *)t66) = t23;
    t50 = (t66 + 4);
    *((unsigned int *)t50) = 0U;
    memset(t67, 0, 8);
    t51 = (t66 + 4);
    t24 = *((unsigned int *)t51);
    t25 = (~(t24));
    t68 = *((unsigned int *)t66);
    t69 = (t68 & t25);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t51) != 0)
        goto LAB43;

LAB44:    t72 = *((unsigned int *)t65);
    t73 = *((unsigned int *)t67);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t53 = (t65 + 4);
    t54 = (t67 + 4);
    t55 = (t71 + 4);
    t75 = *((unsigned int *)t53);
    t76 = *((unsigned int *)t54);
    t77 = (t75 | t76);
    *((unsigned int *)t55) = t77;
    t78 = *((unsigned int *)t55);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB40;

LAB41:    *((unsigned int *)t67) = 1;
    goto LAB44;

LAB43:    t52 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB44;

LAB45:    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t55);
    *((unsigned int *)t71) = (t80 | t81);
    t56 = (t65 + 4);
    t57 = (t67 + 4);
    t82 = *((unsigned int *)t56);
    t83 = (~(t82));
    t84 = *((unsigned int *)t65);
    t10 = (t84 & t83);
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (~(t10));
    t90 = (~(t88));
    t91 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t91 & t89);
    t92 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t92 & t90);
    goto LAB47;

LAB48:    xsi_set_current_line(288, ng0);

LAB51:    xsi_set_current_line(289, ng0);
    t60 = (t1 + 2792);
    t61 = (t60 + 56U);
    t63 = *((char **)t61);
    t98 = (t1 + 2952);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t1 + 6472);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = (t1 + 1912U);
    t105 = *((char **)t104);
    t104 = (t1 + 1872U);
    t107 = (t104 + 72U);
    t108 = *((char **)t107);
    t109 = (t1 + 1872U);
    t110 = (t109 + 48U);
    t111 = *((char **)t110);
    t112 = (t1 + 6472);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    xsi_vlog_generic_get_array_select_value(t106, 35, t105, t108, t111, 1, 1, t114, 32, 1);
    t115 = (t1 + 7112);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t30 = *((double *)t117);
    *((double *)t118) = t30;
    t119 = (t1 + 7272);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    t34 = *((double *)t121);
    *((double *)t122) = t34;
    t123 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng13, 7, t123, (char)119, t63, 16, (char)119, t100, 16, (char)119, t103, 32, (char)119, t106, 35, (char)114, t118, 64, (char)114, t122, 64);
    xsi_set_current_line(291, ng0);
    t4 = (t1 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t6, 32, t11, 32);
    t12 = (t1 + 3272);
    xsi_vlogvar_assign_value(t12, t31, 0, 0, 32);
    goto LAB50;

LAB52:    *((unsigned int *)t64) = 1;
    goto LAB55;

LAB54:    t26 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB55;

LAB56:    t33 = (t1 + 7592);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    t34 = *((double *)t36);
    t38 = (-(5.0000000000000000));
    t37 = (t1 + 7432);
    t42 = (t37 + 56U);
    t43 = *((char **)t42);
    t39 = *((double *)t43);
    t40 = (t38 * t39);
    t24 = (t34 < t40);
    *((unsigned int *)t65) = t24;
    t44 = (t65 + 4);
    *((unsigned int *)t44) = 0U;
    memset(t66, 0, 8);
    t45 = (t65 + 4);
    t25 = *((unsigned int *)t45);
    t68 = (~(t25));
    t69 = *((unsigned int *)t65);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t45) != 0)
        goto LAB61;

LAB62:    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t66);
    t75 = (t73 | t74);
    *((unsigned int *)t67) = t75;
    t47 = (t64 + 4);
    t48 = (t66 + 4);
    t49 = (t67 + 4);
    t76 = *((unsigned int *)t47);
    t77 = *((unsigned int *)t48);
    t78 = (t76 | t77);
    *((unsigned int *)t49) = t78;
    t79 = *((unsigned int *)t49);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB58;

LAB59:    *((unsigned int *)t66) = 1;
    goto LAB62;

LAB61:    t46 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB62;

LAB63:    t81 = *((unsigned int *)t67);
    t82 = *((unsigned int *)t49);
    *((unsigned int *)t67) = (t81 | t82);
    t50 = (t64 + 4);
    t51 = (t66 + 4);
    t83 = *((unsigned int *)t50);
    t84 = (~(t83));
    t85 = *((unsigned int *)t64);
    t10 = (t85 & t84);
    t86 = *((unsigned int *)t51);
    t87 = (~(t86));
    t89 = *((unsigned int *)t66);
    t88 = (t89 & t87);
    t90 = (~(t10));
    t91 = (~(t88));
    t92 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t92 & t90);
    t93 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t93 & t91);
    goto LAB65;

LAB66:    xsi_set_current_line(296, ng0);

LAB69:    xsi_set_current_line(297, ng0);
    t53 = (t1 + 7592);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t41 = *((double *)t55);
    *((double *)t71) = t41;
    t56 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t56, (char)114, t71, 64);
    xsi_set_current_line(298, ng0);
    t4 = (t1 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t6, 32, t11, 32);
    t12 = (t1 + 3272);
    xsi_vlogvar_assign_value(t12, t31, 0, 0, 32);
    goto LAB68;

}

static void Always_190_0(char *t0)
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

LAB0:    t1 = (t0 + 8512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 8320);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 2472);
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
    t24 = (t0 + 2472);
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

static void Always_194_1(char *t0)
{
    char t8[8];
    char t10[48];
    char t11[16];
    char t15[16];
    char t24[16];
    char t33[16];
    char t42[16];
    char t55[8];
    char t56[8];
    char t57[8];
    char t58[8];
    char t68[8];
    char t69[8];
    char t70[8];
    char t71[8];
    char t72[8];
    char t78[8];
    char t122[48];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;

LAB0:    t1 = (t0 + 8760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 9576);
    *((int *)t2) = 1;
    t3 = (t0 + 8792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(194, ng0);

LAB5:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 12448);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    memcpy(t8, t7, 8);
    t9 = (t0 + 3912);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 1872U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 1872U);
    t7 = (t6 + 48U);
    t9 = *((char **)t7);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t11, 35, t3, t5, t9, 1, 1, t12, 32, 1);
    t13 = (t0 + 1912U);
    t14 = *((char **)t13);
    t13 = (t0 + 1872U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1872U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t15, 35, t14, t17, t20, 1, 1, t21, 32, 1);
    t22 = (t0 + 1912U);
    t23 = *((char **)t22);
    t22 = (t0 + 1872U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 1872U);
    t28 = (t27 + 48U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t24, 35, t23, t26, t29, 1, 1, t30, 32, 1);
    t31 = (t0 + 1912U);
    t32 = *((char **)t31);
    t31 = (t0 + 1872U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1872U);
    t37 = (t36 + 48U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t33, 35, t32, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t0 + 1912U);
    t41 = *((char **)t40);
    t40 = (t0 + 1872U);
    t43 = (t40 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 1872U);
    t46 = (t45 + 48U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t42, 35, t41, t44, t47, 1, 1, t48, 32, 1);
    xsi_vlogtype_concat(t10, 175, 175, 5U, t42, 35, t33, 35, t24, 35, t15, 35, t11, 35);
    t49 = (t0 + 4392);
    xsi_vlogvar_assign_value(t49, t10, 0, 0, 175);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t50 = *((unsigned int *)t5);
    t51 = (~(t50));
    t52 = *((unsigned int *)t4);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(240, ng0);

LAB107:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 8568);
    xsi_process_wait(t2, 100LL);
    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB6:    xsi_set_current_line(197, ng0);

LAB9:    xsi_set_current_line(198, ng0);
    t6 = (t0 + 12480);
    t7 = *((char **)t6);
    t9 = ((((char*)(t7))) + 40U);
    t12 = *((char **)t9);
    xsi_vlogtype_sign_extend(t8, 32, t12, 18);
    t9 = (t0 + 2792);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    xsi_vlogtype_sign_extend(t55, 32, t14, 16);
    t16 = ((char*)((ng15)));
    memset(t56, 0, 8);
    xsi_vlog_signed_multiply(t56, 32, t55, 32, t16, 32);
    memset(t57, 0, 8);
    xsi_vlog_signed_not_equal(t57, 32, t8, 32, t56, 32);
    memset(t58, 0, 8);
    t17 = (t57 + 4);
    t59 = *((unsigned int *)t17);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t17) != 0)
        goto LAB12;

LAB13:    t19 = (t58 + 4);
    t64 = *((unsigned int *)t58);
    t65 = (!(t64));
    t66 = *((unsigned int *)t19);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB14;

LAB15:    memcpy(t78, t58, 8);

LAB16:    t36 = (t78 + 4);
    t101 = *((unsigned int *)t36);
    t102 = (~(t101));
    t103 = *((unsigned int *)t78);
    t104 = (t103 & t102);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 12528);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t5);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t8);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t4, 32, t5, 32);
    memset(t55, 0, 8);
    t6 = (t8 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t8);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t6) != 0)
        goto LAB45;

LAB46:    t9 = (t55 + 4);
    t59 = *((unsigned int *)t55);
    t60 = *((unsigned int *)t9);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB47;

LAB48:    memcpy(t58, t55, 8);

LAB49:    t25 = (t58 + 4);
    t99 = *((unsigned int *)t25);
    t100 = (~(t99));
    t101 = *((unsigned int *)t58);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 12776);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t5);
    t53 = (t52 & t51);
    t54 = (t53 & 31U);
    if (t54 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t4) != 0)
        goto LAB70;

LAB71:    memset(t55, 0, 8);
    t7 = (t8 + 4);
    t59 = *((unsigned int *)t7);
    t60 = (~(t59));
    t61 = *((unsigned int *)t8);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB75:    t12 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t12);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB76;

LAB77:    memcpy(t58, t55, 8);

LAB78:    t26 = (t58 + 4);
    t104 = *((unsigned int *)t26);
    t105 = (~(t104));
    t109 = *((unsigned int *)t58);
    t110 = (t109 & t105);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5032);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 5032);
    t12 = (t9 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t11, 35, t4, t7, t13, 1, 1, t14, 32, 1);
    t16 = (t0 + 5032);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 5032);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 5032);
    t23 = (t22 + 64U);
    t25 = *((char **)t23);
    t26 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t15, 35, t18, t21, t25, 1, 1, t26, 32, 1);
    t27 = (t0 + 5032);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 5032);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t34 = (t0 + 5032);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t24, 35, t29, t32, t36, 1, 1, t37, 32, 1);
    t38 = (t0 + 5032);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t0 + 5032);
    t43 = (t41 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 5032);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t33, 35, t40, t44, t47, 1, 1, t48, 32, 1);
    t49 = (t0 + 5032);
    t112 = (t49 + 56U);
    t113 = *((char **)t112);
    t114 = (t0 + 5032);
    t115 = (t114 + 72U);
    t116 = *((char **)t115);
    t117 = (t0 + 5032);
    t118 = (t117 + 64U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t42, 35, t113, t116, t119, 1, 1, t120, 32, 1);
    xsi_vlogtype_concat(t10, 175, 175, 5U, t42, 35, t33, 35, t24, 35, t15, 35, t11, 35);
    t121 = (t0 + 5192);
    xsi_vlogvar_assign_value(t121, t10, 0, 0, 175);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 8568);
    xsi_process_wait(t2, 100LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB8:    goto LAB2;

LAB10:    *((unsigned int *)t58) = 1;
    goto LAB13;

LAB12:    t18 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB13;

LAB14:    t20 = (t0 + 12504);
    t21 = *((char **)t20);
    t22 = ((((char*)(t21))) + 40U);
    t23 = *((char **)t22);
    xsi_vlogtype_sign_extend(t68, 32, t23, 18);
    t22 = (t0 + 2952);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    xsi_vlogtype_sign_extend(t69, 32, t26, 16);
    t27 = ((char*)((ng15)));
    memset(t70, 0, 8);
    xsi_vlog_signed_multiply(t70, 32, t69, 32, t27, 32);
    memset(t71, 0, 8);
    xsi_vlog_signed_not_equal(t71, 32, t68, 32, t70, 32);
    memset(t72, 0, 8);
    t28 = (t71 + 4);
    t73 = *((unsigned int *)t28);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB20:    t79 = *((unsigned int *)t58);
    t80 = *((unsigned int *)t72);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t30 = (t58 + 4);
    t31 = (t72 + 4);
    t32 = (t78 + 4);
    t82 = *((unsigned int *)t30);
    t83 = *((unsigned int *)t31);
    t84 = (t82 | t83);
    *((unsigned int *)t32) = t84;
    t85 = *((unsigned int *)t32);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t72) = 1;
    goto LAB20;

LAB19:    t29 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t32);
    *((unsigned int *)t78) = (t87 | t88);
    t34 = (t58 + 4);
    t35 = (t72 + 4);
    t89 = *((unsigned int *)t34);
    t90 = (~(t89));
    t91 = *((unsigned int *)t58);
    t92 = (t91 & t90);
    t93 = *((unsigned int *)t35);
    t94 = (~(t93));
    t95 = *((unsigned int *)t72);
    t96 = (t95 & t94);
    t97 = (~(t92));
    t98 = (~(t96));
    t99 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t99 & t97);
    t100 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t100 & t98);
    goto LAB23;

LAB24:    xsi_set_current_line(199, ng0);

LAB27:    xsi_set_current_line(200, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB26;

LAB28:    xsi_set_current_line(203, ng0);
    t6 = (t0 + 4232);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t12 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t12, 32);
    t13 = (t0 + 4232);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 32);
    goto LAB30;

LAB31:    xsi_set_current_line(204, ng0);

LAB34:    xsi_set_current_line(205, ng0);
    t7 = (t0 + 12560);
    t9 = *((char **)t7);
    t12 = ((((char*)(t9))) + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 4712);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 18);
    xsi_set_current_line(206, ng0);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB35:    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t8);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB36;

LAB37:    goto LAB33;

LAB36:    xsi_set_current_line(206, ng0);

LAB38:    xsi_set_current_line(207, ng0);
    t7 = (t0 + 12592);
    t9 = *((char **)t7);
    t12 = ((((char*)(t9))) + 40U);
    t13 = *((char **)t12);
    t12 = (t0 + 12624);
    t14 = *((char **)t12);
    t16 = ((((char*)(t14))) + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 12656);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 48U);
    t21 = *((char **)t20);
    t22 = (t0 + 4072);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t55, 18, t13, t17, t21, 1, 1, t25, 32, 1);
    t26 = (t0 + 4552);
    t27 = (t0 + 4552);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 4552);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t34 = (t0 + 4072);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t56, t57, t29, t32, 1, 1, t36, 32, 1);
    t37 = (t56 + 4);
    t59 = *((unsigned int *)t37);
    t92 = (!(t59));
    t38 = (t57 + 4);
    t60 = *((unsigned int *)t38);
    t96 = (!(t60));
    t106 = (t92 && t96);
    if (t106 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 4552);
    t12 = (t9 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 4552);
    t16 = (t14 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 4072);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t11, 36, t7, t13, t17, 1, 1, t20, 32, 1);
    xsi_vlog_signed_multiply(t15, 36, t4, 18, t11, 36);
    t21 = (t0 + 4872);
    xsi_vlogvar_assign_value(t21, t15, 0, 0, 36);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t50 = *((unsigned int *)t4);
    t51 = (t50 >> 8);
    *((unsigned int *)t8) = t51;
    t52 = *((unsigned int *)t6);
    t53 = (t52 >> 8);
    *((unsigned int *)t5) = t53;
    t7 = (t4 + 8);
    t9 = (t4 + 12);
    t54 = *((unsigned int *)t7);
    t59 = (t54 << 24);
    t60 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t60 | t59);
    t61 = *((unsigned int *)t9);
    t62 = (t61 << 24);
    t63 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t63 | t62);
    t64 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t64 & 268435455U);
    t65 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t65 & 268435455U);
    t12 = ((char*)((ng19)));
    t13 = (t0 + 4872);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memset(t56, 0, 8);
    t17 = (t56 + 4);
    t18 = (t16 + 8);
    t19 = (t16 + 12);
    t66 = *((unsigned int *)t18);
    t67 = (t66 >> 3);
    t73 = (t67 & 1);
    *((unsigned int *)t56) = t73;
    t74 = *((unsigned int *)t19);
    t75 = (t74 >> 3);
    t76 = (t75 & 1);
    *((unsigned int *)t17) = t76;
    xsi_vlog_mul_concat(t55, 7, 1, t12, 1U, t56, 1);
    xsi_vlogtype_concat(t11, 35, 35, 2U, t55, 7, t8, 28);
    t20 = (t0 + 5032);
    t21 = (t0 + 5032);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t25 = (t0 + 5032);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 4072);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t57, t58, t23, t27, 1, 1, t30, 32, 1);
    t31 = (t57 + 4);
    t77 = *((unsigned int *)t31);
    t92 = (!(t77));
    t32 = (t58 + 4);
    t79 = *((unsigned int *)t32);
    t96 = (!(t79));
    t106 = (t92 && t96);
    if (t106 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 4072);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB35;

LAB39:    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t107 = (t61 - t62);
    t108 = (t107 + 1);
    xsi_vlogvar_assign_value(t26, t55, 0, *((unsigned int *)t57), t108);
    goto LAB40;

LAB41:    t80 = *((unsigned int *)t57);
    t81 = *((unsigned int *)t58);
    t107 = (t80 - t81);
    t108 = (t107 + 1);
    xsi_vlogvar_assign_value(t20, t11, 0, *((unsigned int *)t58), t108);
    goto LAB42;

LAB43:    *((unsigned int *)t55) = 1;
    goto LAB46;

LAB45:    t7 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB46;

LAB47:    t12 = (t0 + 3912);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng20)));
    memset(t56, 0, 8);
    xsi_vlog_signed_leq(t56, 32, t14, 32, t16, 32);
    memset(t57, 0, 8);
    t17 = (t56 + 4);
    t62 = *((unsigned int *)t17);
    t63 = (~(t62));
    t64 = *((unsigned int *)t56);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t17) != 0)
        goto LAB52;

LAB53:    t67 = *((unsigned int *)t55);
    t73 = *((unsigned int *)t57);
    t74 = (t67 & t73);
    *((unsigned int *)t58) = t74;
    t19 = (t55 + 4);
    t20 = (t57 + 4);
    t21 = (t58 + 4);
    t75 = *((unsigned int *)t19);
    t76 = *((unsigned int *)t20);
    t77 = (t75 | t76);
    *((unsigned int *)t21) = t77;
    t79 = *((unsigned int *)t21);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t57) = 1;
    goto LAB53;

LAB52:    t18 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB53;

LAB54:    t81 = *((unsigned int *)t58);
    t82 = *((unsigned int *)t21);
    *((unsigned int *)t58) = (t81 | t82);
    t22 = (t55 + 4);
    t23 = (t57 + 4);
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t22);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t88 = (~(t87));
    t89 = *((unsigned int *)t23);
    t90 = (~(t89));
    t92 = (t84 & t86);
    t96 = (t88 & t90);
    t91 = (~(t92));
    t93 = (~(t96));
    t94 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t94 & t91);
    t95 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t95 & t93);
    t97 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t97 & t91);
    t98 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t98 & t93);
    goto LAB56;

LAB57:    xsi_set_current_line(212, ng0);

LAB60:    xsi_set_current_line(213, ng0);
    xsi_set_current_line(213, ng0);
    t26 = ((char*)((ng10)));
    t27 = (t0 + 4072);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 32);

LAB61:    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t8);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB62;

LAB63:    goto LAB59;

LAB62:    xsi_set_current_line(214, ng0);
    t7 = (t0 + 4552);
    t9 = (t7 + 56U);
    t12 = *((char **)t9);
    t13 = (t0 + 4552);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 4552);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 4072);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t55, 18, t12, t16, t19, 1, 1, t22, 32, 1);
    t23 = (t0 + 12688);
    t25 = *((char **)t23);
    t26 = ((((char*)(t25))) + 40U);
    t27 = *((char **)t26);
    t26 = (t0 + 12720);
    t28 = *((char **)t26);
    t29 = ((((char*)(t28))) + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 12752);
    t32 = *((char **)t31);
    t34 = ((((char*)(t32))) + 48U);
    t35 = *((char **)t34);
    t36 = (t0 + 4072);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t56, 18, t27, t30, t35, 1, 1, t38, 32, 1);
    memset(t57, 0, 8);
    xsi_vlog_signed_case_noteq(t57, 18, t55, 18, t56, 18);
    t39 = (t57 + 4);
    t59 = *((unsigned int *)t39);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 4072);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB61;

LAB64:    xsi_set_current_line(214, ng0);

LAB67:    xsi_set_current_line(215, ng0);
    t40 = (t0 + 3912);
    t41 = (t40 + 56U);
    t43 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)119, t43, 32);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB66;

LAB68:    *((unsigned int *)t8) = 1;
    goto LAB71;

LAB70:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t55) = 1;
    goto LAB75;

LAB74:    t9 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB75;

LAB76:    t13 = (t0 + 3912);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng1)));
    memset(t56, 0, 8);
    xsi_vlog_signed_not_equal(t56, 32, t16, 32, t17, 32);
    memset(t57, 0, 8);
    t18 = (t56 + 4);
    t67 = *((unsigned int *)t18);
    t73 = (~(t67));
    t74 = *((unsigned int *)t56);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t18) != 0)
        goto LAB81;

LAB82:    t77 = *((unsigned int *)t55);
    t79 = *((unsigned int *)t57);
    t80 = (t77 & t79);
    *((unsigned int *)t58) = t80;
    t20 = (t55 + 4);
    t21 = (t57 + 4);
    t22 = (t58 + 4);
    t81 = *((unsigned int *)t20);
    t82 = *((unsigned int *)t21);
    t83 = (t81 | t82);
    *((unsigned int *)t22) = t83;
    t84 = *((unsigned int *)t22);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB78;

LAB79:    *((unsigned int *)t57) = 1;
    goto LAB82;

LAB81:    t19 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB82;

LAB83:    t86 = *((unsigned int *)t58);
    t87 = *((unsigned int *)t22);
    *((unsigned int *)t58) = (t86 | t87);
    t23 = (t55 + 4);
    t25 = (t57 + 4);
    t88 = *((unsigned int *)t55);
    t89 = (~(t88));
    t90 = *((unsigned int *)t23);
    t91 = (~(t90));
    t93 = *((unsigned int *)t57);
    t94 = (~(t93));
    t95 = *((unsigned int *)t25);
    t97 = (~(t95));
    t92 = (t89 & t91);
    t96 = (t94 & t97);
    t98 = (~(t92));
    t99 = (~(t96));
    t100 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t100 & t98);
    t101 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t101 & t99);
    t102 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t102 & t98);
    t103 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t103 & t99);
    goto LAB85;

LAB86:    xsi_set_current_line(219, ng0);

LAB89:    xsi_set_current_line(220, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB88;

LAB90:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t8);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 1872U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 1872U);
    t7 = (t6 + 48U);
    t9 = *((char **)t7);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t11, 35, t3, t5, t9, 1, 1, t12, 32, 1);
    t13 = (t0 + 1912U);
    t14 = *((char **)t13);
    t13 = (t0 + 1872U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1872U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t15, 35, t14, t17, t20, 1, 1, t21, 32, 1);
    t22 = (t0 + 1912U);
    t23 = *((char **)t22);
    t22 = (t0 + 1872U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 1872U);
    t28 = (t27 + 48U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t24, 35, t23, t26, t29, 1, 1, t30, 32, 1);
    t31 = (t0 + 1912U);
    t32 = *((char **)t31);
    t31 = (t0 + 1872U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1872U);
    t37 = (t36 + 48U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t33, 35, t32, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t0 + 1912U);
    t41 = *((char **)t40);
    t40 = (t0 + 1872U);
    t43 = (t40 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 1872U);
    t46 = (t45 + 48U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t42, 35, t41, t44, t47, 1, 1, t48, 32, 1);
    xsi_vlogtype_concat(t10, 175, 175, 5U, t42, 35, t33, 35, t24, 35, t15, 35, t11, 35);
    t49 = (t0 + 4392);
    t112 = (t49 + 56U);
    t113 = *((char **)t112);
    xsi_vlog_unsigned_case_noteq(t122, 175, t10, 175, t113, 175);
    t114 = (t122 + 4);
    t50 = *((unsigned int *)t114);
    t51 = (~(t50));
    t52 = *((unsigned int *)t122);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB99;

LAB100:
LAB101:
LAB93:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 1872U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 1872U);
    t7 = (t6 + 48U);
    t9 = *((char **)t7);
    t12 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t15, 35, t3, t5, t9, 1, 1, t12, 32, 1);
    t13 = ((char*)((ng26)));
    xsi_vlog_signed_arith_rshift(t24, 35, t15, 35, t13, 32);
    t14 = (t0 + 5352);
    xsi_vlogvar_assign_value(t14, t24, 0, 0, 16);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 5352);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_case_noteq(t8, 16, t3, 16, t5, 16);
    t6 = (t8 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t8);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB103;

LAB104:
LAB105:    goto LAB8;

LAB91:    xsi_set_current_line(226, ng0);

LAB94:    xsi_set_current_line(227, ng0);
    t7 = (t0 + 1912U);
    t9 = *((char **)t7);
    t7 = (t0 + 1872U);
    t12 = (t7 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 1872U);
    t16 = (t14 + 48U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t11, 35, t9, t13, t17, 1, 1, t18, 32, 1);
    t19 = (t0 + 1912U);
    t20 = *((char **)t19);
    t19 = (t0 + 1872U);
    t21 = (t19 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 1872U);
    t25 = (t23 + 48U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t15, 35, t20, t22, t26, 1, 1, t27, 32, 1);
    t28 = (t0 + 1912U);
    t29 = *((char **)t28);
    t28 = (t0 + 1872U);
    t30 = (t28 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 1872U);
    t34 = (t32 + 48U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t24, 35, t29, t31, t35, 1, 1, t36, 32, 1);
    t37 = (t0 + 1912U);
    t38 = *((char **)t37);
    t37 = (t0 + 1872U);
    t39 = (t37 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 1872U);
    t43 = (t41 + 48U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t33, 35, t38, t40, t44, 1, 1, t45, 32, 1);
    t46 = (t0 + 1912U);
    t47 = *((char **)t46);
    t46 = (t0 + 1872U);
    t48 = (t46 + 72U);
    t49 = *((char **)t48);
    t112 = (t0 + 1872U);
    t113 = (t112 + 48U);
    t114 = *((char **)t113);
    t115 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t42, 35, t47, t49, t114, 1, 1, t115, 32, 1);
    xsi_vlogtype_concat(t10, 175, 175, 5U, t42, 35, t33, 35, t24, 35, t15, 35, t11, 35);
    t116 = (t0 + 5192);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    xsi_vlog_unsigned_case_noteq(t122, 175, t10, 175, t118, 175);
    t119 = (t122 + 4);
    t59 = *((unsigned int *)t119);
    t60 = (~(t59));
    t61 = *((unsigned int *)t122);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB95;

LAB96:
LAB97:    goto LAB93;

LAB95:    xsi_set_current_line(227, ng0);

LAB98:    xsi_set_current_line(228, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB97;

LAB99:    xsi_set_current_line(231, ng0);

LAB102:    xsi_set_current_line(232, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB101;

LAB103:    xsi_set_current_line(236, ng0);

LAB106:    xsi_set_current_line(237, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB105;

LAB108:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 1872U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 1872U);
    t7 = (t6 + 48U);
    t9 = *((char **)t7);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t11, 35, t3, t5, t9, 1, 1, t12, 32, 1);
    t13 = (t0 + 1912U);
    t14 = *((char **)t13);
    t13 = (t0 + 1872U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1872U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t15, 35, t14, t17, t20, 1, 1, t21, 32, 1);
    t22 = (t0 + 1912U);
    t23 = *((char **)t22);
    t22 = (t0 + 1872U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 1872U);
    t28 = (t27 + 48U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t24, 35, t23, t26, t29, 1, 1, t30, 32, 1);
    t31 = (t0 + 1912U);
    t32 = *((char **)t31);
    t31 = (t0 + 1872U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1872U);
    t37 = (t36 + 48U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t33, 35, t32, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t0 + 1912U);
    t41 = *((char **)t40);
    t40 = (t0 + 1872U);
    t43 = (t40 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 1872U);
    t46 = (t45 + 48U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t42, 35, t41, t44, t47, 1, 1, t48, 32, 1);
    xsi_vlogtype_concat(t10, 175, 175, 5U, t42, 35, t33, 35, t24, 35, t15, 35, t11, 35);
    t49 = ((char*)((ng28)));
    xsi_vlog_unsigned_case_noteq(t122, 175, t10, 175, t49, 175);
    t112 = (t122 + 4);
    t50 = *((unsigned int *)t112);
    t51 = (~(t50));
    t52 = *((unsigned int *)t122);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB109;

LAB110:
LAB111:    goto LAB8;

LAB109:    xsi_set_current_line(242, ng0);

LAB112:    xsi_set_current_line(243, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3272);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB111;

}

static void Initial_303_2(char *t0)
{
    char t21[8];
    char t24[8];
    char t25[8];
    char t33[8];
    char t34[48];
    char t35[16];
    char t36[16];
    char t40[16];
    char t49[16];
    char t58[16];
    char t66[48];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;

LAB0:    t1 = (t0 + 9008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(303, ng0);

LAB4:    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 12784);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 12784);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB11:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB13:    if (t7 != 0)
        goto LAB14;

LAB9:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB10:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(307, ng0);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng31)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 32, t2, 32);
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 32);

LAB15:    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng31)));
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t8, 32, t9, 32);
    t10 = (t21 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t21);
    t22 = (t6 & t5);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(313, ng0);
    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng33)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 32, t2, 32);
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 32);

LAB25:    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng33)));
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t8, 32, t9, 32);
    t10 = (t21 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t21);
    t22 = (t6 & t5);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB37:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB39:    if (t7 != 0)
        goto LAB40;

LAB35:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB36:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng37)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 16, t2, 16);
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 16);
    xsi_set_current_line(321, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB43:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB45:    if (t7 != 0)
        goto LAB46;

LAB41:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB42:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(323, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB49:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB51:    if (t7 != 0)
        goto LAB52;

LAB47:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB48:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB55:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB57:    if (t7 != 0)
        goto LAB58;

LAB53:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB54:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng39)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(331, ng0);
    t2 = ((char*)((ng40)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 16, t2, 16);
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 16);
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng40)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 16, t2, 16);
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 16);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB61:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB63:    if (t7 != 0)
        goto LAB64;

LAB59:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB60:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB67:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB69:    if (t7 != 0)
        goto LAB70;

LAB65:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB66:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng30)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 16, t2, 16);
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 16);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng30)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 16, t2, 16);
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 16);
    xsi_set_current_line(339, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB73:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB75:    if (t7 != 0)
        goto LAB76;

LAB71:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB72:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB79:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB81:    if (t7 != 0)
        goto LAB82;

LAB77:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB78:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(345, ng0);
    xsi_set_current_line(345, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB83:    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng42)));
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t8, 32, t9, 32);
    t10 = (t21 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t21);
    t22 = (t6 & t5);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB116:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB118:    if (t7 != 0)
        goto LAB119;

LAB114:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB115:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(352, ng0);
    t2 = (t0 + 8816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB120;

LAB1:    return;
LAB6:    xsi_set_current_line(304, ng0);
    t10 = (t0 + 9608);
    *((int *)t10) = 1;
    t11 = (t0 + 9040);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 12784);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB12:;
LAB14:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB11;
    goto LAB1;

LAB16:    xsi_set_current_line(307, ng0);

LAB18:    xsi_set_current_line(308, ng0);
    t11 = (t0 + 3592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2792);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 16);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB21:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB23:    if (t7 != 0)
        goto LAB24;

LAB19:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB20:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(307, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng32)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t8, 32, t9, 32);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 32);
    goto LAB15;

LAB22:;
LAB24:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB21;
    goto LAB1;

LAB26:    xsi_set_current_line(313, ng0);

LAB28:    xsi_set_current_line(314, ng0);
    t11 = (t0 + 3592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2792);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 16);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng34)));
    memset(t21, 0, 8);
    xsi_vlog_signed_unary_minus(t21, 16, t2, 16);
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t21, 0, 0, 16);
    xsi_set_current_line(316, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB31:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB33:    if (t7 != 0)
        goto LAB34;

LAB29:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB30:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(313, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng35)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t8, 32, t9, 32);
    t10 = (t0 + 3592);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 32);
    goto LAB25;

LAB32:;
LAB34:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB73;
    goto LAB1;

LAB80:;
LAB82:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB79;
    goto LAB1;

LAB84:    xsi_set_current_line(345, ng0);

LAB86:    xsi_set_current_line(346, ng0);
    t11 = (t0 + 9624);
    *((int *)t11) = 1;
    t12 = (t0 + 9040);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng43)));
    memset(t21, 0, 8);
    xsi_vlog_signed_multiply(t21, 32, t8, 32, t9, 32);
    t10 = (t0 + 2792);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 16);
    xsi_set_current_line(348, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng17)));
    memset(t25, 0, 8);
    xsi_vlog_signed_mod(t25, 32, t8, 32, t9, 32);
    memset(t24, 0, 8);
    t10 = (t25 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t25);
    t22 = (t6 & t5);
    t23 = (t22 & 4294967295U);
    if (t23 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t10) != 0)
        goto LAB90;

LAB91:    t12 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = *((unsigned int *)t12);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB92;

LAB93:    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t12) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t24) > 0)
        goto LAB98;

LAB99:    memcpy(t21, t33, 8);

LAB100:    t15 = (t0 + 2952);
    xsi_vlogvar_assign_value(t15, t21, 0, 0, 16);
    xsi_set_current_line(349, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng16)));
    memset(t25, 0, 8);
    xsi_vlog_signed_mod(t25, 32, t8, 32, t9, 32);
    memset(t24, 0, 8);
    t10 = (t25 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t25);
    t22 = (t6 & t5);
    t23 = (t22 & 4294967295U);
    if (t23 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t10) != 0)
        goto LAB103;

LAB104:    t12 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = *((unsigned int *)t12);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB105;

LAB106:    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t12) > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t24) > 0)
        goto LAB111;

LAB112:    memcpy(t21, t14, 8);

LAB113:    t15 = (t0 + 3112);
    xsi_vlogvar_assign_value(t15, t21, 0, 0, 16);
    xsi_set_current_line(345, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t8, 32, t9, 32);
    t10 = (t0 + 3752);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 32);
    goto LAB83;

LAB88:    *((unsigned int *)t24) = 1;
    goto LAB91;

LAB90:    t11 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB91;

LAB92:    t13 = ((char*)((ng44)));
    goto LAB93;

LAB94:    t14 = ((char*)((ng45)));
    memset(t33, 0, 8);
    xsi_vlog_signed_unary_minus(t33, 16, t14, 16);
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t21, 16, t13, 16, t33, 16);
    goto LAB100;

LAB98:    memcpy(t21, t13, 8);
    goto LAB100;

LAB101:    *((unsigned int *)t24) = 1;
    goto LAB104;

LAB103:    t11 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB104;

LAB105:    t13 = ((char*)((ng46)));
    goto LAB106;

LAB107:    t14 = ((char*)((ng47)));
    goto LAB108;

LAB109:    xsi_vlog_unsigned_bit_combine(t21, 16, t13, 16, t14, 16);
    goto LAB113;

LAB111:    memcpy(t21, t13, 8);
    goto LAB113;

LAB117:;
LAB119:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB116;
    goto LAB1;

LAB120:    xsi_set_current_line(352, ng0);
    t3 = ((char*)((ng38)));
    t8 = (t0 + 2632);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(353, ng0);
    t2 = (t0 + 8816);
    xsi_process_wait(t2, 100LL);
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB121:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 1872U);
    t8 = (t2 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1872U);
    t11 = (t10 + 48U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t35, 35, t3, t9, t12, 1, 1, t13, 32, 1);
    t14 = (t0 + 1912U);
    t15 = *((char **)t14);
    t14 = (t0 + 1872U);
    t16 = (t14 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1872U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t37 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t36, 35, t15, t17, t20, 1, 1, t37, 32, 1);
    t38 = (t0 + 1912U);
    t39 = *((char **)t38);
    t38 = (t0 + 1872U);
    t41 = (t38 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 1872U);
    t44 = (t43 + 48U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t40, 35, t39, t42, t45, 1, 1, t46, 32, 1);
    t47 = (t0 + 1912U);
    t48 = *((char **)t47);
    t47 = (t0 + 1872U);
    t50 = (t47 + 72U);
    t51 = *((char **)t50);
    t52 = (t0 + 1872U);
    t53 = (t52 + 48U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t49, 35, t48, t51, t54, 1, 1, t55, 32, 1);
    t56 = (t0 + 1912U);
    t57 = *((char **)t56);
    t56 = (t0 + 1872U);
    t59 = (t56 + 72U);
    t60 = *((char **)t59);
    t61 = (t0 + 1872U);
    t62 = (t61 + 48U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t58, 35, t57, t60, t63, 1, 1, t64, 32, 1);
    xsi_vlogtype_concat(t34, 175, 175, 5U, t58, 35, t49, 35, t40, 35, t36, 35, t35, 35);
    t65 = ((char*)((ng28)));
    xsi_vlog_unsigned_case_noteq(t66, 175, t34, 175, t65, 175);
    t67 = (t66 + 4);
    t4 = *((unsigned int *)t67);
    t5 = (~(t4));
    t6 = *((unsigned int *)t66);
    t22 = (t6 & t5);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB122;

LAB123:
LAB124:    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 12788);
    *((int *)t8) = t7;

LAB126:    t9 = (t0 + 12788);
    if (*((int *)t9) > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(359, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(360, ng0);
    t2 = (t0 + 8816);
    t3 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB132:    t9 = (t0 + 8912);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t7 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB134:    if (t7 != 0)
        goto LAB135;

LAB130:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB131:    t17 = (t0 + 8912);
    t18 = *((char **)t17);
    t17 = (t0 + 1280);
    t19 = (t0 + 8816);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(361, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng20)));
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t8, 32, t9, 32);
    t10 = (t21 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t21);
    t22 = (t6 & t5);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB136;

LAB137:
LAB138:    xsi_set_current_line(364, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng10)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t8, 32, t9, 32);
    t10 = (t21 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t21);
    t22 = (t6 & t5);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(367, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng51, 2, t0, (char)119, t8, 32);

LAB142:    xsi_set_current_line(368, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB122:    xsi_set_current_line(354, ng0);

LAB125:    xsi_set_current_line(355, ng0);
    xsi_vlogfile_write(1, 0, 0, ng48, 1, t0);
    xsi_set_current_line(355, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t8, 32, t9, 32);
    t10 = (t0 + 3272);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 32);
    goto LAB124;

LAB127:    xsi_set_current_line(357, ng0);
    t10 = (t0 + 9640);
    *((int *)t10) = 1;
    t11 = (t0 + 9040);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB129:    t2 = (t0 + 12788);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB126;

LAB133:;
LAB135:    t9 = (t0 + 9008U);
    *((char **)t9) = &&LAB132;
    goto LAB1;

LAB136:    xsi_set_current_line(361, ng0);

LAB139:    xsi_set_current_line(362, ng0);
    xsi_vlogfile_write(1, 0, 0, ng49, 1, t0);
    xsi_set_current_line(362, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t8, 32, t9, 32);
    t10 = (t0 + 3272);
    xsi_vlogvar_assign_value(t10, t21, 0, 0, 32);
    goto LAB138;

LAB140:    xsi_set_current_line(365, ng0);
    t11 = (t0 + 3432);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng50, 2, t0, (char)119, t13, 32);
    goto LAB142;

}

static void Initial_370_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 9256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(370, ng0);

LAB4:    xsi_set_current_line(371, ng0);
    t2 = (t0 + 9064);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(372, ng0);
    xsi_vlogfile_write(1, 0, 0, ng52, 1, t0);
    xsi_set_current_line(373, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001491399987_2130699826_init()
{
	static char *pe[] = {(void *)Always_190_0,(void *)Always_194_1,(void *)Initial_303_2,(void *)Initial_370_3};
	static char *se[] = {(void *)sp_reference_sin,(void *)sp_settle_and_check};
	xsi_register_didat("work_m_00000000001491399987_2130699826", "isim/test.exe.sim/work/m_00000000001491399987_2130699826.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
