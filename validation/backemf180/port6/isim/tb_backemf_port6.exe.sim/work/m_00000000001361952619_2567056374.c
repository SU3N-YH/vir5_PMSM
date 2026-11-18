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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/CORDIC_STANDALONE.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2949120U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1740992U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {919872U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {466944U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {234368U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {117312U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {58688U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {29312U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {14656U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {7360U, 0U};
static int ng21[] = {10, 0};
static unsigned int ng22[] = {3648U, 0U};
static int ng23[] = {11, 0};
static unsigned int ng24[] = {1856U, 0U};
static int ng25[] = {12, 0};
static unsigned int ng26[] = {896U, 0U};
static int ng27[] = {13, 0};
static unsigned int ng28[] = {448U, 0U};
static int ng29[] = {14, 0};
static unsigned int ng30[] = {256U, 0U};
static int ng31[] = {15, 0};
static unsigned int ng32[] = {128U, 0U};
static unsigned int ng33[] = {131071U, 0U};
static unsigned int ng34[] = {131072U, 0U};
static unsigned int ng35[] = {0U, 0U};
static unsigned int ng36[] = {5898240U, 0U};
static unsigned int ng37[] = {17694720U, 0U};
static unsigned int ng38[] = {1U, 0U};
static unsigned int ng39[] = {11796480U, 0U};
static unsigned int ng40[] = {23592960U, 0U};
static unsigned int ng41[] = {2U, 0U};
static unsigned int ng42[] = {3U, 0U};
static unsigned int ng43[] = {79594U, 0U};
static unsigned int ng44[] = {4U, 0U};
static unsigned int ng45[] = {5U, 0U};
static unsigned int ng46[] = {15U, 0U};
static unsigned int ng47[] = {6U, 0U};
static int ng48[] = {19, 0};
static unsigned int ng49[] = {8U, 0U};
static unsigned int ng50[] = {7U, 0U};



static int sp_atan_value(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(313, ng0);

LAB2:    xsi_set_current_line(314, ng0);
    t3 = (t1 + 8560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng27)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng29)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng31)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB34;

LAB35:
LAB36:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(315, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 8400);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 24);
    goto LAB36;

LAB6:    xsi_set_current_line(315, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB8:    xsi_set_current_line(316, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB10:    xsi_set_current_line(316, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB12:    xsi_set_current_line(317, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB14:    xsi_set_current_line(317, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB16:    xsi_set_current_line(318, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB18:    xsi_set_current_line(318, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB20:    xsi_set_current_line(319, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB22:    xsi_set_current_line(319, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB24:    xsi_set_current_line(320, ng0);
    t4 = ((char*)((ng22)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB26:    xsi_set_current_line(320, ng0);
    t4 = ((char*)((ng24)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB28:    xsi_set_current_line(321, ng0);
    t4 = ((char*)((ng26)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB30:    xsi_set_current_line(321, ng0);
    t4 = ((char*)((ng28)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB32:    xsi_set_current_line(322, ng0);
    t4 = ((char*)((ng30)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

LAB34:    xsi_set_current_line(322, ng0);
    t4 = ((char*)((ng32)));
    t6 = (t1 + 8400);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 24);
    goto LAB36;

}

static int sp_saturate_q17(char *t1, char *t2)
{
    char t7[8];
    char t16[8];
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
    unsigned int t17;

LAB0:    t0 = 1;
    xsi_set_current_line(329, ng0);

LAB2:    xsi_set_current_line(330, ng0);
    t3 = (t1 + 8880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng33)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 19, t5, 19, t6, 19);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(331, ng0);
    t3 = (t1 + 8880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng34)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 19, t6, 19);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 19, t5, 19, t7, 19);
    t8 = (t16 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(332, ng0);
    t3 = (t1 + 8880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t6 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 262143U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 262143U);
    t14 = (t1 + 8720);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 18);

LAB8:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(330, ng0);
    t14 = ((char*)((ng33)));
    t15 = (t1 + 8720);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 18);
    goto LAB5;

LAB6:    xsi_set_current_line(331, ng0);
    t14 = ((char*)((ng34)));
    t15 = (t1 + 8720);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 18);
    goto LAB8;

}

static void Cont_307_0(char *t0)
{
    char t3[8];
    char t6[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 9800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 6960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng17)));
    t8 = (t0 + 6960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 23);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 23);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlog_mul_concat(t6, 8, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 8, t5, 24);
    t20 = (t0 + 10992);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t3, 8);
    xsi_driver_vfirst_trans(t20, 0, 31);
    t25 = (t0 + 10864);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_308_1(char *t0)
{
    char t3[8];
    char t6[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 10048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 7280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng27)));
    t8 = (t0 + 7280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 18);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 18);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlog_mul_concat(t6, 13, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 13, t5, 19);
    t20 = (t0 + 11056);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t3, 8);
    xsi_driver_vfirst_trans(t20, 0, 31);
    t25 = (t0 + 10880);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_309_2(char *t0)
{
    char t3[8];
    char t6[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 10296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 7440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng27)));
    t8 = (t0 + 7440);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 18);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 18);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlog_mul_concat(t6, 13, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t6, 13, t5, 19);
    t20 = (t0 + 11120);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t3, 8);
    xsi_driver_vfirst_trans(t20, 0, 31);
    t25 = (t0 + 10896);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_336_3(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t31[8];
    char t63[8];
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
    int t21;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    char *t65;
    int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 10544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(336, ng0);
    t2 = (t0 + 10912);
    *((int *)t2) = 1;
    t3 = (t0 + 10576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(336, ng0);

LAB5:    xsi_set_current_line(337, ng0);
    t5 = (t0 + 3840U);
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

LAB11:    xsi_set_current_line(345, ng0);

LAB14:    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(347, ng0);
    t2 = (t0 + 5520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng35)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng38)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng41)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng42)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng44)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng45)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng47)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng49)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng50)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(408, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB36:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(337, ng0);

LAB13:    xsi_set_current_line(338, ng0);
    t19 = ((char*)((ng35)));
    t20 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(348, ng0);
    t12 = (t0 + 4000U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB36;

LAB18:    xsi_set_current_line(356, ng0);

LAB83:    xsi_set_current_line(357, ng0);
    t3 = (t0 + 6320);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t12);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t13) != 0)
        goto LAB86;

