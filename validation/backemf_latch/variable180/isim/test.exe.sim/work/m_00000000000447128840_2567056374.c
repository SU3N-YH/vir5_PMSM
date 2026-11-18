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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/cordic_variable_latency.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static int ng3[] = {11, 0};
static int ng4[] = {47, 0};
static int ng5[] = {1, 0};
static int ng6[] = {12, 0};
static int ng7[] = {2, 0, 0, 0};
static int ng8[] = {1, 0, 0, 0};
static int ng9[] = {131071, 0};
static int ng10[] = {131072, 0};



static void Cont_18_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 262143U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 17);

LAB1:    return;
}

static void Cont_19_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_20_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_21_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_22_4(char *t0)
{
    char t4[8];
    char t21[8];
    char t26[8];
    char t34[8];
    char t80[16];
    char t84[16];
    char t86[16];
    char t87[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    double t74;
    double t75;
    double t76;
    double t77;
    double t78;
    double t79;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    double t88;
    double t89;
    char *t90;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 6400);
    *((int *)t2) = 1;
    t3 = (t0 + 6112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);

LAB14:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    memcpy(t34, t4, 8);

LAB21:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(23, ng0);

LAB13:    xsi_set_current_line(24, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 3368);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (~(t17));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t20) == 0)
        goto LAB22;

LAB24:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;

LAB25:    memset(t26, 0, 8);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t27) != 0)
        goto LAB28;

LAB29:    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t4 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB22:    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t26) = 1;
    goto LAB29;

LAB28:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB29;

LAB30:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t4 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t4);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB32;

LAB33:    xsi_set_current_line(32, ng0);

LAB36:    xsi_set_current_line(33, ng0);
    t72 = (t0 + 1528U);
    t73 = *((char **)t72);
    t72 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t72, t73, 0, 0, 32, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t6, 32, t12, 32);
    t13 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_mod(t21, 32, t4, 32, t13, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t2, 32, t21, 32);
    t19 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t19, t26, 0, 0, 32, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB37:    xsi_set_current_line(38, ng0);

LAB40:    xsi_set_current_line(39, ng0);
    t12 = (t0 + 2568);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (~(t14));
    t16 = *((unsigned int *)t19);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(43, ng0);

LAB47:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = xsi_vlog_convert_to_real(t5, 32, 1);
    t75 = (t74 / 65536.000000000000);
    t76 = (t75 * 3.1415926535897931);
    t77 = (t76 / 180.00000000000000);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value_double(t6, t77, 0);
    xsi_set_current_line(45, ng0);

LAB48:    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = *((double *)t5);
    t7 = (t74 > 3.1415926535897931);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t12 = (t4 + 4);
    t8 = *((unsigned int *)t12);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(46, ng0);

LAB51:    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = *((double *)t5);
    t75 = (-(3.1415926535897931));
    t7 = (t74 < t75);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t12 = (t4 + 4);
    t8 = *((unsigned int *)t12);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = *((double *)t5);
    t6 = (t0 + 3848);
    xsi_vlogvar_assign_value_double(t6, t74, 0);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = *((double *)t5);
    t6 = (t0 + 4008);
    xsi_vlogvar_assign_value_double(t6, t74, 0);
    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB54:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_leq(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = *((double *)t5);
    t75 = (t74 * 131072.00000000000);
    *((int *)t4) = ((int)(t75));
    t6 = (t4 + 4);
    *((int *)t6) = 0;
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t6, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t5, 32, t4, 32);
    t12 = (t21 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t21);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 18, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB46:
LAB43:    goto LAB39;

LAB41:    xsi_set_current_line(40, ng0);
    t25 = ((char*)((ng1)));
    t27 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t27, t25, 0, 0, 1, 0LL);
    goto LAB43;

LAB44:    xsi_set_current_line(42, ng0);
    t13 = (t0 + 2888);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t25 = ((char*)((ng5)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t20, 32, t25, 32);
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t21, 0, 0, 32, 0LL);
    goto LAB46;

LAB49:    xsi_set_current_line(45, ng0);
    t13 = (t0 + 3688);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t75 = *((double *)t20);
    t76 = (t75 - 6.2831853071795862);
    t25 = (t0 + 3688);
    xsi_vlogvar_assign_value_double(t25, t76, 0);
    goto LAB48;

LAB52:    xsi_set_current_line(46, ng0);
    t13 = (t0 + 3688);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t76 = *((double *)t20);
    t77 = (t76 + 6.2831853071795862);
    t25 = (t0 + 3688);
    xsi_vlogvar_assign_value_double(t25, t77, 0);
    goto LAB51;

LAB55:    xsi_set_current_line(49, ng0);

LAB57:    xsi_set_current_line(50, ng0);
    t13 = (t0 + 3848);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t74 = *((double *)t20);
    t75 = (-(t74));
    t25 = (t0 + 3688);
    t27 = (t25 + 56U);
    t33 = *((char **)t27);
    t76 = *((double *)t33);
    t77 = (t75 * t76);
    t38 = (t0 + 3688);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t78 = *((double *)t40);
    t79 = (t77 * t78);
    t48 = ((char*)((ng7)));
    t49 = (t0 + 4168);
    t66 = (t49 + 56U);
    t72 = *((char **)t66);
    xsi_vlog_signed_multiply(t80, 64, t48, 32, t72, 32);
    t73 = ((char*)((ng7)));
    t81 = (t0 + 4168);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    xsi_vlog_signed_multiply(t84, 64, t73, 32, t83, 32);
    t85 = ((char*)((ng8)));
    xsi_vlog_signed_add(t86, 64, t84, 64, t85, 32);
    xsi_vlog_signed_multiply(t87, 64, t80, 64, t86, 64);
    t88 = xsi_vlog_convert_to_real(t87, 32, 1);
    t89 = (t79 / t88);
    t90 = (t0 + 3848);
    xsi_vlogvar_assign_value_double(t90, t89, 0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t74 = *((double *)t5);
    t6 = (t0 + 3848);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t75 = *((double *)t13);
    t76 = (t74 + t75);
    t19 = (t0 + 4008);
    xsi_vlogvar_assign_value_double(t19, t76, 0);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 4168);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB54;

LAB58:    xsi_set_current_line(54, ng0);
    t13 = ((char*)((ng9)));
    t19 = (t0 + 3208);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 32);
    goto LAB60;

LAB61:    xsi_set_current_line(55, ng0);
    t13 = ((char*)((ng10)));
    memset(t26, 0, 8);
    xsi_vlog_signed_unary_minus(t26, 32, t13, 32);
    t19 = (t0 + 3208);
    xsi_vlogvar_assign_value(t19, t26, 0, 0, 32);
    goto LAB63;

}


extern void work_m_00000000000447128840_2567056374_init()
{
	static char *pe[] = {(void *)Cont_18_0,(void *)Cont_19_1,(void *)Cont_20_2,(void *)Cont_21_3,(void *)Always_22_4};
	xsi_register_didat("work_m_00000000000447128840_2567056374", "isim/test.exe.sim/work/m_00000000000447128840_2567056374.didat");
	xsi_register_executes(pe);
}
