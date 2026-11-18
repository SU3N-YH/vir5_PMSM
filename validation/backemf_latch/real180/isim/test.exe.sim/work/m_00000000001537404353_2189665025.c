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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_backemf_latch.v";
static int ng1[] = {1, 0};
static int ng2[] = {12, 0};
static int ng3[] = {2, 0, 0, 0};
static int ng4[] = {1, 0, 0, 0};
static int ng5[] = {4, 0};
static int ng6[] = {0, 0};
static int ng7[] = {3, 0};
static int ng8[] = {5, 0};
static int ng9[] = {0, 0, 0, 0};
static int ng10[] = {15, 0};
static int ng11[] = {131071, 0};
static const char *ng12 = "FAIL: overlapping CORDIC call";
static int ng13[] = {180, 0};
static int ng14[] = {4718592, 0};
static const char *ng15 = "FAIL: input snapshot phase=%0d";
static const char *ng16 = "FAIL: angle changed during calculation phase=%0d";
static int ng17[] = {67108, 0};
static int ng18[] = {14, 0};
static int ng19[] = {262143, 0};
static int ng20[] = {131072, 0};
static int ng21[] = {262144, 0};
static int ng22[] = {4, 0, 0, 0};
static int ng23[] = {13, 0};
static int ng24[] = {2, 0};
static const char *ng25 = "FAIL: completion without a call";
static unsigned int ng26[] = {1U, 1U};
static const char *ng27 = "FAIL: sine phase=%0d angle=%0d difference=%f";
static unsigned int ng28[] = {131072U, 0U};
static unsigned int ng29[] = {131071U, 0U};
static int ng30[] = {8, 0};
static const char *ng31 = "FAIL: frame result phase=%0d count=%0d actual=%0d expected=%0d";
static const char *ng32 = "FAIL: frame sine changed outside snapshot phase=%0d";
static unsigned int ng33[] = {65535U, 0U, 0U, 0U};
static const char *ng34 = "FAIL: STM32 mapping";
static int ng35[] = {24, 0};
static int ng36[] = {2500, 0};
static unsigned int ng37[] = {7919U, 0U};
static int ng38[] = {1601, 0};
static int ng39[] = {800, 0};
static unsigned int ng40[] = {8192U, 0U};
static unsigned int ng41[] = {16384U, 0U};
static int ng42[] = {720, 0};
static int ng43[] = {36, 0};
static int ng44[] = {6, 0};
static unsigned int ng45[] = {32768U, 0U};
static unsigned int ng46[] = {32767U, 0U};
static unsigned int ng47[] = {4000U, 0U};
static unsigned int ng48[] = {24576U, 0U};
static int ng49[] = {400, 0};
static int ng50[] = {16384, 0};
static int ng51[] = {98304, 0};
static const char *ng52 = "FAIL: final angle was lost";
static int ng53[] = {8192, 0};
static int ng54[] = {50, 0};
static int ng55[] = {100, 0};
static const char *ng56 = "FAIL: insufficient calculation coverage";
static const char *ng57 = "PASS: BackEMF latch half_period=%f launches=%0d completions=%0d frames=%0d done_slots=%h";
static const char *ng58 = "FAIL: BackEMF latch errors=%0d";
static const char *ng59 = "FAIL: BackEMF latch timeout";



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
    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 7088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 7248);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(38, ng0);

LAB3:    t3 = (t1 + 7248);
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

LAB5:    xsi_set_current_line(39, ng0);

LAB6:    t3 = (t1 + 7248);
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

LAB8:    xsi_set_current_line(40, ng0);
    t3 = (t1 + 7248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 7408);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(41, ng0);
    t3 = (t1 + 7248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 7568);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 7728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB9:    t3 = (t1 + 7728);
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

LAB11:    xsi_set_current_line(46, ng0);
    t3 = (t1 + 7568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 6928);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(38, ng0);
    t16 = (t1 + 7248);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = *((double *)t18);
    t20 = (t19 - 6.2831853071795862);
    t21 = (t1 + 7248);
    xsi_vlogvar_assign_value_double(t21, t20, 0);
    goto LAB3;

LAB7:    xsi_set_current_line(39, ng0);
    t16 = (t1 + 7248);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = *((double *)t18);
    t22 = (t20 + 6.2831853071795862);
    t21 = (t1 + 7248);
    xsi_vlogvar_assign_value_double(t21, t22, 0);
    goto LAB6;

LAB10:    xsi_set_current_line(42, ng0);

LAB12:    xsi_set_current_line(43, ng0);
    t16 = (t1 + 7408);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t6 = *((double *)t18);
    t19 = (-(t6));
    t21 = (t1 + 7248);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t20 = *((double *)t24);
    t22 = (t19 * t20);
    t25 = (t1 + 7248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = *((double *)t27);
    t29 = (t22 * t28);
    t30 = ((char*)((ng3)));
    t31 = (t1 + 7728);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_signed_multiply(t34, 64, t30, 32, t33, 32);
    t35 = ((char*)((ng3)));
    t36 = (t1 + 7728);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_signed_multiply(t39, 64, t35, 32, t38, 32);
    t40 = ((char*)((ng4)));
    xsi_vlog_signed_add(t41, 64, t39, 64, t40, 32);
    xsi_vlog_signed_multiply(t42, 64, t34, 64, t41, 64);
    t43 = xsi_vlog_convert_to_real(t42, 32, 1);
    t44 = (t29 / t43);
    t45 = (t1 + 7408);
    xsi_vlogvar_assign_value_double(t45, t44, 0);
    xsi_set_current_line(44, ng0);
    t3 = (t1 + 7568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 7408);
    t10 = (t7 + 56U);
    t16 = *((char **)t10);
    t19 = *((double *)t16);
    t20 = (t6 + t19);
    t17 = (t1 + 7568);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(42, ng0);
    t3 = (t1 + 7728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t10 = (t1 + 7728);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB9;

}

static int sp_reset_during_calculation(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1416);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(153, ng0);

LAB5:    xsi_set_current_line(154, ng0);

LAB6:    t5 = (t1 + 12852);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB7:    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t19 = (t2 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    xsi_wp_set_status(t21, 0);
    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t22 = (t12 & t11);
    t6 = (t1 + 12860);
    *((int *)t6) = t22;

LAB9:    t7 = (t1 + 12860);
    if (*((int *)t7) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(156, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 2768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t22 = (t12 & t11);
    t6 = (t1 + 12864);
    *((int *)t6) = t22;

LAB13:    t7 = (t1 + 12864);
    if (*((int *)t7) > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

LAB10:    xsi_set_current_line(155, ng0);
    t8 = (t2 + 88U);
    t9 = *((char **)t8);
    t15 = (t9 + 16U);
    xsi_wp_set_status(t15, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB12:    t4 = (t1 + 12860);
    t22 = *((int *)t4);
    *((int *)t4) = (t22 - 1);
    goto LAB9;

LAB14:    xsi_set_current_line(157, ng0);
    t8 = (t2 + 88U);
    t9 = *((char **)t8);
    t15 = (t9 + 32U);
    xsi_wp_set_status(t15, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    t4 = (t1 + 12864);
    t22 = *((int *)t4);
    *((int *)t4) = (t22 - 1);
    goto LAB13;

}

static void Always_30_0(char *t0)
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

LAB0:    t1 = (t0 + 8648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 8456);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 2608);
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
    t24 = (t0 + 2608);
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

static void Always_50_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t24[8];
    char t41[8];
    char t47[8];
    char t84[8];
    char t86[8];
    char t97[16];
    char t98[16];
    char t115[8];
    char t119[8];
    char t121[8];
    char t124[8];
    char t165[8];
    char t166[16];
    char t167[16];
    char t168[16];
    char t169[16];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    double t107;
    double t108;
    double t109;
    double t110;
    double t111;
    double t112;
    double t113;
    double t114;
    char *t116;
    char *t117;
    char *t118;
    char *t120;
    char *t122;
    char *t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;

LAB0:    t1 = (t0 + 8896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 9712);
    *((int *)t2) = 1;
    t3 = (t0 + 8928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 2768);
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

LAB11:    xsi_set_current_line(63, ng0);

LAB26:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 12884);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t6 = *((char **)t5);
    memcpy(t4, t6, 8);
    t7 = (t0 + 4848);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    memset(t23, 0, 8);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t7) != 0)
        goto LAB29;

LAB30:    t14 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB31;

LAB32:    memcpy(t47, t23, 8);

LAB33:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 12932);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB80;

LAB81:
LAB82:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng24)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB91;

