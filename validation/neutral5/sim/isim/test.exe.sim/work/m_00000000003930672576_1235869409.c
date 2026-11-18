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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_neutral5.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {5, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {104858U, 0U, 0U, 0U};
static unsigned int ng6[] = {262144U, 0U, 0U, 0U};
static int ng7[] = {19, 0};
static unsigned int ng8[] = {4294967295U, 0U, 3U, 0U};
static unsigned int ng9[] = {0U, 0U, 4U, 0U};
static int ng10[] = {3, 0};
static int ng11[] = {2, 0};
static int ng12[] = {12, 0};
static int ng13[] = {11, 0};
static int ng14[] = {9, 0};
static int ng15[] = {32767, 0};
static int ng16[] = {32768, 0};
static const char *ng17 = "FAIL: clock %0d group %0d got %0d expected %0d";
static const char *ng18 = "FAIL: neutral pipeline/saturation at clock %0d";
static int ng19[] = {15, 0};
static int ng20[] = {24, 0};
static int ng21[] = {18000, 0};
static unsigned int ng22[] = {655360U, 0U, 0U, 0U};
static unsigned int ng23[] = {0U, 0U, 0U, 0U};
static int ng24[] = {4, 0};
static unsigned int ng25[] = {1U, 0U, 0U, 0U};
static int ng26[] = {6, 0};
static unsigned int ng27[] = {2U, 0U, 0U, 0U};
static int ng28[] = {7, 0};
static unsigned int ng29[] = {3U, 0U, 0U, 0U};
static int ng30[] = {8, 0};
static unsigned int ng31[] = {4U, 0U, 0U, 0U};
static unsigned int ng32[] = {4294867295U, 0U, 3U, 0U};
static int ng33[] = {10, 0};
static unsigned int ng34[] = {4294867296U, 0U, 3U, 0U};
static int ng35[] = {648, 0};
static int ng36[] = {24, 0, 0, 0};
static int ng37[] = {19, 0, 0, 0};
static unsigned int ng38[] = {0U, 0U, 2U, 0U};
static int ng39[] = {5001, 0};
static int ng40[] = {5004, 0};
static int ng41[] = {4400, 0};
static const char *ng42 = "PASS: five-phase averages, %0d captures, division5 Q19, wide sums, low-bit compensation, signed limits, D/E inputs, rounding, TDM, reset and saturation";
static const char *ng43 = "FAIL: %0d errors, %0d captures";



static int sp_average(char *t1, char *t2)
{
    char t7[8];
    char t17[16];
    char t21[16];
    char t32[8];
    char t36[8];
    char t37[16];
    int t0;
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
    char *t16;
    char *t18;
    char *t19;
    char *t20;
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
    char *t33;
    char *t34;
    char *t35;
    char *t38;

LAB0:    t0 = 1;
    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 5720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 5720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 5400);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    xsi_vlog_signed_multiply(t17, 64, t5, 64, t6, 64);
    t8 = ((char*)((ng6)));
    xsi_vlog_signed_add(t21, 64, t17, 64, t8, 64);
    t14 = ((char*)((ng7)));
    xsi_vlog_signed_arith_rshift(t37, 64, t21, 64, t14, 32);
    t15 = (t1 + 5560);
    xsi_vlogvar_assign_value(t15, t37, 0, 0, 64);
    xsi_set_current_line(38, ng0);
    t3 = (t1 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    xsi_vlog_signed_greater(t17, 64, t5, 64, t6, 64);
    t8 = (t17 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t3 = (t1 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng9)));
    xsi_vlog_signed_unary_minus(t17, 64, t6, 64);
    xsi_vlog_signed_less(t21, 64, t5, 64, t17, 64);
    t8 = (t21 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t21);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);
    t3 = (t1 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 5080);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 35);

LAB11:
LAB8:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(36, ng0);
    t14 = (t1 + 5400);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t1 + 2520);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t1 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t1 + 2520);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng3)));
    t29 = (t1 + 5240);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    xsi_vlog_signed_multiply(t32, 32, t28, 32, t31, 32);
    t33 = (t1 + 5720);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_signed_add(t36, 32, t32, 32, t35, 32);
    xsi_vlog_generic_get_array_select_value(t21, 35, t20, t24, t27, 1, 1, t36, 32, 1);
    xsi_vlogtype_sign_extend(t17, 64, t21, 35);
    xsi_vlog_signed_add(t37, 64, t16, 64, t17, 64);
    t38 = (t1 + 5400);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 64);
    xsi_set_current_line(35, ng0);
    t3 = (t1 + 5720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 5720);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

LAB6:    xsi_set_current_line(38, ng0);
    t14 = ((char*)((ng8)));
    t15 = (t1 + 5080);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 35);
    goto LAB8;

LAB9:    xsi_set_current_line(39, ng0);
    t14 = ((char*)((ng9)));
    xsi_vlog_signed_unary_minus(t37, 35, t14, 35);
    t15 = (t1 + 5080);
    xsi_vlogvar_assign_value(t15, t37, 0, 0, 35);
    goto LAB11;

}

static void Always_5_0(char *t0)
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