LAB87:    t20 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t20);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB88;

LAB89:    memcpy(t23, t4, 8);

LAB90:    t67 = (t0 + 6800);
    xsi_vlogvar_wait_assign_value(t67, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(358, ng0);
    t2 = (t0 + 6160);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(359, ng0);
    t2 = (t0 + 6320);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(360, ng0);
    t2 = (t0 + 6480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 6640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 6000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB109:
LAB106:
LAB103:
LAB100:    xsi_set_current_line(363, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB20:    xsi_set_current_line(365, ng0);

LAB110:    xsi_set_current_line(366, ng0);
    t3 = (t0 + 5840);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 6000);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t12, 32, t20, 32);
    t26 = (t0 + 6960);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 24, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng42)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB22:    xsi_set_current_line(369, ng0);

LAB111:    xsi_set_current_line(370, ng0);
    t3 = ((char*)((ng43)));
    t6 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 19, 0LL);
    xsi_set_current_line(370, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 19, 0LL);
    xsi_set_current_line(370, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = ((char*)((ng44)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB24:    xsi_set_current_line(373, ng0);

LAB112:    xsi_set_current_line(374, ng0);
    t3 = (t0 + 7280);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 5680);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t4, 0, 8);
    xsi_vlog_signed_arith_rshift(t4, 19, t12, 19, t20, 4);
    t26 = (t0 + 7600);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(375, ng0);
    t2 = (t0 + 7440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5680);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_arith_rshift(t4, 19, t6, 19, t19, 4);
    t20 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = (t0 + 6960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng35)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 24, t6, 24, t12, 24);
    t13 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = (t0 + 5680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 10352);
    t13 = (t0 + 2616);
    t19 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    t20 = (t0 + 8560);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 4);

LAB113:    t26 = (t0 + 10448);
    t30 = *((char **)t26);
    t35 = (t30 + 80U);
    t36 = *((char **)t35);
    t37 = (t36 + 272U);
    t45 = *((char **)t37);
    t46 = (t45 + 0U);
    t62 = *((char **)t46);
    t21 = ((int  (*)(char *, char *))t62)(t0, t30);
    if (t21 != 0)
        goto LAB115;