LAB92:
LAB93:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 13148);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t7) != 0)
        goto LAB101;

LAB102:    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB103;

LAB104:    memcpy(t41, t4, 8);

LAB105:    t59 = (t41 + 4);
    t72 = *((unsigned int *)t59);
    t73 = (~(t72));
    t75 = *((unsigned int *)t41);
    t76 = (t75 & t73);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB117;

LAB118:
LAB119:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB193;

LAB194:
LAB195:
LAB12:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB203;
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 5808);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 18);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 18);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(57, ng0);

LAB17:    xsi_set_current_line(58, ng0);
    t8 = ((char*)((ng6)));
    t14 = (t0 + 5328);
    t15 = (t0 + 5328);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t25 = (t0 + 5328);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 4688);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t23, t24, t22, t27, 1, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t16 = *((unsigned int *)t31);
    t32 = (!(t16));
    t33 = (t24 + 4);
    t17 = *((unsigned int *)t33);
    t34 = (!(t17));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5488);
    t5 = (t0 + 5488);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5488);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 4688);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t15, 1, 1, t25, 32, 1);
    t26 = (t4 + 4);
    t9 = *((unsigned int *)t26);
    t32 = (!(t9));
    t27 = (t23 + 4);
    t10 = *((unsigned int *)t27);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5648);
    t5 = (t0 + 5648);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 5648);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 4688);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t15, 1, 1, t25, 32, 1);
    t26 = (t4 + 4);
    t9 = *((unsigned int *)t26);
    t32 = (!(t9));
    t27 = (t23 + 4);
    t10 = *((unsigned int *)t27);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6128);
    t5 = (t0 + 6128);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 6128);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 4688);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t15, 1, 1, t25, 32, 1);
    t26 = (t4 + 4);
    t9 = *((unsigned int *)t26);
    t32 = (!(t9));
    t27 = (t23 + 4);
    t10 = *((unsigned int *)t27);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB14;

LAB18:    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t24);
    t36 = (t18 - t19);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t14, t8, 0, *((unsigned int *)t24), t37);
    goto LAB19;

LAB20:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t23), t37);
    goto LAB21;

LAB22:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t23), t37);
    goto LAB23;

LAB24:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t23), t37);
    goto LAB25;

LAB27:    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB29:    t8 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB30;

LAB31:    t15 = (t0 + 12908);
    t21 = *((char **)t15);
    t22 = ((((char*)(t21))) + 56U);
    t25 = *((char **)t22);
    memset(t24, 0, 8);
    t26 = (t25 + 4);
    t19 = *((unsigned int *)t26);
    t20 = (~(t19));
    t38 = *((unsigned int *)t25);
    t39 = (t38 & t20);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t26) == 0)
        goto LAB34;

LAB36:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;

LAB37:    memset(t41, 0, 8);
    t28 = (t24 + 4);
    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t28) != 0)
        goto LAB40;

LAB41:    t48 = *((unsigned int *)t23);
    t49 = *((unsigned int *)t41);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t30 = (t23 + 4);
    t31 = (t41 + 4);
    t33 = (t47 + 4);
    t51 = *((unsigned int *)t30);
    t52 = *((unsigned int *)t31);
    t53 = (t51 | t52);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t33);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB34:    *((unsigned int *)t24) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t41) = 1;
    goto LAB41;

LAB40:    t29 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB41;

LAB42:    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t47) = (t56 | t57);
    t58 = (t23 + 4);
    t59 = (t41 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t32 = (t61 & t63);
    t34 = (t65 & t67);
    t68 = (~(t32));
    t69 = (~(t34));
    t70 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t70 & t68);
    t71 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB44;

LAB45:    xsi_set_current_line(66, ng0);
    t80 = (t0 + 2928);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng5)));
    memset(t84, 0, 8);
    xsi_vlog_signed_multiply(t84, 32, t82, 16, t83, 32);
    t85 = ((char*)((ng11)));
    memset(t86, 0, 8);
    xsi_vlog_signed_bit_and(t86, 32, t84, 32, t85, 32);
    t87 = (t0 + 4048);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 32);
    goto LAB47;

LAB48:    xsi_set_current_line(67, ng0);

LAB51:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 5168);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3568);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB56:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB57;

LAB58:    goto LAB50;

LAB52:    xsi_set_current_line(68, ng0);

LAB55:    xsi_set_current_line(69, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB54;

LAB57:    xsi_set_current_line(75, ng0);

LAB59:    xsi_set_current_line(76, ng0);
    t8 = (t0 + 4208);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng13)));
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t15, 32, t21, 32);
    t22 = (t0 + 4688);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng14)));
    memset(t24, 0, 8);
    xsi_vlog_signed_multiply(t24, 32, t26, 32, t27, 32);
    memset(t41, 0, 8);
    xsi_vlog_signed_minus(t41, 32, t23, 32, t24, 32);
    t28 = (t0 + 5328);
    t29 = (t0 + 5328);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t33 = (t0 + 5328);
    t58 = (t33 + 64U);
    t59 = *((char **)t58);
    t74 = (t0 + 4688);
    t80 = (t74 + 56U);
    t81 = *((char **)t80);
    xsi_vlog_generic_convert_array_indices(t47, t84, t31, t59, 1, 1, t81, 32, 1);
    t82 = (t47 + 4);
    t16 = *((unsigned int *)t82);
    t32 = (!(t16));
    t83 = (t84 + 4);
    t17 = *((unsigned int *)t83);
    t34 = (!(t17));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 12964);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 12996);
    t8 = *((char **)t7);
    t14 = ((((char*)(t8))) + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 13028);
    t22 = *((char **)t21);
    t25 = ((((char*)(t22))) + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 4688);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t6, t15, t26, 1, 1, t29, 32, 1);
    t30 = (t0 + 5328);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t58 = (t0 + 5328);
    t59 = (t58 + 72U);
    t74 = *((char **)t59);
    t80 = (t0 + 5328);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t83 = (t0 + 4688);
    t85 = (t83 + 56U);
    t87 = *((char **)t85);
    xsi_vlog_generic_get_array_select_value(t23, 32, t33, t74, t82, 1, 1, t87, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_signed_case_noteq(t24, 32, t4, 32, t23, 32);
    t88 = (t24 + 4);
    t9 = *((unsigned int *)t88);
    t10 = (~(t9));
    t11 = *((unsigned int *)t24);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB56;

LAB60:    t18 = *((unsigned int *)t47);
    t19 = *((unsigned int *)t84);
    t36 = (t18 - t19);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t28, t41, 0, *((unsigned int *)t84), t37);
    goto LAB61;