LAB0:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(5, ng0);
    t2 = (t0 + 6448);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(5, ng0);
    t4 = (t0 + 2200);
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
    t24 = (t0 + 2200);
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

static void Always_54_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t24[8];
    char t38[16];
    char t39[16];
    char t40[16];
    char t41[16];
    char t42[16];
    char t43[8];
    char t44[8];
    char t64[8];
    char t65[8];
    char t82[8];
    char t111[8];
    char t112[8];
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
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 6888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 7456);
    *((int *)t2) = 1;
    t3 = (t0 + 6920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 2360);
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

LAB22:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1480U);
    t7 = *((char **)t6);
    t6 = (t0 + 1440U);
    t8 = (t6 + 72U);
    t14 = *((char **)t8);
    t15 = (t0 + 1440U);
    t21 = (t15 + 48U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t39, 35, t7, t14, t22, 1, 1, t25, 32, 1);
    xsi_vlogtype_sign_extend(t38, 36, t39, 35);
    xsi_vlog_signed_minus(t40, 36, t5, 36, t38, 36);
    t26 = (t0 + 3160);
    xsi_vlogvar_assign_value(t26, t40, 0, 0, 35);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1440U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 1440U);
    t8 = (t7 + 48U);
    t14 = *((char **)t8);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t39, 35, t3, t6, t14, 1, 1, t15, 32, 1);
    xsi_vlogtype_sign_extend(t38, 36, t39, 35);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1440U);
    t25 = (t21 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 1440U);
    t28 = (t27 + 48U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t41, 35, t22, t26, t29, 1, 1, t30, 32, 1);
    xsi_vlogtype_sign_extend(t40, 36, t41, 35);
    xsi_vlog_signed_minus(t42, 36, t38, 36, t40, 36);
    t31 = (t0 + 3000);
    xsi_vlogvar_assign_value(t31, t42, 0, 0, 36);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB24;

LAB25:
LAB12:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng14)));
    xsi_vlog_signed_arith_rshift(t38, 35, t5, 35, t6, 32);
    t7 = (t0 + 3320);
    xsi_vlogvar_assign_value(t7, t38, 0, 0, 26);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng15)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t5, 26, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng16)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t6, 32);
    memset(t23, 0, 8);
    xsi_vlog_signed_less(t23, 32, t5, 26, t4, 32);
    t7 = (t23 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t23);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3480);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 16);

LAB60:
LAB57:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6696);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3640);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 36);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 35);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
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

LAB15:    xsi_set_current_line(59, ng0);

LAB17:    xsi_set_current_line(60, ng0);
    t8 = ((char*)((ng1)));
    t14 = (t0 + 2840);
    t15 = (t0 + 2840);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t25 = (t0 + 2840);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 4120);
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

LAB19:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    t5 = (t0 + 2680);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2680);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 4120);
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

LAB21:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4120);
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

LAB24:    xsi_set_current_line(68, ng0);

LAB26:    xsi_set_current_line(69, ng0);
    t8 = (t0 + 3640);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t15, 32, t21, 32);
    t22 = ((char*)((ng12)));
    memset(t24, 0, 8);
    xsi_vlog_signed_mod(t24, 32, t23, 32, t22, 32);
    t25 = ((char*)((ng10)));
    t26 = (t0 + 4120);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t43, 0, 8);
    xsi_vlog_signed_multiply(t43, 32, t25, 32, t28, 32);
    memset(t44, 0, 8);
    xsi_vlog_signed_equal(t44, 32, t24, 32, t43, 32);
    t29 = (t44 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (~(t16));
    t18 = *((unsigned int *)t44);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t5, 32, t6, 32);
    memset(t23, 0, 8);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t7) != 0)
        goto LAB37;

LAB38:    t14 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB39;

LAB40:    memcpy(t82, t23, 8);

LAB41:    t50 = (t82 + 4);
    t106 = *((unsigned int *)t50);
    t107 = (~(t106));
    t108 = *((unsigned int *)t82);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4120);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB23;

LAB27:    xsi_set_current_line(69, ng0);
    t30 = (t0 + 4120);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t45 = (t0 + 6696);
    t46 = (t0 + 848);
    t47 = xsi_create_subprogram_invocation(t45, 0, t0, t46, 0, 0);
    t48 = (t0 + 5240);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);

LAB30:    t49 = (t0 + 6792);
    t50 = *((char **)t49);
    t51 = (t50 + 80U);
    t52 = *((char **)t51);
    t53 = (t52 + 272U);
    t54 = *((char **)t53);
    t55 = (t54 + 0U);
    t56 = *((char **)t55);
    t32 = ((int  (*)(char *, char *))t56)(t0, t50);
    if (t32 != 0)
        goto LAB32;

LAB31:    t50 = (t0 + 6792);
    t57 = *((char **)t50);
    t50 = (t0 + 5080);
    t58 = (t50 + 56U);
    t59 = *((char **)t58);
    memcpy(t38, t59, 16);
    t60 = (t0 + 848);
    t61 = (t0 + 6696);
    t62 = 0;
    xsi_delete_subprogram_invocation(t60, t57, t0, t61, t62);
    t63 = (t0 + 2680);
    t66 = (t0 + 2680);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 2680);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t72 = (t0 + 4120);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    xsi_vlog_generic_convert_array_indices(t64, t65, t68, t71, 1, 1, t74, 32, 1);
    t75 = (t64 + 4);
    t76 = *((unsigned int *)t75);
    t34 = (!(t76));
    t77 = (t65 + 4);
    t78 = *((unsigned int *)t77);
    t35 = (!(t78));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB33;