LAB114:    t30 = (t0 + 10448);
    t64 = *((char **)t30);
    t30 = (t0 + 8400);
    t65 = (t30 + 56U);
    t67 = *((char **)t65);
    memcpy(t4, t67, 8);
    t68 = (t0 + 2616);
    t69 = (t0 + 10352);
    t70 = 0;
    xsi_delete_subprogram_invocation(t68, t64, t0, t69, t70);
    t71 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t71, t4, 0, 0, 24, 0LL);
    xsi_set_current_line(378, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB26:    xsi_set_current_line(380, ng0);

LAB116:    xsi_set_current_line(381, ng0);
    t3 = (t0 + 8240);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t12);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(384, ng0);

LAB121:    xsi_set_current_line(385, ng0);
    t2 = (t0 + 7280);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7760);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 19, t6, 19, t19, 19);
    t20 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 7440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7600);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 19, t6, 19, t19, 19);
    t20 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 6960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7120);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 24, t6, 24, t19, 24);
    t20 = (t0 + 6960);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 24, 0LL);

LAB119:    xsi_set_current_line(388, ng0);
    t2 = (t0 + 5680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng38)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t6, 4, t12, 4);
    t13 = (t0 + 5680);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(389, ng0);
    t2 = (t0 + 5680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng46)));
    memset(t23, 0, 8);
    t13 = (t6 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t27 = (~(t18));
    t28 = (t15 & t27);
    if (t28 != 0)
        goto LAB125;

LAB122:    if (t18 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t23) = 1;

LAB125:    memset(t22, 0, 8);
    t26 = (t23 + 4);
    t29 = *((unsigned int *)t26);
    t32 = (~(t29));
    t33 = *((unsigned int *)t23);
    t34 = (t33 & t32);
    t38 = (t34 & 1U);
    if (t38 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t26) != 0)
        goto LAB128;

LAB129:    t35 = (t22 + 4);
    t39 = *((unsigned int *)t22);
    t40 = *((unsigned int *)t35);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB130;

LAB131:    t42 = *((unsigned int *)t22);
    t43 = (~(t42));
    t44 = *((unsigned int *)t35);
    t47 = (t43 || t44);
    if (t47 > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t35) > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t22) > 0)
        goto LAB136;

LAB137:    memcpy(t4, t37, 8);

LAB138:    t45 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t45, t4, 0, 0, 4, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(391, ng0);

LAB139:    xsi_set_current_line(393, ng0);
    t3 = (t0 + 7280);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng48)));
    t19 = (t0 + 6800);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    xsi_vlog_mul_concat(t4, 19, 1, t13, 1U, t26, 1);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    *((unsigned int *)t22) = t9;
    t30 = (t12 + 4);
    t35 = (t4 + 4);
    t36 = (t22 + 4);
    t10 = *((unsigned int *)t30);
    t11 = *((unsigned int *)t35);
    t14 = (t10 | t11);
    *((unsigned int *)t36) = t14;
    t15 = *((unsigned int *)t36);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB140;

LAB141:
LAB142:    t37 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t37, t22, 0, 0, 19, 0LL);
    xsi_set_current_line(394, ng0);
    t2 = (t0 + 7440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng48)));
    t13 = (t0 + 6800);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_mul_concat(t4, 19, 1, t12, 1U, t20, 1);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    *((unsigned int *)t22) = t9;
    t26 = (t6 + 4);
    t30 = (t4 + 4);
    t35 = (t22 + 4);
    t10 = *((unsigned int *)t26);
    t11 = *((unsigned int *)t30);
    t14 = (t10 | t11);
    *((unsigned int *)t35) = t14;
    t15 = *((unsigned int *)t35);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB143;