LAB62:    xsi_set_current_line(77, ng0);

LAB65:    xsi_set_current_line(78, ng0);
    t89 = (t0 + 4688);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)119, t91, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB64;

LAB66:    xsi_set_current_line(83, ng0);

LAB69:    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 4688);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB70:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB71;

LAB72:    goto LAB68;

LAB71:    xsi_set_current_line(85, ng0);
    t8 = (t0 + 13060);
    t14 = *((char **)t8);
    t15 = ((((char*)(t14))) + 56U);
    t21 = *((char **)t15);
    t22 = (t0 + 13092);
    t25 = *((char **)t22);
    t26 = ((((char*)(t25))) + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 13124);
    t29 = *((char **)t28);
    t30 = ((((char*)(t29))) + 64U);
    t31 = *((char **)t30);
    t33 = (t0 + 4688);
    t58 = (t33 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_generic_get_array_select_value(t23, 32, t21, t27, t31, 1, 1, t59, 32, 1);
    t74 = (t0 + 5328);
    t80 = (t74 + 56U);
    t81 = *((char **)t80);
    t82 = (t0 + 5328);
    t83 = (t82 + 72U);
    t85 = *((char **)t83);
    t87 = (t0 + 5328);
    t88 = (t87 + 64U);
    t89 = *((char **)t88);
    t90 = (t0 + 4688);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    xsi_vlog_generic_get_array_select_value(t24, 32, t81, t85, t89, 1, 1, t92, 32, 1);
    memset(t41, 0, 8);
    xsi_vlog_signed_case_noteq(t41, 32, t23, 32, t24, 32);
    t93 = (t41 + 4);
    t16 = *((unsigned int *)t93);
    t17 = (~(t16));
    t18 = *((unsigned int *)t41);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB73;

LAB74:
LAB75:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB70;

LAB73:    xsi_set_current_line(85, ng0);

LAB76:    xsi_set_current_line(86, ng0);
    t94 = (t0 + 4688);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    xsi_vlogfile_write(1, 0, 0, ng16, 2, t0, (char)119, t96, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB75;

LAB77:    xsi_set_current_line(91, ng0);
    t8 = (t0 + 5968);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 5808);
    xsi_vlogvar_assign_value(t21, t15, 0, 0, 18);
    goto LAB79;

LAB80:    xsi_set_current_line(92, ng0);

LAB83:    xsi_set_current_line(93, ng0);
    t8 = (t0 + 3248);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng17)));
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t15, 16, t21, 32);
    t22 = ((char*)((ng18)));
    memset(t24, 0, 8);
    xsi_vlog_signed_arith_rshift(t24, 32, t23, 32, t22, 32);
    t25 = (t0 + 4368);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng19)));
    memset(t4, 0, 8);
    xsi_vlog_signed_bit_and(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4528);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng20)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB84;

LAB85:
LAB86:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t97, t5, 8);
    t6 = (t97 + 8);
    memset(t6, 0, 8);
    t11 = *((unsigned int *)t5);
    t12 = (t11 & 32768U);
    t9 = t12;
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t16 = (t13 & 32768U);
    t10 = t16;
    t17 = (t12 != 0);
    if (t17 == 1)
        goto LAB87;

LAB88:    t20 = (t16 != 0);
    if (t20 == 1)
        goto LAB89;

LAB90:    t21 = (t0 + 6288);
    xsi_vlogvar_assign_value(t21, t97, 0, 0, 36);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng22)));
    xsi_vlog_signed_multiply(t97, 36, t5, 36, t6, 32);
    t7 = (t0 + 4528);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    xsi_vlog_signed_multiply(t98, 36, t97, 36, t14, 32);
    t15 = (t0 + 6288);
    xsi_vlogvar_assign_value(t15, t98, 0, 0, 36);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng23)));
    xsi_vlog_signed_arith_rshift(t97, 36, t5, 36, t6, 32);
    t7 = (t0 + 5968);
    xsi_vlogvar_assign_value(t7, t97, 0, 0, 18);
    goto LAB82;

LAB84:    xsi_set_current_line(95, ng0);
    t8 = (t0 + 4528);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng21)));
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t15, 32, t21, 32);
    t22 = (t0 + 4528);
    xsi_vlogvar_assign_value(t22, t23, 0, 0, 32);
    goto LAB86;

LAB87:    t18 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t18 | 4294901760U);
    t8 = (t97 + 8);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t19 | 4294967295U);
    goto LAB88;

LAB89:    t14 = (t97 + 4);
    t38 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t38 | 4294901760U);
    t15 = (t97 + 12);
    t39 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t39 | 4294967295U);
    goto LAB90;

LAB91:    xsi_set_current_line(102, ng0);
    xsi_set_current_line(102, ng0);
    t8 = ((char*)((ng6)));
    t14 = (t0 + 4688);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);

LAB94:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB95;

LAB96:    goto LAB93;

LAB95:    xsi_set_current_line(103, ng0);
    t8 = (t0 + 5488);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 5488);
    t22 = (t21 + 72U);
    t25 = *((char **)t22);
    t26 = (t0 + 5488);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 4688);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_get_array_select_value(t23, 18, t15, t25, t28, 1, 1, t31, 32, 1);
    t33 = (t0 + 5648);
    t58 = (t0 + 5648);
    t59 = (t58 + 72U);
    t74 = *((char **)t59);
    t80 = (t0 + 5648);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t83 = (t0 + 4688);
    t85 = (t83 + 56U);
    t87 = *((char **)t85);
    xsi_vlog_generic_convert_array_indices(t24, t41, t74, t82, 1, 1, t87, 32, 1);
    t88 = (t24 + 4);
    t16 = *((unsigned int *)t88);
    t32 = (!(t16));
    t89 = (t41 + 4);
    t17 = *((unsigned int *)t89);
    t34 = (!(t17));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB97;

LAB98:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB94;

LAB97:    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t41);
    t36 = (t18 - t19);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t33, t23, 0, *((unsigned int *)t41), t37);
    goto LAB98;

LAB99:    *((unsigned int *)t4) = 1;
    goto LAB102;

LAB101:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB102;

LAB103:    t15 = (t0 + 13172);
    t21 = *((char **)t15);
    t22 = ((((char*)(t21))) + 40U);
    t25 = *((char **)t22);
    memset(t23, 0, 8);
    t22 = (t25 + 4);
    t19 = *((unsigned int *)t25);
    t20 = *((unsigned int *)t22);
    t38 = (t19 | t20);
    if (t38 != 31U)
        goto LAB107;

LAB106:    if (*((unsigned int *)t22) == 0)
        goto LAB108;