LAB34:    goto LAB29;

LAB32:    t49 = (t0 + 6888U);
    *((char **)t49) = &&LAB30;
    goto LAB1;

LAB33:    t79 = *((unsigned int *)t64);
    t80 = *((unsigned int *)t65);
    t37 = (t79 - t80);
    t81 = (t37 + 1);
    xsi_vlogvar_assign_value(t63, t38, 0, *((unsigned int *)t65), t81);
    goto LAB34;

LAB35:    *((unsigned int *)t23) = 1;
    goto LAB38;

LAB37:    t8 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    t15 = (t0 + 3640);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng13)));
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t22, 32, t25, 32);
    t26 = ((char*)((ng12)));
    memset(t43, 0, 8);
    xsi_vlog_signed_mod(t43, 32, t24, 32, t26, 32);
    t27 = ((char*)((ng10)));
    t28 = (t0 + 4120);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t44, 0, 8);
    xsi_vlog_signed_multiply(t44, 32, t27, 32, t30, 32);
    memset(t64, 0, 8);
    xsi_vlog_signed_equal(t64, 32, t43, 32, t44, 32);
    memset(t65, 0, 8);
    t31 = (t64 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t76 = *((unsigned int *)t64);
    t78 = (t76 & t20);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t31) != 0)
        goto LAB44;

LAB45:    t80 = *((unsigned int *)t23);
    t83 = *((unsigned int *)t65);
    t84 = (t80 & t83);
    *((unsigned int *)t82) = t84;
    t45 = (t23 + 4);
    t46 = (t65 + 4);
    t47 = (t82 + 4);
    t85 = *((unsigned int *)t45);
    t86 = *((unsigned int *)t46);
    t87 = (t85 | t86);
    *((unsigned int *)t47) = t87;
    t88 = *((unsigned int *)t47);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB41;

LAB42:    *((unsigned int *)t65) = 1;
    goto LAB45;

LAB44:    t33 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB45;

LAB46:    t90 = *((unsigned int *)t82);
    t91 = *((unsigned int *)t47);
    *((unsigned int *)t82) = (t90 | t91);
    t48 = (t23 + 4);
    t49 = (t65 + 4);
    t92 = *((unsigned int *)t23);
    t93 = (~(t92));
    t94 = *((unsigned int *)t48);
    t95 = (~(t94));
    t96 = *((unsigned int *)t65);
    t97 = (~(t96));
    t98 = *((unsigned int *)t49);
    t99 = (~(t98));
    t32 = (t93 & t95);
    t34 = (t97 & t99);
    t100 = (~(t32));
    t101 = (~(t34));
    t102 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t102 & t100);
    t103 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t103 & t101);
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t100);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t101);
    goto LAB48;

LAB49:    xsi_set_current_line(70, ng0);

LAB52:    xsi_set_current_line(71, ng0);
    t51 = (t0 + 2680);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t0 + 2680);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 2680);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 4120);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_get_array_select_value(t38, 35, t53, t56, t59, 1, 1, t62, 32, 1);
    t63 = (t0 + 2840);
    t66 = (t0 + 2840);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 2840);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t72 = (t0 + 4120);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    xsi_vlog_generic_convert_array_indices(t111, t112, t68, t71, 1, 1, t74, 32, 1);
    t75 = (t111 + 4);
    t113 = *((unsigned int *)t75);
    t35 = (!(t113));
    t77 = (t112 + 4);
    t114 = *((unsigned int *)t77);
    t36 = (!(t114));
    t37 = (t35 && t36);
    if (t37 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3960);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB51;

LAB53:    t115 = *((unsigned int *)t111);
    t116 = *((unsigned int *)t112);
    t81 = (t115 - t116);
    t117 = (t81 + 1);
    xsi_vlogvar_assign_value(t63, t38, 0, *((unsigned int *)t112), t117);
    goto LAB54;

LAB55:    xsi_set_current_line(77, ng0);
    t8 = ((char*)((ng15)));
    t14 = (t0 + 3480);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);
    goto LAB57;

LAB58:    xsi_set_current_line(78, ng0);
    t8 = ((char*)((ng16)));
    memset(t24, 0, 8);
    xsi_vlog_signed_unary_minus(t24, 32, t8, 32);
    t14 = (t0 + 3480);
    xsi_vlogvar_assign_value(t14, t24, 0, 0, 16);
    goto LAB60;

LAB61:    xsi_set_current_line(81, ng0);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB62:    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 3160);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_signed_case_noteq(t38, 35, t3, 35, t6, 35);
    memset(t4, 0, 8);
    t7 = (t38 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t38);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t7) != 0)
        goto LAB71;