LAB144:
LAB145:    t36 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t36, t22, 0, 0, 19, 0LL);
    xsi_set_current_line(395, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(397, ng0);

LAB146:    xsi_set_current_line(398, ng0);
    t3 = (t0 + 7920);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 6800);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t26 = ((char*)((ng35)));
    xsi_vlogtype_concat(t22, 19, 19, 2U, t26, 18, t20, 1);
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 19, t12, 19, t22, 19);
    t30 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t30, t23, 0, 0, 19, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = (t0 + 8080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 6800);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng35)));
    xsi_vlogtype_concat(t22, 19, 19, 2U, t20, 18, t19, 1);
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 19, t6, 19, t22, 19);
    t26 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t26, t23, 0, 0, 19, 0LL);
    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng50)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(402, ng0);

LAB147:    xsi_set_current_line(403, ng0);
    t3 = (t0 + 7920);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 10352);
    t19 = (t0 + 3048);
    t20 = xsi_create_subprogram_invocation(t13, 0, t0, t19, 0, 0);
    t26 = (t0 + 8880);
    xsi_vlogvar_assign_value(t26, t12, 0, 0, 19);

LAB148:    t30 = (t0 + 10448);
    t35 = *((char **)t30);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t45 = (t37 + 272U);
    t46 = *((char **)t45);
    t62 = (t46 + 0U);
    t64 = *((char **)t62);
    t55 = ((int  (*)(char *, char *))t64)(t0, t35);
    if (t55 != 0)
        goto LAB150;

LAB149:    t35 = (t0 + 10448);
    t65 = *((char **)t35);
    t35 = (t0 + 8720);
    t67 = (t35 + 56U);
    t68 = *((char **)t67);
    memcpy(t4, t68, 8);
    t69 = (t0 + 3048);
    t70 = (t0 + 10352);
    t71 = 0;
    xsi_delete_subprogram_invocation(t69, t65, t0, t70, t71);
    t72 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t72, t4, 0, 0, 18, 0LL);
    xsi_set_current_line(404, ng0);
    t2 = (t0 + 8080);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 10352);
    t13 = (t0 + 3048);
    t19 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    t20 = (t0 + 8880);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 19);

LAB151:    t26 = (t0 + 10448);
    t30 = *((char **)t26);
    t35 = (t30 + 80U);
    t36 = *((char **)t35);
    t37 = (t36 + 272U);
    t45 = *((char **)t37);
    t46 = (t45 + 0U);
    t62 = *((char **)t46);
    t21 = ((int  (*)(char *, char *))t62)(t0, t30);
    if (t21 != 0)
        goto LAB153;

LAB152:    t30 = (t0 + 10448);
    t64 = *((char **)t30);
    t30 = (t0 + 8720);
    t65 = (t30 + 56U);
    t67 = *((char **)t65);
    memcpy(t4, t67, 8);
    t68 = (t0 + 3048);
    t69 = (t0 + 10352);
    t70 = 0;
    xsi_delete_subprogram_invocation(t68, t64, t0, t69, t70);
    t71 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t71, t4, 0, 0, 18, 0LL);
    xsi_set_current_line(405, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(406, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB37:    xsi_set_current_line(348, ng0);

LAB40:    xsi_set_current_line(349, ng0);
    t19 = (t0 + 4160U);
    t20 = *((char **)t19);
    t19 = (t0 + 5840);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng36)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    memset(t22, 0, 8);
    xsi_vlog_signed_greatereq(t22, 32, t3, 32, t4, 32);
    memset(t23, 0, 8);
    t6 = (t22 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t22);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t6) != 0)
        goto LAB43;

LAB44:    t13 = (t23 + 4);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB45;

LAB46:    memcpy(t31, t23, 8);

LAB47:    t62 = (t0 + 6160);
    xsi_vlogvar_wait_assign_value(t62, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(351, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng36)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t3, 32, t2, 32);
    memset(t22, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t6) != 0)
        goto LAB57;

LAB58:    t13 = (t22 + 4);
    t14 = *((unsigned int *)t22);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB59;

LAB60:    memcpy(t25, t22, 8);

LAB61:    t62 = (t0 + 6320);
    xsi_vlogvar_wait_assign_value(t62, t25, 0, 0, 1, 0LL);
    xsi_set_current_line(352, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng36)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t3, 32, t4, 32);
    memset(t23, 0, 8);
    t6 = (t22 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t22);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t6) != 0)
        goto LAB71;

LAB72:    t13 = (t23 + 4);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB73;

LAB74:    memcpy(t63, t23, 8);