LAB109:    t26 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t26) = 1;

LAB107:    memset(t24, 0, 8);
    t27 = (t23 + 4);
    t39 = *((unsigned int *)t27);
    t40 = (~(t39));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t40);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t27) != 0)
        goto LAB112;

LAB113:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t24);
    t48 = (t45 & t46);
    *((unsigned int *)t41) = t48;
    t29 = (t4 + 4);
    t30 = (t24 + 4);
    t31 = (t41 + 4);
    t49 = *((unsigned int *)t29);
    t50 = *((unsigned int *)t30);
    t51 = (t49 | t50);
    *((unsigned int *)t31) = t51;
    t52 = *((unsigned int *)t31);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB108:    *((unsigned int *)t23) = 1;
    goto LAB107;

LAB110:    *((unsigned int *)t24) = 1;
    goto LAB113;

LAB112:    t28 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB113;

LAB114:    t54 = *((unsigned int *)t41);
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t41) = (t54 | t55);
    t33 = (t4 + 4);
    t58 = (t24 + 4);
    t56 = *((unsigned int *)t4);
    t57 = (~(t56));
    t60 = *((unsigned int *)t33);
    t61 = (~(t60));
    t62 = *((unsigned int *)t24);
    t63 = (~(t62));
    t64 = *((unsigned int *)t58);
    t65 = (~(t64));
    t32 = (t57 & t61);
    t34 = (t63 & t65);
    t66 = (~(t32));
    t67 = (~(t34));
    t68 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t68 & t66);
    t69 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t66);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    goto LAB116;

LAB117:    xsi_set_current_line(104, ng0);

LAB120:    xsi_set_current_line(105, ng0);
    t74 = (t0 + 5168);
    t80 = (t74 + 56U);
    t81 = *((char **)t80);
    memset(t47, 0, 8);
    t82 = (t81 + 4);
    t78 = *((unsigned int *)t82);
    t79 = (~(t78));
    t99 = *((unsigned int *)t81);
    t100 = (t99 & t79);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB124;

LAB122:    if (*((unsigned int *)t82) == 0)
        goto LAB121;

LAB123:    t83 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t83) = 1;

LAB124:    t85 = (t47 + 4);
    t102 = *((unsigned int *)t85);
    t103 = (~(t102));
    t104 = *((unsigned int *)t47);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB125;

LAB126:
LAB127:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3728);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 4848);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memset(t4, 0, 8);
    xsi_vlog_signed_lshift(t4, 32, t6, 32, t14, 32);
    memset(t23, 0, 8);
    xsi_vlog_signed_bit_or(t23, 32, t5, 32, t4, 32);
    t15 = (t0 + 5008);
    xsi_vlogvar_assign_value(t15, t23, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB129:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB130;

LAB131:    goto LAB119;

LAB121:    *((unsigned int *)t47) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(105, ng0);

LAB128:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB127;

LAB130:    xsi_set_current_line(112, ng0);

LAB132:    xsi_set_current_line(113, ng0);
    t8 = (t0 + 4208);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t107 = xsi_vlog_convert_to_real(t15, 32, 1);
    t108 = (t107 / 131072.00000000000);
    t21 = (t0 + 4688);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t109 = xsi_vlog_convert_to_real(t25, 32, 1);
    t110 = (t109 / 5.0000000000000000);
    t111 = (t108 - t110);
    t112 = (t111 * 6.2831853071795862);
    t26 = (t0 + 8704);
    t27 = (t0 + 984);
    t28 = xsi_create_subprogram_invocation(t26, 0, t0, t27, 0, 0);
    t29 = (t0 + 7088);
    xsi_vlogvar_assign_value_double(t29, t112, 0);

LAB133:    t30 = (t0 + 8800);
    t31 = *((char **)t30);
    t33 = (t31 + 80U);
    t58 = *((char **)t33);
    t59 = (t58 + 272U);
    t74 = *((char **)t59);
    t80 = (t74 + 0U);
    t81 = *((char **)t80);
    t32 = ((int  (*)(char *, char *))t81)(t0, t31);
    if (t32 != 0)
        goto LAB135;

LAB134:    t31 = (t0 + 8800);
    t82 = *((char **)t31);
    t31 = (t0 + 6928);
    t83 = (t31 + 56U);
    t85 = *((char **)t83);
    t113 = *((double *)t85);
    t87 = (t0 + 984);
    t88 = (t0 + 8704);
    t89 = 0;
    xsi_delete_subprogram_invocation(t87, t82, t0, t88, t89);
    t114 = (t113 * 131072.00000000000);
    t90 = (t0 + 6448);
    xsi_vlogvar_assign_value_double(t90, t114, 0);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 13204);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 13236);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t8);
    t15 = (t0 + 13268);
    t21 = *((char **)t15);
    t22 = ((((char*)(t21))) + 48U);
    t25 = *((char **)t22);
    t26 = (t0 + 4688);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t14, t25, 1, 1, t28, 32, 1);
    xsi_vlogtype_sign_extend(t97, 64, t4, 18);
    t107 = xsi_vlog_convert_to_real(t97, 18, 1);
    t29 = (t0 + 6448);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t108 = *((double *)t31);
    t109 = (t107 - t108);
    t33 = (t0 + 6608);
    xsi_vlogvar_assign_value_double(t33, t109, 0);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 13300);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 13332);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t8);
    t15 = (t0 + 13364);
    t21 = *((char **)t15);
    t22 = ((((char*)(t21))) + 48U);
    t25 = *((char **)t22);
    t26 = (t0 + 4688);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t23, 18, t6, t14, t25, 1, 1, t28, 32, 1);
    memset(t4, 0, 8);
    t29 = (t23 + 4);
    t9 = *((unsigned int *)t23);
    t10 = *((unsigned int *)t23);
    t10 = (t10 & 1);
    if (*((unsigned int *)t29) != 0)
        goto LAB136;

LAB137:    t11 = 1;

LAB139:    t12 = (t11 <= 17);
    if (t12 == 1)
        goto LAB140;

LAB141:    *((unsigned int *)t4) = t10;

LAB138:    t31 = ((char*)((ng26)));
    memset(t24, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t31))
        goto LAB145;

LAB143:    t33 = (t4 + 4);
    t58 = (t31 + 4);
    if (*((unsigned int *)t33) != *((unsigned int *)t58))
        goto LAB145;

LAB144:    *((unsigned int *)t24) = 1;

LAB145:    memset(t41, 0, 8);
    t59 = (t24 + 4);
    t16 = *((unsigned int *)t59);
    t17 = (~(t16));
    t18 = *((unsigned int *)t24);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t59) != 0)
        goto LAB148;

LAB149:    t80 = (t41 + 4);
    t38 = *((unsigned int *)t41);
    t39 = (!(t38));
    t40 = *((unsigned int *)t80);
    t42 = (t39 || t40);
    if (t42 > 0)
        goto LAB150;

LAB151:    memcpy(t86, t41, 8);

LAB152:    memset(t115, 0, 8);
    t94 = (t86 + 4);
    t72 = *((unsigned int *)t94);
    t73 = (~(t72));
    t75 = *((unsigned int *)t86);
    t76 = (t75 & t73);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t94) != 0)
        goto LAB162;