LAB72:    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (!(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB73;

LAB74:    memcpy(t43, t4, 8);

LAB75:    t45 = (t43 + 4);
    t103 = *((unsigned int *)t45);
    t104 = (~(t103));
    t105 = *((unsigned int *)t43);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB83;

LAB84:
LAB85:    goto LAB2;

LAB63:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 1480U);
    t14 = *((char **)t8);
    t8 = (t0 + 1440U);
    t15 = (t8 + 72U);
    t21 = *((char **)t15);
    t22 = (t0 + 1440U);
    t25 = (t22 + 48U);
    t26 = *((char **)t25);
    t27 = (t0 + 4120);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t38, 35, t14, t21, t26, 1, 1, t29, 32, 1);
    t30 = (t0 + 2840);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t45 = (t0 + 2840);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = (t0 + 2840);
    t49 = (t48 + 64U);
    t50 = *((char **)t49);
    t51 = (t0 + 4120);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t39, 35, t33, t47, t50, 1, 1, t53, 32, 1);
    xsi_vlog_signed_case_noteq(t40, 35, t38, 35, t39, 35);
    t54 = (t40 + 4);
    t16 = *((unsigned int *)t54);
    t17 = (~(t16));
    t18 = *((unsigned int *)t40);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 4120);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB62;

LAB65:    xsi_set_current_line(82, ng0);

LAB68:    xsi_set_current_line(83, ng0);
    t55 = (t0 + 3640);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t0 + 4120);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t0 + 1480U);
    t62 = *((char **)t61);
    t61 = (t0 + 1440U);
    t63 = (t61 + 72U);
    t66 = *((char **)t63);
    t67 = (t0 + 1440U);
    t68 = (t67 + 48U);
    t69 = *((char **)t68);
    t70 = (t0 + 4120);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    xsi_vlog_generic_get_array_select_value(t41, 35, t62, t66, t69, 1, 1, t72, 32, 1);
    t73 = (t0 + 2840);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t77 = (t0 + 2840);
    t118 = (t77 + 72U);
    t119 = *((char **)t118);
    t120 = (t0 + 2840);
    t121 = (t120 + 64U);
    t122 = *((char **)t121);
    t123 = (t0 + 4120);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    xsi_vlog_generic_get_array_select_value(t42, 35, t75, t119, t122, 1, 1, t125, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng17, 5, t0, (char)119, t57, 32, (char)119, t60, 32, (char)119, t41, 35, (char)119, t42, 35);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3800);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB67;

LAB69:    *((unsigned int *)t4) = 1;
    goto LAB72;

LAB71:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB72;

LAB73:    t15 = (t0 + 1800U);
    t21 = *((char **)t15);
    t15 = (t0 + 3480);
    t22 = (t15 + 56U);
    t25 = *((char **)t22);
    memset(t23, 0, 8);
    xsi_vlog_signed_case_noteq(t23, 16, t21, 16, t25, 16);
    memset(t24, 0, 8);
    t26 = (t23 + 4);
    t20 = *((unsigned int *)t26);
    t76 = (~(t20));
    t78 = *((unsigned int *)t23);
    t79 = (t78 & t76);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t26) != 0)
        goto LAB78;

LAB79:    t83 = *((unsigned int *)t4);
    t84 = *((unsigned int *)t24);
    t85 = (t83 | t84);
    *((unsigned int *)t43) = t85;
    t28 = (t4 + 4);
    t29 = (t24 + 4);
    t30 = (t43 + 4);
    t86 = *((unsigned int *)t28);
    t87 = *((unsigned int *)t29);
    t88 = (t86 | t87);
    *((unsigned int *)t30) = t88;
    t89 = *((unsigned int *)t30);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB75;

LAB76:    *((unsigned int *)t24) = 1;
    goto LAB79;

LAB78:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB79;

LAB80:    t91 = *((unsigned int *)t43);
    t92 = *((unsigned int *)t30);
    *((unsigned int *)t43) = (t91 | t92);
    t31 = (t4 + 4);
    t33 = (t24 + 4);
    t93 = *((unsigned int *)t31);
    t94 = (~(t93));
    t95 = *((unsigned int *)t4);
    t32 = (t95 & t94);
    t96 = *((unsigned int *)t33);
    t97 = (~(t96));
    t98 = *((unsigned int *)t24);
    t34 = (t98 & t97);
    t99 = (~(t32));
    t100 = (~(t34));
    t101 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t101 & t99);
    t102 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t102 & t100);
    goto LAB82;

LAB83:    xsi_set_current_line(86, ng0);

LAB86:    xsi_set_current_line(87, ng0);
    t46 = (t0 + 3640);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)119, t48, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3800);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB85;

}

static void Initial_95_2(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char t37[8];
    char t44[16];
    char t45[16];
    char t49[8];
    char t54[8];
    char t55[16];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
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
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;

LAB0:    t1 = (t0 + 7136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(96, ng0);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 4280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t28 = (t10 & t9);
    t4 = (t0 + 10068);
    *((int *)t4) = t28;

LAB10:    t5 = (t0 + 10068);
    if (*((int *)t5) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng21)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    memset(t16, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t7) != 0)
        goto LAB198;

LAB199:    t14 = (t16 + 4);
    t27 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t14);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB200;