LAB75:    t62 = (t0 + 6480);
    xsi_vlogvar_wait_assign_value(t62, t63, 0, 0, 1, 0LL);
    xsi_set_current_line(353, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng37)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t3, 32, t2, 32);
    t6 = (t0 + 6640);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(354, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 5520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB39;

LAB41:    *((unsigned int *)t23) = 1;
    goto LAB44;

LAB43:    t12 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB44;

LAB45:    t19 = (t0 + 4160U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng36)));
    memset(t24, 0, 8);
    xsi_vlog_signed_leq(t24, 32, t20, 32, t19, 32);
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    t17 = *((unsigned int *)t26);
    t18 = (~(t17));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t18);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t26) != 0)
        goto LAB50;

LAB51:    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t25);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t23 + 4);
    t36 = (t25 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t25) = 1;
    goto LAB51;

LAB50:    t30 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB51;

LAB52:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t23 + 4);
    t46 = (t25 + 4);
    t47 = *((unsigned int *)t23);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t25);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t21 = (t48 & t50);
    t55 = (t52 & t54);
    t56 = (~(t21));
    t57 = (~(t55));
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t56);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    goto LAB54;

LAB55:    *((unsigned int *)t22) = 1;
    goto LAB58;

LAB57:    t12 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB58;

LAB59:    t19 = (t0 + 4160U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng37)));
    memset(t23, 0, 8);
    xsi_vlog_signed_leq(t23, 32, t20, 32, t19, 32);
    memset(t24, 0, 8);
    t26 = (t23 + 4);
    t17 = *((unsigned int *)t26);
    t18 = (~(t17));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t18);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t26) != 0)
        goto LAB64;

LAB65:    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t24);
    t34 = (t32 & t33);
    *((unsigned int *)t25) = t34;
    t35 = (t22 + 4);
    t36 = (t24 + 4);
    t37 = (t25 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB61;

LAB62:    *((unsigned int *)t24) = 1;
    goto LAB65;

LAB64:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB65;

LAB66:    t43 = *((unsigned int *)t25);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t25) = (t43 | t44);
    t45 = (t22 + 4);
    t46 = (t24 + 4);
    t47 = *((unsigned int *)t22);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t24);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t21 = (t48 & t50);
    t55 = (t52 & t54);
    t56 = (~(t21));
    t57 = (~(t55));
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t60 & t56);
    t61 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t61 & t57);
    goto LAB68;

LAB69:    *((unsigned int *)t23) = 1;
    goto LAB72;

LAB71:    t12 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB72;

LAB73:    t19 = (t0 + 4160U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng37)));
    memset(t24, 0, 8);
    xsi_vlog_signed_unary_minus(t24, 32, t19, 32);
    memset(t25, 0, 8);
    xsi_vlog_signed_greatereq(t25, 32, t20, 32, t24, 32);
    memset(t31, 0, 8);
    t26 = (t25 + 4);
    t17 = *((unsigned int *)t26);
    t18 = (~(t17));
    t27 = *((unsigned int *)t25);
    t28 = (t27 & t18);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t26) != 0)
        goto LAB78;

LAB79:    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 & t33);
    *((unsigned int *)t63) = t34;
    t35 = (t23 + 4);
    t36 = (t31 + 4);
    t37 = (t63 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB75;

LAB76:    *((unsigned int *)t31) = 1;
    goto LAB79;

LAB78:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB79;

LAB80:    t43 = *((unsigned int *)t63);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t63) = (t43 | t44);
    t45 = (t23 + 4);
    t46 = (t31 + 4);
    t47 = *((unsigned int *)t23);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t21 = (t48 & t50);
    t55 = (t52 & t54);
    t56 = (~(t21));
    t57 = (~(t55));
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t60 & t56);
    t61 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t61 & t57);
    goto LAB82;

LAB84:    *((unsigned int *)t4) = 1;
    goto LAB87;

LAB86:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB87;

LAB88:    t26 = (t0 + 6480);
    t30 = (t26 + 56U);
    t35 = *((char **)t30);
    memset(t22, 0, 8);
    t36 = (t35 + 4);
    t18 = *((unsigned int *)t36);
    t27 = (~(t18));
    t28 = *((unsigned int *)t35);
    t29 = (t28 & t27);
    t32 = (t29 & 1U);
    if (t32 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t36) != 0)
        goto LAB93;