LAB163:    t96 = (t115 + 4);
    t78 = *((unsigned int *)t115);
    t79 = (!(t78));
    t99 = *((unsigned int *)t96);
    t100 = (t79 || t99);
    if (t100 > 0)
        goto LAB164;

LAB165:    memcpy(t124, t115, 8);

LAB166:    t150 = (t124 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t124);
    t154 = (t153 & t152);
    t155 = (t154 != 0);
    if (t155 > 0)
        goto LAB174;

LAB175:
LAB176:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 13396);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 13428);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 72U);
    t14 = *((char **)t8);
    t15 = (t0 + 13460);
    t21 = *((char **)t15);
    t22 = ((((char*)(t21))) + 48U);
    t25 = *((char **)t22);
    t26 = (t0 + 4688);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t24, 18, t6, t14, t25, 1, 1, t28, 32, 1);
    t29 = ((char*)((ng28)));
    memset(t41, 0, 8);
    xsi_vlog_signed_equal(t41, 18, t24, 18, t29, 18);
    memset(t23, 0, 8);
    t30 = (t41 + 4);
    t9 = *((unsigned int *)t30);
    t10 = (~(t9));
    t11 = *((unsigned int *)t41);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t30) != 0)
        goto LAB180;

LAB181:    t33 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t33);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB182;

LAB183:    t19 = *((unsigned int *)t23);
    t20 = (~(t19));
    t38 = *((unsigned int *)t33);
    t39 = (t20 || t38);
    if (t39 > 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t33) > 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t23) > 0)
        goto LAB188;

LAB189:    memcpy(t4, t47, 8);

LAB190:    t94 = (t0 + 5488);
    t95 = (t0 + 5488);
    t96 = (t95 + 72U);
    t116 = *((char **)t96);
    t117 = (t0 + 5488);
    t118 = (t117 + 64U);
    t120 = *((char **)t118);
    t122 = (t0 + 4688);
    t123 = (t122 + 56U);
    t128 = *((char **)t123);
    xsi_vlog_generic_convert_array_indices(t86, t115, t116, t120, 1, 1, t128, 32, 1);
    t129 = (t86 + 4);
    t40 = *((unsigned int *)t129);
    t32 = (!(t40));
    t130 = (t115 + 4);
    t42 = *((unsigned int *)t130);
    t34 = (!(t42));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB191;

LAB192:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB129;

LAB135:    t30 = (t0 + 8896U);
    *((char **)t30) = &&LAB133;
    goto LAB1;

LAB136:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB138;

LAB140:    t9 = (t9 >> 1);
    t13 = (t9 & 1);
    t10 = (t10 ^ t13);

LAB142:    t11 = (t11 + 1);
    goto LAB139;

LAB146:    *((unsigned int *)t41) = 1;
    goto LAB149;

LAB148:    t74 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB149;

LAB150:    t81 = (t0 + 6608);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t107 = *((double *)t83);
    t43 = (t107 > 32.000000000000000);
    *((unsigned int *)t47) = t43;
    t85 = (t47 + 4);
    *((unsigned int *)t85) = 0U;
    memset(t84, 0, 8);
    t87 = (t47 + 4);
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t46 = *((unsigned int *)t47);
    t48 = (t46 & t45);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t87) != 0)
        goto LAB155;

LAB156:    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t84);
    t52 = (t50 | t51);
    *((unsigned int *)t86) = t52;
    t89 = (t41 + 4);
    t90 = (t84 + 4);
    t91 = (t86 + 4);
    t53 = *((unsigned int *)t89);
    t54 = *((unsigned int *)t90);
    t55 = (t53 | t54);
    *((unsigned int *)t91) = t55;
    t56 = *((unsigned int *)t91);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB157;

LAB158:
LAB159:    goto LAB152;

LAB153:    *((unsigned int *)t84) = 1;
    goto LAB156;

LAB155:    t88 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB156;

LAB157:    t60 = *((unsigned int *)t86);
    t61 = *((unsigned int *)t91);
    *((unsigned int *)t86) = (t60 | t61);
    t92 = (t41 + 4);
    t93 = (t84 + 4);
    t62 = *((unsigned int *)t92);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t32 = (t64 & t63);
    t65 = *((unsigned int *)t93);
    t66 = (~(t65));
    t67 = *((unsigned int *)t84);
    t34 = (t67 & t66);
    t68 = (~(t32));
    t69 = (~(t34));
    t70 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t70 & t68);
    t71 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t71 & t69);
    goto LAB159;

LAB160:    *((unsigned int *)t115) = 1;
    goto LAB163;

LAB162:    t95 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB163;

LAB164:    t116 = (t0 + 6608);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t108 = *((double *)t118);
    t109 = (-(32.000000000000000));
    t101 = (t108 < t109);
    *((unsigned int *)t119) = t101;
    t120 = (t119 + 4);
    *((unsigned int *)t120) = 0U;
    memset(t121, 0, 8);
    t122 = (t119 + 4);
    t102 = *((unsigned int *)t122);
    t103 = (~(t102));
    t104 = *((unsigned int *)t119);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t122) != 0)
        goto LAB169;

LAB170:    t125 = *((unsigned int *)t115);
    t126 = *((unsigned int *)t121);
    t127 = (t125 | t126);
    *((unsigned int *)t124) = t127;
    t128 = (t115 + 4);
    t129 = (t121 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB171;

LAB172:
LAB173:    goto LAB166;

LAB167:    *((unsigned int *)t121) = 1;
    goto LAB170;

LAB169:    t123 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB170;

LAB171:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    t138 = (t115 + 4);
    t139 = (t121 + 4);
    t140 = *((unsigned int *)t138);
    t141 = (~(t140));
    t142 = *((unsigned int *)t115);
    t35 = (t142 & t141);
    t143 = *((unsigned int *)t139);
    t144 = (~(t143));
    t145 = *((unsigned int *)t121);
    t36 = (t145 & t144);
    t146 = (~(t35));
    t147 = (~(t36));
    t148 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t148 & t146);
    t149 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t149 & t147);
    goto LAB173;

LAB174:    xsi_set_current_line(117, ng0);

LAB177:    xsi_set_current_line(118, ng0);
    t156 = (t0 + 4688);
    t157 = (t156 + 56U);
    t158 = *((char **)t157);
    t159 = (t0 + 4208);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    t162 = (t0 + 6608);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    t110 = *((double *)t164);
    *((double *)t165) = t110;
    xsi_vlogfile_write(1, 0, 0, ng27, 4, t0, (char)119, t158, 32, (char)119, t161, 32, (char)114, t165, 64);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB176;

LAB178:    *((unsigned int *)t23) = 1;
    goto LAB181;

LAB180:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB181;

LAB182:    t58 = ((char*)((ng29)));
    goto LAB183;

LAB184:    t59 = (t0 + 13492);
    t74 = *((char **)t59);
    t80 = ((((char*)(t74))) + 40U);
    t81 = *((char **)t80);
    t80 = (t0 + 13524);
    t82 = *((char **)t80);
    t83 = ((((char*)(t82))) + 72U);
    t85 = *((char **)t83);
    t87 = (t0 + 13556);
    t88 = *((char **)t87);
    t89 = ((((char*)(t88))) + 48U);
    t90 = *((char **)t89);
    t91 = (t0 + 4688);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    xsi_vlog_generic_get_array_select_value(t84, 18, t81, t85, t90, 1, 1, t93, 32, 1);
    memset(t47, 0, 8);
    xsi_vlog_signed_unary_minus(t47, 18, t84, 18);
    goto LAB185;