LAB201:    memcpy(t54, t16, 8);

LAB202:    t38 = (t54 + 4);
    t86 = *((unsigned int *)t38);
    t87 = (~(t86));
    t88 = *((unsigned int *)t54);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB210;

LAB211:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3960);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng43, 3, t0, (char)119, t4, 32, (char)119, t13, 32);

LAB212:    xsi_set_current_line(138, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(96, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2520);
    t17 = (t0 + 2520);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2520);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4280);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 1, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB8:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t16), t36);
    goto LAB9;

LAB11:    xsi_set_current_line(98, ng0);
    t7 = (t0 + 7472);
    *((int *)t7) = 1;
    t13 = (t0 + 7168);
    *((char **)t13) = t7;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    t2 = (t0 + 10068);
    t28 = *((int *)t2);
    *((int *)t2) = (t28 - 1);
    goto LAB10;

LAB15:    xsi_set_current_line(100, ng0);

LAB17:    xsi_set_current_line(103, ng0);
    xsi_set_current_line(103, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 4280);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB18:    t2 = (t0 + 4280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng39)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB189;

LAB190:
LAB191:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng40)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB192;

LAB193:
LAB194:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7488);
    *((int *)t2) = 1;
    t3 = (t0 + 7168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB195;
    goto LAB1;

LAB19:    xsi_set_current_line(103, ng0);

LAB21:    xsi_set_current_line(104, ng0);
    t13 = (t0 + 4440);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng20)));
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t17, 32, t18, 32);

LAB22:    t19 = ((char*)((ng2)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t19, 32);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng24)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng26)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng28)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng30)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng33)));
    t28 = xsi_vlog_signed_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(116, ng0);

LAB161:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB162;

LAB163:    xsi_set_current_line(122, ng0);

LAB186:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(1, t4, -2147483648, 2147483647);
    t5 = (t6 + 4);
    *((int *)t5) = 0;
    t7 = (t0 + 4760);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(1, t4, -2147483648, 2147483647);
    t5 = (t6 + 4);
    *((int *)t5) = 0;
    t7 = (t0 + 4920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4760);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    memset(t6, 0, 8);
    t14 = (t6 + 4);
    t17 = (t13 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t17);
    t11 = (t10 >> 0);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 7U);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 & 7U);
    xsi_vlogtype_concat(t44, 35, 35, 2U, t6, 3, t4, 32);
    t18 = (t0 + 2520);
    t19 = (t0 + 2520);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2520);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 4280);
    t26 = (t25 + 56U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t37, t21, t24, 1, 1, t29, 32, 1);
    t38 = (t16 + 4);
    t30 = *((unsigned int *)t38);
    t28 = (!(t30));
    t39 = (t37 + 4);
    t33 = *((unsigned int *)t39);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB187;

LAB188:
LAB164:
LAB47:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB18;

LAB23:    xsi_set_current_line(105, ng0);
    t20 = ((char*)((ng8)));
    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t16, t37, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t16 + 4);
    t27 = *((unsigned int *)t41);
    t31 = (!(t27));
    t42 = (t37 + 4);
    t30 = *((unsigned int *)t42);
    t32 = (!(t30));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB48;

LAB49:    goto LAB47;

LAB25:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng9)));
    xsi_vlog_signed_unary_minus(t44, 35, t3, 35);
    t4 = (t0 + 2520);
    t5 = (t0 + 2520);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2520);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 4280);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t6, t16, t13, t18, 1, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t31 = (!(t8));
    t23 = (t16 + 4);
    t9 = *((unsigned int *)t23);
    t32 = (!(t9));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB50;

LAB51:    goto LAB47;

LAB27:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    memset(t6, 0, 8);
    t13 = (t16 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t13) != 0)
        goto LAB54;

LAB55:    t17 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB56;

LAB57:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t17);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t17) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t6) > 0)
        goto LAB62;

LAB63:    memcpy(t44, t19, 16);

LAB64:    t20 = (t0 + 2520);
    t21 = (t0 + 2520);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2520);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t29 = (t0 + 4280);
    t38 = (t29 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t37, t49, t23, t26, 1, 1, t39, 32, 1);
    t40 = (t37 + 4);
    t50 = *((unsigned int *)t40);
    t31 = (!(t50));
    t41 = (t49 + 4);
    t51 = *((unsigned int *)t41);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB65;

LAB66:    goto LAB47;

LAB29:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    t13 = ((char*)((ng10)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t16, 32, t13, 32);
    memset(t6, 0, 8);
    t14 = (t37 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t37);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t14) != 0)
        goto LAB69;

LAB70:    t18 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t18);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB71;

LAB72:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t18) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t6) > 0)
        goto LAB77;

LAB78:    memcpy(t44, t20, 16);

LAB79:    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t49, t54, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t49 + 4);
    t50 = *((unsigned int *)t41);
    t31 = (!(t50));
    t42 = (t54 + 4);
    t51 = *((unsigned int *)t42);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB80;

LAB81:    goto LAB47;

LAB31:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    t13 = ((char*)((ng24)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t16, 32, t13, 32);
    memset(t6, 0, 8);
    t14 = (t37 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t37);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t14) != 0)
        goto LAB84;

