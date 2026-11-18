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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/validation/backemf5/tb_fmc_literals.v";
static int ng1[] = {180, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "STATIC,%0d,%0d,%0d,%0d,%0d,0x%04h,%0d,%0d,%0d,%0d,%0d";
static int ng4[] = {0, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {16534U, 0U};
static unsigned int ng9[] = {1024U, 0U};
static unsigned int ng10[] = {25476U, 0U};
static int ng11[] = {400, 0};
static int ng12[] = {16384, 0};
static int ng13[] = {4096, 0};
static int ng14[] = {8192, 0};
static int ng15[] = {24576, 0};
static int ng16[] = {800, 0};
static const char *ng17 = "PASS: static observation values generated with actual phase IP";



static int sp_sample(char *t1, char *t2)
{
    char t15[8];
    char t26[16];
    char t36[16];
    char t46[16];
    char t56[16];
    char t66[16];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
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

LAB6:    xsi_set_current_line(21, ng0);
    t4 = (t1 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(21, ng0);
    t4 = (t1 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2520);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(21, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t6 = (t1 + 6744);
    *((int *)t6) = t11;

LAB7:    t7 = (t1 + 6744);
    if (*((int *)t7) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(23, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t6, 32, t7, 32);
    t12 = (t1 + 2840);
    xsi_vlogvar_assign_value(t12, t15, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2360);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 2520);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 2680);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 1640U);
    t22 = *((char **)t21);
    t21 = (t1 + 1640U);
    t23 = *((char **)t21);
    t21 = (t1 + 1480U);
    t25 = *((char **)t21);
    t21 = (t1 + 1440U);
    t27 = (t21 + 72U);
    t28 = *((char **)t27);
    t29 = (t1 + 1440U);
    t30 = (t29 + 48U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t26, 35, t25, t28, t31, 1, 1, t32, 32, 1);
    t34 = (t1 + 1480U);
    t35 = *((char **)t34);
    t34 = (t1 + 1440U);
    t37 = (t34 + 72U);
    t38 = *((char **)t37);
    t39 = (t1 + 1440U);
    t40 = (t39 + 48U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t36, 35, t35, t38, t41, 1, 1, t42, 32, 1);
    t44 = (t1 + 1480U);
    t45 = *((char **)t44);
    t44 = (t1 + 1440U);
    t47 = (t44 + 72U);
    t48 = *((char **)t47);
    t49 = (t1 + 1440U);
    t50 = (t49 + 48U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t46, 35, t45, t48, t51, 1, 1, t52, 32, 1);
    t54 = (t1 + 1480U);
    t55 = *((char **)t54);
    t54 = (t1 + 1440U);
    t57 = (t54 + 72U);
    t58 = *((char **)t57);
    t59 = (t1 + 1440U);
    t60 = (t59 + 48U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t56, 35, t55, t58, t61, 1, 1, t62, 32, 1);
    t64 = (t1 + 1480U);
    t65 = *((char **)t64);
    t64 = (t1 + 1440U);
    t67 = (t64 + 72U);
    t68 = *((char **)t67);
    t69 = (t1 + 1440U);
    t70 = (t69 + 48U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t66, 35, t65, t68, t71, 1, 1, t72, 32, 1);
    t73 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 12, t73, (char)119, t6, 32, (char)119, t13, 16, (char)119, t17, 16, (char)119, t20, 16, (char)119, t22, 16, (char)119, t23, 16, (char)119, t26, 35, (char)119, t36, 35, (char)119, t46, 35, (char)119, t56, 35, (char)119, t66, 35);
    goto LAB4;

LAB8:    xsi_set_current_line(22, ng0);
    t12 = (t2 + 88U);
    t13 = *((char **)t12);
    t14 = (t13 + 16U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB10:    t4 = (t1 + 6744);
    t11 = *((int *)t4);
    *((int *)t4) = (t11 - 1);
    goto LAB7;

}

static void Always_16_0(char *t0)
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

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 2040);
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
    t24 = (t0 + 2040);
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

static void Initial_29_1(char *t0)
{
    char t27[8];
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);

LAB4:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6748);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6748);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng9)));
    t8 = ((char*)((ng10)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB11:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB13:    if (t7 != 0)
        goto LAB14;

LAB9:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB10:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB17:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB19:    if (t7 != 0)
        goto LAB20;

LAB15:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB16:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB23:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB25:    if (t7 != 0)
        goto LAB26;

LAB21:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB22:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB29:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB31:    if (t7 != 0)
        goto LAB32;

LAB27:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB28:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB35:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB37:    if (t7 != 0)
        goto LAB38;

LAB33:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB34:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB41:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB43:    if (t7 != 0)
        goto LAB44;

LAB39:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB40:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng14)));
    memset(t27, 0, 8);
    xsi_vlog_signed_unary_minus(t27, 32, t2, 32);
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t27, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB47:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB49:    if (t7 != 0)
        goto LAB50;

LAB45:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB46:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng11)));
    memset(t27, 0, 8);
    xsi_vlog_signed_unary_minus(t27, 32, t3, 32);
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t27, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB53:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB55:    if (t7 != 0)
        goto LAB56;

LAB51:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB52:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng16)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB59:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB61:    if (t7 != 0)
        goto LAB62;

LAB57:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB58:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng14)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB65:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB67:    if (t7 != 0)
        goto LAB68;

LAB63:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB64:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng4)));
    t8 = ((char*)((ng12)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB71:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB73:    if (t7 != 0)
        goto LAB74;

LAB69:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB70:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng11)));
    t8 = ((char*)((ng4)));
    t9 = (t0 + 4296);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 3320);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB77:    t15 = (t0 + 4392);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB79:    if (t7 != 0)
        goto LAB80;

LAB75:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB76:    t23 = (t0 + 4392);
    t24 = *((char **)t23);
    t23 = (t0 + 848);
    t25 = (t0 + 4296);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(44, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(45, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(30, ng0);
    t10 = (t0 + 4840);
    *((int *)t10) = 1;
    t11 = (t0 + 4520);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 6748);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB12:;
LAB14:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB11;
    goto LAB1;

LAB18:;
LAB20:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB17;
    goto LAB1;

LAB24:;
LAB26:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB23;
    goto LAB1;

LAB30:;
LAB32:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB29;
    goto LAB1;

LAB36:;
LAB38:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB35;
    goto LAB1;

LAB42:;
LAB44:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB41;
    goto LAB1;

LAB48:;
LAB50:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB47;
    goto LAB1;

LAB54:;
LAB56:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB53;
    goto LAB1;

LAB60:;
LAB62:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB59;
    goto LAB1;

LAB66:;
LAB68:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB65;
    goto LAB1;

LAB72:;
LAB74:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB71;
    goto LAB1;

LAB78:;
LAB80:    t15 = (t0 + 4488U);
    *((char **)t15) = &&LAB77;
    goto LAB1;

}


extern void work_m_00000000001348617588_2157523092_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Initial_29_1};
	static char *se[] = {(void *)sp_sample};
	xsi_register_didat("work_m_00000000001348617588_2157523092", "isim/test.exe.sim/work/m_00000000001348617588_2157523092.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