LAB186:    xsi_vlog_unsigned_bit_combine(t4, 18, t58, 18, t47, 18);
    goto LAB190;

LAB188:    memcpy(t4, t58, 8);
    goto LAB190;

LAB191:    t43 = *((unsigned int *)t86);
    t44 = *((unsigned int *)t115);
    t36 = (t43 - t44);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t94, t4, 0, *((unsigned int *)t115), t37);
    goto LAB192;

LAB193:    xsi_set_current_line(126, ng0);

LAB196:    xsi_set_current_line(127, ng0);
    t8 = (t0 + 3888);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng1)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t15, 32, t21, 32);
    t22 = (t0 + 3888);
    xsi_vlogvar_assign_value(t22, t23, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB197:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB198;

LAB199:    goto LAB195;

LAB198:    xsi_set_current_line(128, ng0);

LAB200:    xsi_set_current_line(129, ng0);
    t8 = (t0 + 5808);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 5648);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t26 = (t0 + 5648);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 5648);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t33 = (t0 + 4688);
    t58 = (t33 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_generic_get_array_select_value(t97, 36, t25, t28, t31, 1, 1, t59, 32, 1);
    xsi_vlog_signed_multiply(t98, 36, t15, 18, t97, 36);
    t74 = (t0 + 6288);
    xsi_vlogvar_assign_value(t74, t98, 0, 0, 36);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 6288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng30)));
    xsi_vlog_signed_arith_rshift(t97, 36, t5, 36, t6, 32);
    t7 = (t0 + 6128);
    t8 = (t0 + 6128);
    t14 = (t8 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 6128);
    t22 = (t21 + 64U);
    t25 = *((char **)t22);
    t26 = (t0 + 4688);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t4, t23, t15, t25, 1, 1, t28, 32, 1);
    t29 = (t4 + 4);
    t9 = *((unsigned int *)t29);
    t32 = (!(t9));
    t30 = (t23 + 4);
    t10 = *((unsigned int *)t30);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB201;

LAB202:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB197;

LAB201:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t7, t97, 0, *((unsigned int *)t23), t37);
    goto LAB202;

LAB203:    xsi_set_current_line(135, ng0);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB204:    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB205;

LAB206:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2048U);
    t5 = *((char **)t2);
    t2 = (t0 + 2008U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2008U);
    t14 = (t8 + 48U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t97, 35, t5, t7, t15, 2, 1, t21, 32, 1);
    t22 = ((char*)((ng10)));
    xsi_vlog_unsigned_arith_rshift(t98, 35, t97, 35, t22, 32);
    t25 = ((char*)((ng33)));
    t9 = 0;

LAB219:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB220;

LAB221:    xsi_vlog_unsigned_case_noteq(t167, 35, t3, 16, t166, 35);
    t80 = (t167 + 4);
    t66 = *((unsigned int *)t80);
    t67 = (~(t66));
    t68 = *((unsigned int *)t167);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB222;

LAB223:
LAB224:    goto LAB2;

LAB205:    xsi_set_current_line(135, ng0);

LAB207:    xsi_set_current_line(136, ng0);
    t8 = (t0 + 2048U);
    t14 = *((char **)t8);
    t8 = (t0 + 2008U);
    t15 = (t8 + 72U);
    t21 = *((char **)t15);
    t22 = (t0 + 2008U);
    t25 = (t22 + 48U);
    t26 = *((char **)t25);
    t27 = (t0 + 4688);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t97, 35, t14, t21, t26, 1, 1, t29, 32, 1);
    t30 = (t0 + 6128);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t58 = (t0 + 6128);
    t59 = (t58 + 72U);
    t74 = *((char **)t59);
    t80 = (t0 + 6128);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t83 = (t0 + 4688);
    t85 = (t83 + 56U);
    t87 = *((char **)t85);
    xsi_vlog_generic_get_array_select_value(t98, 35, t33, t74, t82, 1, 1, t87, 32, 1);
    xsi_vlog_signed_case_noteq(t166, 35, t97, 35, t98, 35);
    t88 = (t166 + 4);
    t16 = *((unsigned int *)t88);
    t17 = (~(t16));
    t18 = *((unsigned int *)t166);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB208;

LAB209:
LAB210:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 13612);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 13644);
    t8 = *((char **)t7);
    t14 = ((((char*)(t8))) + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 13676);
    t22 = *((char **)t21);
    t25 = ((((char*)(t22))) + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 4688);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t15, t26, 1, 1, t29, 32, 1);
    t30 = (t0 + 5648);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t58 = (t0 + 5648);
    t59 = (t58 + 72U);
    t74 = *((char **)t59);
    t80 = (t0 + 5648);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t83 = (t0 + 4688);
    t85 = (t83 + 56U);
    t87 = *((char **)t85);
    xsi_vlog_generic_get_array_select_value(t23, 18, t33, t74, t82, 1, 1, t87, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_signed_case_noteq(t24, 18, t4, 18, t23, 18);
    t88 = (t24 + 4);
    t9 = *((unsigned int *)t88);
    t10 = (~(t9));
    t11 = *((unsigned int *)t24);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB212;

LAB213:
LAB214:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB204;

LAB208:    xsi_set_current_line(136, ng0);

LAB211:    xsi_set_current_line(137, ng0);
    t89 = (t0 + 4688);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t0 + 13580);
    t93 = *((char **)t92);
    t94 = ((((char*)(t93))) + 56U);
    t95 = *((char **)t94);
    t96 = (t0 + 2048U);
    t116 = *((char **)t96);
    t96 = (t0 + 2008U);
    t117 = (t96 + 72U);
    t118 = *((char **)t117);
    t120 = (t0 + 2008U);
    t122 = (t120 + 48U);
    t123 = *((char **)t122);
    t128 = (t0 + 4688);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    xsi_vlog_generic_get_array_select_value(t168, 35, t116, t118, t123, 1, 1, t130, 32, 1);
    t138 = (t0 + 6128);
    t139 = (t138 + 56U);
    t150 = *((char **)t139);
    t156 = (t0 + 6128);
    t157 = (t156 + 72U);
    t158 = *((char **)t157);
    t159 = (t0 + 6128);
    t160 = (t159 + 64U);
    t161 = *((char **)t160);
    t162 = (t0 + 4688);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    xsi_vlog_generic_get_array_select_value(t169, 35, t150, t158, t161, 1, 1, t164, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng31, 5, t0, (char)119, t91, 32, (char)118, t95, 5, (char)119, t168, 35, (char)119, t169, 35);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB210;

LAB212:    xsi_set_current_line(141, ng0);

LAB215:    xsi_set_current_line(142, ng0);
    t89 = (t0 + 4688);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)119, t91, 32);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB214;