LAB85:    t18 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t18);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB86;

LAB87:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t18) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t6) > 0)
        goto LAB92;

LAB93:    memcpy(t44, t20, 16);

LAB94:    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t49, t54, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t49 + 4);
    t50 = *((unsigned int *)t41);
    t31 = (!(t50));
    t42 = (t54 + 4);
    t51 = *((unsigned int *)t42);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB95;

LAB96:    goto LAB47;

LAB33:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    t13 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t16, 32, t13, 32);
    memset(t6, 0, 8);
    t14 = (t37 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t37);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t14) != 0)
        goto LAB99;

LAB100:    t18 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t18);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB101;

LAB102:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t18) > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t6) > 0)
        goto LAB107;

LAB108:    memcpy(t44, t20, 16);

LAB109:    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t49, t54, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t49 + 4);
    t50 = *((unsigned int *)t41);
    t31 = (!(t50));
    t42 = (t54 + 4);
    t51 = *((unsigned int *)t42);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB110;

LAB111:    goto LAB47;

LAB35:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    t13 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t16, 32, t13, 32);
    memset(t6, 0, 8);
    t14 = (t37 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t37);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t14) != 0)
        goto LAB114;

LAB115:    t18 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t18);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB116;

LAB117:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t18) > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t6) > 0)
        goto LAB122;

LAB123:    memcpy(t44, t20, 16);

LAB124:    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t49, t54, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t49 + 4);
    t50 = *((unsigned int *)t41);
    t31 = (!(t50));
    t42 = (t54 + 4);
    t51 = *((unsigned int *)t42);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB125;

LAB126:    goto LAB47;

LAB37:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    t13 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t16, 32, t13, 32);
    memset(t6, 0, 8);
    t14 = (t37 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t37);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t14) != 0)
        goto LAB129;

LAB130:    t18 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t18);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB131;

LAB132:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t18) > 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t6) > 0)
        goto LAB137;

LAB138:    memcpy(t44, t20, 16);

LAB139:    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t49, t54, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t49 + 4);
    t50 = *((unsigned int *)t41);
    t31 = (!(t50));
    t42 = (t54 + 4);
    t51 = *((unsigned int *)t42);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB140;

LAB141:    goto LAB47;

LAB39:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 4280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t5, 32, t7, 32);
    t13 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t16, 32, t13, 32);
    memset(t6, 0, 8);
    t14 = (t37 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t37);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t14) != 0)
        goto LAB144;

LAB145:    t18 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t18);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB146;

LAB147:    t34 = *((unsigned int *)t6);
    t46 = (~(t34));
    t47 = *((unsigned int *)t18);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t18) > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t6) > 0)
        goto LAB152;

LAB153:    memcpy(t44, t20, 16);

LAB154:    t21 = (t0 + 2520);
    t22 = (t0 + 2520);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2520);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t38 = (t0 + 4280);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t49, t54, t24, t29, 1, 1, t40, 32, 1);
    t41 = (t49 + 4);
    t50 = *((unsigned int *)t41);
    t31 = (!(t50));
    t42 = (t54 + 4);
    t51 = *((unsigned int *)t42);
    t32 = (!(t51));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB155;

LAB156:    goto LAB47;

LAB41:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 2520);
    t5 = (t0 + 2520);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2520);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 4280);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t6, t16, t13, t18, 1, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t31 = (!(t8));
    t23 = (t16 + 4);
    t9 = *((unsigned int *)t23);
    t32 = (!(t9));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB157;

LAB158:    goto LAB47;

LAB43:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng34)));
    xsi_vlog_signed_unary_minus(t44, 35, t3, 35);
    t4 = (t0 + 2520);
    t5 = (t0 + 2520);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2520);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 4280);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t6, t16, t13, t18, 1, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t31 = (!(t8));
    t23 = (t16 + 4);
    t9 = *((unsigned int *)t23);
    t32 = (!(t9));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB159;

LAB160:    goto LAB47;

LAB48:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t37);
    t36 = (t33 - t34);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t20, 0, *((unsigned int *)t37), t43);
    goto LAB49;

LAB50:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t16);
    t36 = (t10 - t11);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t4, t44, 0, *((unsigned int *)t16), t43);
    goto LAB51;

LAB52:    *((unsigned int *)t6) = 1;
    goto LAB55;

LAB54:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB55;

LAB56:    t18 = ((char*)((ng9)));
    xsi_vlog_signed_unary_minus(t45, 35, t18, 35);
    goto LAB57;

LAB58:    t19 = ((char*)((ng8)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t44, 35, t45, 35, t19, 35);
    goto LAB64;

LAB62:    memcpy(t44, t45, 16);
    goto LAB64;

LAB65:    t52 = *((unsigned int *)t37);
    t53 = *((unsigned int *)t49);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t20, t44, 0, *((unsigned int *)t49), t43);
    goto LAB66;

LAB67:    *((unsigned int *)t6) = 1;
    goto LAB70;

LAB69:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB70;

LAB71:    t19 = ((char*)((ng22)));
    goto LAB72;