LAB94:    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t22);
    t38 = (t33 | t34);
    *((unsigned int *)t23) = t38;
    t45 = (t4 + 4);
    t46 = (t22 + 4);
    t62 = (t23 + 4);
    t39 = *((unsigned int *)t45);
    t40 = *((unsigned int *)t46);
    t41 = (t39 | t40);
    *((unsigned int *)t62) = t41;
    t42 = *((unsigned int *)t62);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB90;

LAB91:    *((unsigned int *)t22) = 1;
    goto LAB94;

LAB93:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB94;

LAB95:    t44 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t62);
    *((unsigned int *)t23) = (t44 | t47);
    t64 = (t4 + 4);
    t65 = (t22 + 4);
    t48 = *((unsigned int *)t64);
    t49 = (~(t48));
    t50 = *((unsigned int *)t4);
    t55 = (t50 & t49);
    t51 = *((unsigned int *)t65);
    t52 = (~(t51));
    t53 = *((unsigned int *)t22);
    t66 = (t53 & t52);
    t54 = (~(t55));
    t56 = (~(t66));
    t57 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t57 & t54);
    t58 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t58 & t56);
    goto LAB97;

LAB98:    xsi_set_current_line(358, ng0);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 6000);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 32, 0LL);
    goto LAB100;

LAB101:    xsi_set_current_line(359, ng0);
    t13 = ((char*)((ng39)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t13, 32);
    t19 = (t0 + 6000);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 32, 0LL);
    goto LAB103;

LAB104:    xsi_set_current_line(360, ng0);
    t13 = ((char*)((ng39)));
    t19 = (t0 + 6000);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 32, 0LL);
    goto LAB106;

LAB107:    xsi_set_current_line(361, ng0);
    t13 = ((char*)((ng40)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t13, 32);
    t19 = (t0 + 6000);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 32, 0LL);
    goto LAB109;

LAB115:    t26 = (t0 + 10544U);
    *((char **)t26) = &&LAB113;
    goto LAB1;

LAB117:    xsi_set_current_line(381, ng0);

LAB120:    xsi_set_current_line(382, ng0);
    t19 = (t0 + 7280);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    t30 = (t0 + 7760);
    t35 = (t30 + 56U);
    t36 = *((char **)t35);
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 19, t26, 19, t36, 19);
    t37 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(382, ng0);
    t2 = (t0 + 7440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7600);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 19, t6, 19, t19, 19);
    t20 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 19, 0LL);
    xsi_set_current_line(383, ng0);
    t2 = (t0 + 6960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7120);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 24, t6, 24, t19, 24);
    t20 = (t0 + 6960);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 24, 0LL);
    goto LAB119;

LAB124:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB125;

LAB126:    *((unsigned int *)t22) = 1;
    goto LAB129;

LAB128:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB129;

LAB130:    t36 = ((char*)((ng47)));
    goto LAB131;

LAB132:    t37 = ((char*)((ng44)));
    goto LAB133;

LAB134:    xsi_vlog_unsigned_bit_combine(t4, 4, t36, 4, t37, 4);
    goto LAB138;

LAB136:    memcpy(t4, t36, 8);
    goto LAB138;

LAB140:    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t36);
    *((unsigned int *)t22) = (t17 | t18);
    goto LAB142;

LAB143:    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t35);
    *((unsigned int *)t22) = (t17 | t18);
    goto LAB145;

LAB150:    t30 = (t0 + 10544U);
    *((char **)t30) = &&LAB148;
    goto LAB1;

LAB153:    t26 = (t0 + 10544U);
    *((char **)t26) = &&LAB151;
    goto LAB1;

}


extern void work_m_00000000001361952619_2567056374_init()
{
	static char *pe[] = {(void *)Cont_307_0,(void *)Cont_308_1,(void *)Cont_309_2,(void *)Always_336_3};
	static char *se[] = {(void *)sp_atan_value,(void *)sp_saturate_q17};
	xsi_register_didat("work_m_00000000001361952619_2567056374", "isim/tb_backemf_port6.exe.sim/work/m_00000000001361952619_2567056374.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