LAB216:    t44 = (t9 * 8);
    t45 = *((unsigned int *)t28);
    t46 = *((unsigned int *)t31);
    *((unsigned int *)t28) = (t45 | t46);
    t33 = (t98 + t44);
    t48 = (t44 + 4);
    t58 = (t98 + t48);
    t59 = (t25 + t44);
    t49 = (t44 + 4);
    t74 = (t25 + t49);
    t50 = *((unsigned int *)t33);
    t51 = (~(t50));
    t52 = *((unsigned int *)t58);
    t53 = (~(t52));
    t54 = *((unsigned int *)t59);
    t55 = (~(t54));
    t56 = *((unsigned int *)t74);
    t57 = (~(t56));
    t32 = (t51 & t53);
    t34 = (t55 & t57);
    t60 = (~(t32));
    t61 = (~(t34));
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t60);
    t63 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t63 & t61);
    t64 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t64 & t60);
    t65 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t65 & t61);

LAB218:    t9 = (t9 + 1);
    goto LAB219;

LAB217:    goto LAB218;

LAB220:    t11 = (t9 * 8);
    t26 = (t98 + t11);
    t27 = (t25 + t11);
    t28 = (t166 + t11);
    t12 = *((unsigned int *)t26);
    t13 = *((unsigned int *)t27);
    t16 = (t12 & t13);
    *((unsigned int *)t28) = t16;
    t17 = (t9 * 8);
    t18 = (t17 + 4);
    t29 = (t98 + t18);
    t19 = (t17 + 4);
    t30 = (t25 + t19);
    t20 = (t17 + 4);
    t31 = (t166 + t20);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    *((unsigned int *)t31) = t40;
    t42 = *((unsigned int *)t31);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB216;
    else
        goto LAB217;

LAB222:    xsi_set_current_line(146, ng0);

LAB225:    xsi_set_current_line(147, ng0);
    xsi_vlogfile_write(1, 0, 0, ng34, 1, t0);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3408);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB224;

}

static void Initial_162_2(char *t0)
{
    char t12[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t23[8];
    char t37[8];
    char t62[8];
    char t79[8];
    char t80[8];
    char t88[8];
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
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    double t122;

LAB0:    t1 = (t0 + 9144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);

LAB4:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 13684);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 13684);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 13688);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 13688);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(167, ng0);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng36)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(174, ng0);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB31:    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng42)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9840);
    *((int *)t2) = 1;
    t3 = (t0 + 9176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB56;

LAB1:    return;
LAB6:    xsi_set_current_line(164, ng0);
    t10 = (t0 + 9776);
    *((int *)t10) = 1;
    t11 = (t0 + 9176);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 13684);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(166, ng0);
    t10 = (t0 + 9792);
    *((int *)t10) = 1;
    t11 = (t0 + 9176);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 13688);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

LAB14:    xsi_set_current_line(167, ng0);

LAB16:    xsi_set_current_line(168, ng0);
    t11 = (t0 + 9808);
    *((int *)t11) = 1;
    t15 = (t0 + 9176);
    *((char **)t15) = t11;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng37)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 16, t8, 16, t9, 16);
    t10 = (t0 + 2928);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 16);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng38)));
    memset(t12, 0, 8);
    xsi_vlog_signed_mod(t12, 32, t8, 32, t9, 32);
    t10 = ((char*)((ng39)));
    memset(t16, 0, 8);
    xsi_vlog_signed_minus(t16, 32, t12, 32, t10, 32);
    t11 = (t0 + 3088);
    xsi_vlogvar_assign_value(t11, t16, 0, 0, 16);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t17, 0, 8);
    xsi_vlog_signed_mod(t17, 32, t8, 32, t9, 32);
    t10 = ((char*)((ng6)));
    memset(t18, 0, 8);
    xsi_vlog_signed_equal(t18, 32, t17, 32, t10, 32);
    memset(t16, 0, 8);
    t11 = (t18 + 4);
    t4 = *((unsigned int *)t11);
    t5 = (~(t4));
    t6 = *((unsigned int *)t18);
    t13 = (t6 & t5);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB21:    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB22;

LAB23:    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t19) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t16) > 0)
        goto LAB28;

LAB29:    memcpy(t12, t29, 8);

LAB30:    t30 = (t0 + 3248);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 16);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 6768);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB13;

LAB18:    *((unsigned int *)t16) = 1;
    goto LAB21;

LAB20:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB22:    t24 = ((char*)((ng40)));
    memset(t23, 0, 8);
    xsi_vlog_signed_unary_minus(t23, 16, t24, 16);
    goto LAB23;

LAB24:    t29 = ((char*)((ng41)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t12, 16, t23, 16, t29, 16);
    goto LAB30;

LAB28:    memcpy(t12, t23, 8);
    goto LAB30;

LAB32:    xsi_set_current_line(174, ng0);

LAB34:    xsi_set_current_line(175, ng0);
    t11 = (t0 + 9824);
    *((int *)t11) = 1;
    t15 = (t0 + 9176);
    *((char **)t15) = t11;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng37)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 16, t8, 16, t9, 16);
    t10 = (t0 + 2928);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 16);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng43)));
    memset(t12, 0, 8);
    xsi_vlog_signed_divide(t12, 32, t8, 32, t9, 32);
    t10 = ((char*)((ng44)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t12, 32, t10, 32);

LAB36:    t11 = ((char*)((ng6)));
    t7 = xsi_vlog_signed_case_compare(t16, 32, t11, 32);
    if (t7 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng1)));
    t7 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t7 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng24)));
    t7 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t7 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng7)));
    t7 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t7 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng5)));
    t7 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t7 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng8)));
    t7 = xsi_vlog_signed_case_compare(t16, 32, t2, 32);
    if (t7 == 1)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 6768);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB31;

LAB37:    xsi_set_current_line(178, ng0);

LAB50:    xsi_set_current_line(178, ng0);
    t15 = ((char*)((ng45)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 16, t15, 16);
    t19 = (t0 + 3088);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 16);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng45)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 16, t2, 16);
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    goto LAB49;

LAB39:    xsi_set_current_line(179, ng0);

LAB51:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng46)));
    t8 = (t0 + 3088);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB49;

LAB41:    xsi_set_current_line(180, ng0);

LAB52:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng45)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 16, t3, 16);
    t8 = (t0 + 3088);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 16);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB49;

LAB43:    xsi_set_current_line(181, ng0);

LAB53:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng46)));
    t8 = (t0 + 3088);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng45)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 16, t2, 16);
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    goto LAB49;

LAB45:    xsi_set_current_line(182, ng0);

LAB54:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng47)));
    t8 = (t0 + 3088);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB49;

LAB47:    xsi_set_current_line(183, ng0);

LAB55:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng47)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 16, t3, 16);
    t8 = (t0 + 3088);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 16);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB49;

LAB56:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng48)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng50)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 13692);
    *((int *)t8) = t7;

LAB57:    t9 = (t0 + 13692);
    if (*((int *)t9) > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 4208);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng51)));
    memset(t12, 0, 8);
    xsi_vlog_signed_not_equal(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 8952);
    t3 = (t0 + 1416);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB67:    t9 = (t0 + 9048);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t15 = *((char **)t11);
    t19 = (t15 + 272U);
    t24 = *((char **)t19);
    t29 = (t24 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t0, t10);

LAB69:    if (t7 != 0)
        goto LAB70;

LAB65:    t10 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t10);

LAB66:    t31 = (t0 + 9048);
    t32 = *((char **)t31);
    t31 = (t0 + 1416);
    t33 = (t0 + 8952);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 13696);
    *((int *)t8) = t7;