LAB73:    t20 = ((char*)((ng23)));
    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t44, 35, t19, 35, t20, 35);
    goto LAB79;

LAB77:    memcpy(t44, t19, 16);
    goto LAB79;

LAB80:    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t54);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t44, 0, *((unsigned int *)t54), t43);
    goto LAB81;

LAB82:    *((unsigned int *)t6) = 1;
    goto LAB85;

LAB84:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB85;

LAB86:    t19 = ((char*)((ng22)));
    xsi_vlog_signed_unary_minus(t45, 35, t19, 35);
    goto LAB87;

LAB88:    t20 = ((char*)((ng23)));
    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t44, 35, t45, 35, t20, 35);
    goto LAB94;

LAB92:    memcpy(t44, t45, 16);
    goto LAB94;

LAB95:    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t54);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t44, 0, *((unsigned int *)t54), t43);
    goto LAB96;

LAB97:    *((unsigned int *)t6) = 1;
    goto LAB100;

LAB99:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB100;

LAB101:    t19 = ((char*)((ng25)));
    goto LAB102;

LAB103:    t20 = ((char*)((ng23)));
    goto LAB104;

LAB105:    xsi_vlog_unsigned_bit_combine(t44, 35, t19, 35, t20, 35);
    goto LAB109;

LAB107:    memcpy(t44, t19, 16);
    goto LAB109;

LAB110:    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t54);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t44, 0, *((unsigned int *)t54), t43);
    goto LAB111;

LAB112:    *((unsigned int *)t6) = 1;
    goto LAB115;

LAB114:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB115;

LAB116:    t19 = ((char*)((ng27)));
    xsi_vlog_signed_unary_minus(t45, 35, t19, 35);
    goto LAB117;

LAB118:    t20 = ((char*)((ng23)));
    goto LAB119;

LAB120:    xsi_vlog_unsigned_bit_combine(t44, 35, t45, 35, t20, 35);
    goto LAB124;

LAB122:    memcpy(t44, t45, 16);
    goto LAB124;

LAB125:    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t54);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t44, 0, *((unsigned int *)t54), t43);
    goto LAB126;

LAB127:    *((unsigned int *)t6) = 1;
    goto LAB130;

LAB129:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB130;

LAB131:    t19 = ((char*)((ng29)));
    goto LAB132;

LAB133:    t20 = ((char*)((ng23)));
    goto LAB134;

LAB135:    xsi_vlog_unsigned_bit_combine(t44, 35, t19, 35, t20, 35);
    goto LAB139;

LAB137:    memcpy(t44, t19, 16);
    goto LAB139;

LAB140:    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t54);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t44, 0, *((unsigned int *)t54), t43);
    goto LAB141;

LAB142:    *((unsigned int *)t6) = 1;
    goto LAB145;

LAB144:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB145;

LAB146:    t19 = ((char*)((ng31)));
    xsi_vlog_signed_unary_minus(t45, 35, t19, 35);
    goto LAB147;

LAB148:    t20 = ((char*)((ng23)));
    goto LAB149;

LAB150:    xsi_vlog_unsigned_bit_combine(t44, 35, t45, 35, t20, 35);
    goto LAB154;

LAB152:    memcpy(t44, t45, 16);
    goto LAB154;

LAB155:    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t54);
    t36 = (t52 - t53);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t21, t44, 0, *((unsigned int *)t54), t43);
    goto LAB156;

LAB157:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t16);
    t36 = (t10 - t11);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t16), t43);
    goto LAB158;

LAB159:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t16);
    t36 = (t10 - t11);
    t43 = (t36 + 1);
    xsi_vlogvar_assign_value(t4, t44, 0, *((unsigned int *)t16), t43);
    goto LAB160;

LAB162:    xsi_set_current_line(117, ng0);

LAB165:    xsi_set_current_line(120, ng0);
    t13 = (t0 + 4280);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_signed_mod(t37, 32, t17, 32, t18, 32);
    t19 = ((char*)((ng2)));
    memset(t49, 0, 8);
    xsi_vlog_signed_equal(t49, 32, t37, 32, t19, 32);
    memset(t16, 0, 8);
    t20 = (t49 + 4);
    t27 = *((unsigned int *)t20);
    t30 = (~(t27));
    t33 = *((unsigned int *)t49);
    t34 = (t33 & t30);
    t46 = (t34 & 1U);
    if (t46 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t20) != 0)
        goto LAB168;

LAB169:    t22 = (t16 + 4);
    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t22);
    t50 = (t47 || t48);
    if (t50 > 0)
        goto LAB170;

LAB171:    t51 = *((unsigned int *)t16);
    t52 = (~(t51));
    t53 = *((unsigned int *)t22);
    t56 = (t52 || t53);
    if (t56 > 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t22) > 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t16) > 0)
        goto LAB176;

LAB177:    memcpy(t44, t38, 16);

LAB178:    t39 = (t0 + 2520);
    t40 = (t0 + 2520);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t58 = (t0 + 2520);
    t59 = (t58 + 64U);
    t60 = *((char **)t59);
    t61 = (t0 + 4280);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    xsi_vlog_generic_convert_array_indices(t54, t57, t42, t60, 1, 1, t63, 32, 1);
    t64 = (t54 + 4);
    t65 = *((unsigned int *)t64);
    t28 = (!(t65));
    t66 = (t57 + 4);
    t67 = *((unsigned int *)t66);
    t31 = (!(t67));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB179;

LAB180:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng7)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 32, t6, 32, t7, 32);
    t13 = (t16 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB181;

LAB182:
LAB183:    goto LAB164;

LAB166:    *((unsigned int *)t16) = 1;
    goto LAB169;

LAB168:    t21 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB169;

LAB170:    t23 = (t0 + 4440);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng36)));
    xsi_vlog_signed_divide(t45, 35, t25, 32, t26, 32);
    t29 = ((char*)((ng37)));
    xsi_vlog_signed_minus(t55, 35, t45, 35, t29, 32);
    goto LAB171;

LAB172:    t38 = ((char*)((ng38)));
    goto LAB173;

LAB174:    xsi_vlog_unsigned_bit_combine(t44, 35, t55, 35, t38, 35);
    goto LAB178;

LAB176:    memcpy(t44, t55, 16);
    goto LAB178;

LAB179:    t68 = *((unsigned int *)t54);
    t69 = *((unsigned int *)t57);
    t35 = (t68 - t69);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t39, t44, 0, *((unsigned int *)t57), t36);
    goto LAB180;

LAB181:    xsi_set_current_line(121, ng0);
    t14 = (t0 + 2520);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2520);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2520);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 4280);
    t26 = (t25 + 56U);
    t29 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t45, 35, t18, t21, t24, 1, 1, t29, 32, 1);
    xsi_vlog_signed_unary_minus(t44, 35, t45, 35);
    t38 = (t0 + 2520);
    t39 = (t0 + 2520);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 2520);
    t58 = (t42 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 4280);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_convert_array_indices(t37, t49, t41, t59, 1, 1, t62, 32, 1);
    t63 = (t37 + 4);
    t27 = *((unsigned int *)t63);
    t28 = (!(t27));
    t64 = (t49 + 4);
    t30 = *((unsigned int *)t64);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB184;

LAB185:    goto LAB183;

LAB184:    t33 = *((unsigned int *)t37);
    t34 = *((unsigned int *)t49);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t38, t44, 0, *((unsigned int *)t49), t36);
    goto LAB185;

LAB187:    t34 = *((unsigned int *)t16);
    t46 = *((unsigned int *)t37);
    t35 = (t34 - t46);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t18, t44, 0, *((unsigned int *)t37), t36);
    goto LAB188;

LAB189:    xsi_set_current_line(131, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2360);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB191;

LAB192:    xsi_set_current_line(132, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 2360);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB194;

LAB195:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4440);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB196:    *((unsigned int *)t16) = 1;
    goto LAB199;

LAB198:    t13 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB199;

LAB200:    t17 = (t0 + 3960);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng41)));
    memset(t37, 0, 8);
    xsi_vlog_signed_greater(t37, 32, t19, 32, t20, 32);
    memset(t49, 0, 8);
    t21 = (t37 + 4);
    t34 = *((unsigned int *)t21);
    t46 = (~(t34));
    t47 = *((unsigned int *)t37);
    t48 = (t47 & t46);
    t50 = (t48 & 1U);
    if (t50 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t21) != 0)
        goto LAB205;

LAB206:    t51 = *((unsigned int *)t16);
    t52 = *((unsigned int *)t49);
    t53 = (t51 & t52);
    *((unsigned int *)t54) = t53;
    t23 = (t16 + 4);
    t24 = (t49 + 4);
    t25 = (t54 + 4);
    t56 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t24);
    t67 = (t56 | t65);
    *((unsigned int *)t25) = t67;
    t68 = *((unsigned int *)t25);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB207;

LAB208:
LAB209:    goto LAB202;

LAB203:    *((unsigned int *)t49) = 1;
    goto LAB206;

LAB205:    t22 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB206;

LAB207:    t70 = *((unsigned int *)t54);
    t71 = *((unsigned int *)t25);
    *((unsigned int *)t54) = (t70 | t71);
    t26 = (t16 + 4);
    t29 = (t49 + 4);
    t72 = *((unsigned int *)t16);
    t73 = (~(t72));
    t74 = *((unsigned int *)t26);
    t75 = (~(t74));
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t29);
    t79 = (~(t78));
    t28 = (t73 & t75);
    t31 = (t77 & t79);
    t80 = (~(t28));
    t81 = (~(t31));
    t82 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t82 & t80);
    t83 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB209;

LAB210:    xsi_set_current_line(136, ng0);
    t39 = (t0 + 3960);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    xsi_vlogfile_write(1, 0, 0, ng42, 2, t0, (char)119, t41, 32);
    goto LAB212;

}


extern void work_m_00000000003930672576_1235869409_init()
{
	static char *pe[] = {(void *)Always_5_0,(void *)Always_54_1,(void *)Initial_95_2};
	static char *se[] = {(void *)sp_average};
	xsi_register_didat("work_m_00000000003930672576_1235869409", "isim/test.exe.sim/work/m_00000000003930672576_1235869409.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