LAB71:    t9 = (t0 + 13696);
    if (*((int *)t9) > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 9888);
    *((int *)t2) = 1;
    t3 = (t0 + 9176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB58:    xsi_set_current_line(189, ng0);
    t10 = (t0 + 9856);
    *((int *)t10) = 1;
    t11 = (t0 + 9176);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    t2 = (t0 + 13692);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB57;

LAB61:    xsi_set_current_line(190, ng0);

LAB64:    xsi_set_current_line(191, ng0);
    xsi_vlogfile_write(1, 0, 0, ng52, 1, t0);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 3408);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB63;

LAB68:;
LAB70:    t9 = (t0 + 9144U);
    *((char **)t9) = &&LAB67;
    goto LAB1;

LAB72:    xsi_set_current_line(195, ng0);
    t10 = (t0 + 9872);
    *((int *)t10) = 1;
    t11 = (t0 + 9176);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    t2 = (t0 + 13696);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB71;

LAB75:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng45)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 16, t2, 16);
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng49)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t2, 32);
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng53)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t2, 32);
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 13700);
    *((int *)t8) = t7;

LAB76:    t9 = (t0 + 13700);
    if (*((int *)t9) > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 8952);
    t3 = (t0 + 1416);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t8);

LAB82:    t9 = (t0 + 9048);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t15 = *((char **)t11);
    t19 = (t15 + 272U);
    t24 = *((char **)t19);
    t29 = (t24 + 0U);
    t30 = *((char **)t29);
    t7 = ((int  (*)(char *, char *))t30)(t0, t10);

LAB84:    if (t7 != 0)
        goto LAB85;

LAB80:    t10 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t10);

LAB81:    t31 = (t0 + 9048);
    t32 = *((char **)t31);
    t31 = (t0 + 1416);
    t33 = (t0 + 8952);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 13704);
    *((int *)t8) = t7;

LAB86:    t9 = (t0 + 13704);
    if (*((int *)t9) > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng54)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t8, 32, t9, 32);
    memset(t17, 0, 8);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t10) != 0)
        goto LAB92;

LAB93:    t15 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (!(t20));
    t22 = *((unsigned int *)t15);
    t25 = (t21 || t22);
    if (t25 > 0)
        goto LAB94;

LAB95:    memcpy(t37, t17, 8);

LAB96:    memset(t62, 0, 8);
    t63 = (t37 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t63) != 0)
        goto LAB106;

LAB107:    t70 = (t62 + 4);
    t71 = *((unsigned int *)t62);
    t72 = (!(t71));
    t73 = *((unsigned int *)t70);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB108;

LAB109:    memcpy(t88, t62, 8);

LAB110:    t116 = (t88 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t88);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB118;

LAB119:
LAB120:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng58, 2, t0, (char)119, t8, 32);

LAB124:    xsi_set_current_line(210, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB77:    xsi_set_current_line(198, ng0);
    t10 = (t0 + 9904);
    *((int *)t10) = 1;
    t11 = (t0 + 9176);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    t2 = (t0 + 13700);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB76;

LAB83:;
LAB85:    t9 = (t0 + 9144U);
    *((char **)t9) = &&LAB82;
    goto LAB1;

LAB87:    xsi_set_current_line(200, ng0);
    t10 = (t0 + 9920);
    *((int *)t10) = 1;
    t11 = (t0 + 9176);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    t2 = (t0 + 13704);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB86;

LAB90:    *((unsigned int *)t17) = 1;
    goto LAB93;

LAB92:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB93;

LAB94:    t19 = (t0 + 3728);
    t24 = (t19 + 56U);
    t29 = *((char **)t24);
    t30 = ((char*)((ng54)));
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t29, 32, t30, 32);
    memset(t23, 0, 8);
    t31 = (t18 + 4);
    t26 = *((unsigned int *)t31);
    t27 = (~(t26));
    t28 = *((unsigned int *)t18);
    t35 = (t28 & t27);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t31) != 0)
        goto LAB99;

LAB100:    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t23);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t33 = (t17 + 4);
    t34 = (t23 + 4);
    t41 = (t37 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB96;

LAB97:    *((unsigned int *)t23) = 1;
    goto LAB100;

LAB99:    t32 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB100;

LAB101:    t47 = *((unsigned int *)t37);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t37) = (t47 | t48);
    t49 = (t17 + 4);
    t50 = (t23 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t17);
    t7 = (t53 & t52);
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t23);
    t57 = (t56 & t55);
    t58 = (~(t7));
    t59 = (~(t57));
    t60 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t60 & t58);
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    goto LAB103;

LAB104:    *((unsigned int *)t62) = 1;
    goto LAB107;

LAB106:    t69 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB107;

LAB108:    t75 = (t0 + 3888);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng55)));
    memset(t79, 0, 8);
    xsi_vlog_signed_less(t79, 32, t77, 32, t78, 32);
    memset(t80, 0, 8);
    t81 = (t79 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t79);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t81) != 0)
        goto LAB113;

LAB114:    t89 = *((unsigned int *)t62);
    t90 = *((unsigned int *)t80);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = (t62 + 4);
    t93 = (t80 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB110;

LAB111:    *((unsigned int *)t80) = 1;
    goto LAB114;

LAB113:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB114;

LAB115:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t62 + 4);
    t103 = (t80 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (~(t104));
    t106 = *((unsigned int *)t62);
    t107 = (t106 & t105);
    t108 = *((unsigned int *)t103);
    t109 = (~(t108));
    t110 = *((unsigned int *)t80);
    t111 = (t110 & t109);
    t112 = (~(t107));
    t113 = (~(t111));
    t114 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t114 & t112);
    t115 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t115 & t113);
    goto LAB117;

LAB118:    xsi_set_current_line(201, ng0);

LAB121:    xsi_set_current_line(202, ng0);
    xsi_vlogfile_write(1, 0, 0, ng56, 1, t0);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 3408);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB120;

LAB122:    xsi_set_current_line(206, ng0);
    t11 = (t0 + 472);
    t15 = *((char **)t11);
    t122 = *((double *)t15);
    *((double *)t17) = t122;
    t11 = (t0 + 3568);
    t19 = (t11 + 56U);
    t24 = *((char **)t19);
    t29 = (t0 + 3728);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 3888);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t41 = (t0 + 5008);
    t49 = (t41 + 56U);
    t50 = *((char **)t49);
    xsi_vlogfile_write(1, 0, 0, ng57, 6, t0, (char)114, t17, 64, (char)119, t24, 32, (char)119, t31, 32, (char)119, t34, 32, (char)119, t50, 32);
    goto LAB124;

}

static void Initial_213_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(213, ng0);

LAB4:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 9200);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(215, ng0);
    xsi_vlogfile_write(1, 0, 0, ng59, 1, t0);
    xsi_set_current_line(216, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001537404353_2189665025_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_50_1,(void *)Initial_162_2,(void *)Initial_213_3};
	static char *se[] = {(void *)sp_reference_sin,(void *)sp_reset_during_calculation};
	xsi_register_didat("work_m_00000000001537404353_2189665025", "isim/test.exe.sim/work/m_00000000001537404353_2189665025.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
