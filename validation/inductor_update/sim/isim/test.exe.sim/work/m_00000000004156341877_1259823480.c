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
static const char *ng0 = "E:/SUEN27/vir5_PMSM/BackEMF.v";
static unsigned int ng1[] = {43691U, 0U};
static unsigned int ng2[] = {87381U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {6, 0};
static int ng5[] = {7, 0};
static int ng6[] = {11, 0};
static int ng7[] = {14, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {0, 0};
static int ng10[] = {17, 0};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {12, 0};
static int ng14[] = {1, 0};
static int ng15[] = {2, 0};
static unsigned int ng16[] = {0U, 0U, 0U, 0U};
static unsigned int ng17[] = {18U, 0U};
static unsigned int ng18[] = {3U, 0U};
static unsigned int ng19[] = {4U, 0U};
static unsigned int ng20[] = {6U, 0U};
static unsigned int ng21[] = {7U, 0U};
static unsigned int ng22[] = {9U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {13U, 0U};
static unsigned int ng25[] = {15U, 0U};
static int ng26[] = {15, 0};



static void NetDecl_41_0(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 8400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 16192);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 262143U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 17U);
    t16 = (t0 + 15664);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_42_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 8648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 18, t3, 18, t2, 18);
    t5 = (t0 + 16256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 262143U;
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
    xsi_driver_vfirst_trans(t5, 0, 17U);
    t18 = (t0 + 15680);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_43_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 8896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 18, t3, 18, t2, 18);
    t5 = (t0 + 16320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 262143U;
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
    xsi_driver_vfirst_trans(t5, 0, 17U);
    t18 = (t0 + 15696);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_46_3(char *t0)
{
    char t3[8];
    char t6[8];
    char t9[8];
    char t12[8];
    char t20[8];
    char t21[8];
    char t25[8];
    char t28[8];
    char t36[8];
    char t37[8];
    char t41[8];
    char t44[8];
    char t52[8];
    char t53[8];
    char t57[8];
    char t60[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 9144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 16, t2, 16);
    t4 = ((char*)((ng3)));
    t7 = (t0 + 1960U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng4)));
    t10 = (t0 + 1960U);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    t10 = (t12 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t10) = t19;
    xsi_vlog_mul_concat(t9, 6, 1, t7, 1U, t12, 1);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t9, 6, t8, 16, t4, 10);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t3, 32, t6, 32);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 1960U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng5)));
    t26 = (t0 + 1960U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 15);
    t32 = (t31 & 1);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t26) = t35;
    xsi_vlog_mul_concat(t25, 7, 1, t23, 1U, t28, 1);
    xsi_vlogtype_concat(t21, 32, 32, 3U, t25, 7, t24, 16, t22, 9);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t20, 32, t21, 32);
    t38 = ((char*)((ng3)));
    t39 = (t0 + 1960U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng6)));
    t42 = (t0 + 1960U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t42 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t42) = t51;
    xsi_vlog_mul_concat(t41, 11, 1, t39, 1U, t44, 1);
    xsi_vlogtype_concat(t37, 32, 32, 3U, t41, 11, t40, 16, t38, 5);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t36, 32, t37, 32);
    t54 = ((char*)((ng3)));
    t55 = (t0 + 1960U);
    t56 = *((char **)t55);
    t55 = ((char*)((ng7)));
    t58 = (t0 + 1960U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t58 = (t60 + 4);
    t61 = (t59 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 15);
    t64 = (t63 & 1);
    *((unsigned int *)t60) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 15);
    t67 = (t66 & 1);
    *((unsigned int *)t58) = t67;
    xsi_vlog_mul_concat(t57, 14, 1, t55, 1U, t60, 1);
    xsi_vlogtype_concat(t53, 32, 32, 3U, t57, 14, t56, 16, t54, 2);
    memset(t68, 0, 8);
    xsi_vlog_unsigned_add(t68, 32, t52, 32, t53, 32);
    t69 = (t0 + 16384);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memcpy(t73, t68, 8);
    xsi_driver_vfirst_trans(t69, 0, 31U);
    t74 = (t0 + 15712);
    *((int *)t74) = 1;

LAB1:    return;
}

static void NetDecl_51_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2760U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 14);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 14);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 262143U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 262143U);
    t12 = (t0 + 16448);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 262143U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 17U);
    t25 = (t0 + 15728);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_57_5(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 9640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 16512);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 262143U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 36, 53);
    t16 = (t0 + 15744);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_58_6(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 9888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t0 + 16576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 262143U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 18, 35);
    t16 = (t0 + 15760);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_59_7(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 10136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2600U);
    t3 = *((char **)t2);
    t2 = (t0 + 16640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 262143U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 17);
    t16 = (t0 + 15776);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_76_8(char *t0)
{
    char t4[8];
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

LAB0:    t1 = (t0 + 10384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 15792);
    *((int *)t2) = 1;
    t3 = (t0 + 10416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 1480U);
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

LAB11:    xsi_set_current_line(80, ng0);

LAB14:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 5880);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    xsi_vlog_signed_not_equal(t4, 18, t3, 18, t6, 18);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(85, ng0);

LAB19:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(77, ng0);

LAB13:    xsi_set_current_line(78, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 18, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(83, ng0);

LAB18:    xsi_set_current_line(84, ng0);
    t13 = ((char*)((ng8)));
    t19 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 1, 0LL);
    goto LAB17;

}

static void Cont_95_9(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 10632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 7, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 7, t6, 18, t2, 7);
    t29 = (t0 + 16704);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 64, 95);
    t34 = (t0 + 15808);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_96_10(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 10880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 9, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 9, t6, 18, t2, 5);
    t29 = (t0 + 16768);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 64, 95);
    t34 = (t0 + 15824);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_97_11(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 11128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng12)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 10, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 10, t6, 18, t2, 4);
    t29 = (t0 + 16832);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 64, 95);
    t34 = (t0 + 15840);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_98_12(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 11376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng13)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 12, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 12, t6, 18, t2, 2);
    t29 = (t0 + 16896);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 64, 95);
    t34 = (t0 + 15856);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_99_13(char *t0)
{
    char t4[8];
    char t13[8];
    char t20[8];
    char t23[8];
    char t30[8];
    char t33[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 11624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3400U);
    t3 = *((char **)t2);
    t2 = (t0 + 3360U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3360U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 1, 1, t10, 32, 1);
    t11 = (t0 + 3560U);
    t12 = *((char **)t11);
    t11 = (t0 + 3520U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 3520U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t12, t15, t18, 1, 1, t19, 32, 1);
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t13, 32);
    t21 = (t0 + 3720U);
    t22 = *((char **)t21);
    t21 = (t0 + 3680U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3680U);
    t27 = (t26 + 48U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t23, 32, t22, t25, t28, 1, 1, t29, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t20, 32, t23, 32);
    t31 = (t0 + 3880U);
    t32 = *((char **)t31);
    t31 = (t0 + 3840U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 3840U);
    t37 = (t36 + 48U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t32, t35, t38, 1, 1, t39, 32, 1);
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t30, 32, t33, 32);
    t41 = (t0 + 16960);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t40, 8);
    xsi_driver_vfirst_trans(t41, 64, 95);
    t46 = (t0 + 15872);
    *((int *)t46) = 1;

LAB1:    return;
}

static void Cont_95_14(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 11872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 7, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 7, t6, 18, t2, 7);
    t29 = (t0 + 17024);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 32, 63);
    t34 = (t0 + 15888);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_96_15(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 12120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 9, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 9, t6, 18, t2, 5);
    t29 = (t0 + 17088);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 32, 63);
    t34 = (t0 + 15904);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_97_16(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 12368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng12)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 10, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 10, t6, 18, t2, 4);
    t29 = (t0 + 17152);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 32, 63);
    t34 = (t0 + 15920);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_98_17(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 12616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng13)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 12, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 12, t6, 18, t2, 2);
    t29 = (t0 + 17216);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 32, 63);
    t34 = (t0 + 15936);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_99_18(char *t0)
{
    char t4[8];
    char t13[8];
    char t20[8];
    char t23[8];
    char t30[8];
    char t33[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 12864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3400U);
    t3 = *((char **)t2);
    t2 = (t0 + 3360U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3360U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 1, 1, t10, 32, 1);
    t11 = (t0 + 3560U);
    t12 = *((char **)t11);
    t11 = (t0 + 3520U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 3520U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t12, t15, t18, 1, 1, t19, 32, 1);
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t13, 32);
    t21 = (t0 + 3720U);
    t22 = *((char **)t21);
    t21 = (t0 + 3680U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3680U);
    t27 = (t26 + 48U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t23, 32, t22, t25, t28, 1, 1, t29, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t20, 32, t23, 32);
    t31 = (t0 + 3880U);
    t32 = *((char **)t31);
    t31 = (t0 + 3840U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 3840U);
    t37 = (t36 + 48U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t32, t35, t38, 1, 1, t39, 32, 1);
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t30, 32, t33, 32);
    t41 = (t0 + 17280);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t40, 8);
    xsi_driver_vfirst_trans(t41, 32, 63);
    t46 = (t0 + 15952);
    *((int *)t46) = 1;

LAB1:    return;
}

static void Cont_95_19(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 13112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 7, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 7, t6, 18, t2, 7);
    t29 = (t0 + 17344);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 0, 31);
    t34 = (t0 + 15968);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_96_20(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 13360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 9, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 9, t6, 18, t2, 5);
    t29 = (t0 + 17408);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 0, 31);
    t34 = (t0 + 15984);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_97_21(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 13608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng12)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 10, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 10, t6, 18, t2, 4);
    t29 = (t0 + 17472);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 0, 31);
    t34 = (t0 + 16000);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_98_22(char *t0)
{
    char t3[8];
    char t6[8];
    char t13[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
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
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 13856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3080U);
    t5 = *((char **)t4);
    t4 = (t0 + 3040U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3040U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t14 = ((char*)((ng13)));
    t15 = (t0 + 3080U);
    t16 = *((char **)t15);
    t15 = (t0 + 3040U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3040U);
    t21 = (t20 + 48U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t17, 18, t16, t19, t22, 2, 1, t23, 32, 1);
    t25 = (t0 + 3040U);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t24, 1, t17, t27, 2, t28, 32, 1);
    xsi_vlog_mul_concat(t13, 12, 1, t14, 1U, t24, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t13, 12, t6, 18, t2, 2);
    t29 = (t0 + 17536);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t3, 8);
    xsi_driver_vfirst_trans(t29, 0, 31);
    t34 = (t0 + 16016);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_99_23(char *t0)
{
    char t4[8];
    char t13[8];
    char t20[8];
    char t23[8];
    char t30[8];
    char t33[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 14104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3400U);
    t3 = *((char **)t2);
    t2 = (t0 + 3360U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3360U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 1, 1, t10, 32, 1);
    t11 = (t0 + 3560U);
    t12 = *((char **)t11);
    t11 = (t0 + 3520U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 3520U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t12, t15, t18, 1, 1, t19, 32, 1);
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t13, 32);
    t21 = (t0 + 3720U);
    t22 = *((char **)t21);
    t21 = (t0 + 3680U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 3680U);
    t27 = (t26 + 48U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t23, 32, t22, t25, t28, 1, 1, t29, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t20, 32, t23, 32);
    t31 = (t0 + 3880U);
    t32 = *((char **)t31);
    t31 = (t0 + 3840U);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 3840U);
    t37 = (t36 + 48U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t32, t35, t38, 1, 1, t39, 32, 1);
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t30, 32, t33, 32);
    t41 = (t0 + 17600);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t40, 8);
    xsi_driver_vfirst_trans(t41, 0, 31);
    t46 = (t0 + 16032);
    *((int *)t46) = 1;

LAB1:    return;
}

static void NetDecl_117_24(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 14352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4040U);
    t4 = *((char **)t2);
    t2 = (t0 + 4000U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4000U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t5, 18, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 18, t5, 18);
    t12 = (t0 + 17664);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 262143U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 17U);
    t25 = (t0 + 16048);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_118_25(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 14600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4040U);
    t4 = *((char **)t2);
    t2 = (t0 + 4000U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4000U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t5, 18, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 18, t5, 18);
    t12 = (t0 + 17728);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 262143U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 17U);
    t25 = (t0 + 16064);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_119_26(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 14848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4040U);
    t4 = *((char **)t2);
    t2 = (t0 + 4000U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4000U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t5, 18, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 18, t5, 18);
    t12 = (t0 + 17792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 262143U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 17U);
    t25 = (t0 + 16080);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_154_27(char *t0)
{
    char t4[8];
    char t31[16];
    char t32[8];
    char t33[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 15096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 16096);
    *((int *)t2) = 1;
    t3 = (t0 + 15128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(154, ng0);

LAB5:    xsi_set_current_line(155, ng0);
    t5 = (t0 + 1480U);
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

LAB11:    xsi_set_current_line(169, ng0);

LAB14:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng17)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(172, ng0);

LAB23:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB21:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB24:    t6 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 5);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(217, ng0);

LAB58:
LAB47:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(155, ng0);

LAB13:    xsi_set_current_line(156, ng0);
    t19 = ((char*)((ng8)));
    t20 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    goto LAB12;

LAB17:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(170, ng0);

LAB22:    xsi_set_current_line(171, ng0);
    t28 = ((char*)((ng8)));
    t29 = (t0 + 6040);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    goto LAB21;

LAB25:    xsi_set_current_line(177, ng0);

LAB48:    xsi_set_current_line(178, ng0);
    t12 = (t0 + 1800U);
    t13 = *((char **)t12);
    t12 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 4360U);
    t3 = *((char **)t2);
    t2 = (t0 + 6680);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4520U);
    t3 = *((char **)t2);
    t2 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4680U);
    t3 = *((char **)t2);
    t2 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB47;

LAB27:    xsi_set_current_line(184, ng0);

LAB49:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 4840U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 13);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 13);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 262143U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 262143U);
    t13 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 18, 0LL);
    goto LAB47;

LAB29:    xsi_set_current_line(187, ng0);

LAB50:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 7480);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 18, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 18, 0LL);
    goto LAB47;

LAB31:    xsi_set_current_line(191, ng0);

LAB51:    xsi_set_current_line(192, ng0);
    t3 = (t0 + 4840U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 8);
    *((unsigned int *)t3) = t10;
    t13 = (t6 + 8);
    t19 = (t6 + 12);
    t11 = *((unsigned int *)t13);
    t14 = (t11 << 24);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 | t14);
    t16 = *((unsigned int *)t19);
    t17 = (t16 << 24);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 | t17);
    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 268435455U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 268435455U);
    t20 = ((char*)((ng5)));
    t28 = (t0 + 4840U);
    t29 = *((char **)t28);
    memset(t33, 0, 8);
    t28 = (t33 + 4);
    t34 = (t29 + 8);
    t35 = (t29 + 12);
    t23 = *((unsigned int *)t34);
    t24 = (t23 >> 3);
    t25 = (t24 & 1);
    *((unsigned int *)t33) = t25;
    t26 = *((unsigned int *)t35);
    t27 = (t26 >> 3);
    t36 = (t27 & 1);
    *((unsigned int *)t28) = t36;
    xsi_vlog_mul_concat(t32, 7, 1, t20, 1U, t33, 1);
    xsi_vlogtype_concat(t31, 35, 35, 2U, t32, 7, t4, 28);
    t37 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t37, t31, 0, 0, 35, 0LL);
    goto LAB47;

LAB33:    xsi_set_current_line(194, ng0);

LAB52:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 7480);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 18, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 18, 0LL);
    goto LAB47;

LAB35:    xsi_set_current_line(198, ng0);

LAB53:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 4840U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 8);
    *((unsigned int *)t3) = t10;
    t13 = (t6 + 8);
    t19 = (t6 + 12);
    t11 = *((unsigned int *)t13);
    t14 = (t11 << 24);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 | t14);
    t16 = *((unsigned int *)t19);
    t17 = (t16 << 24);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 | t17);
    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 268435455U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 268435455U);
    t20 = ((char*)((ng5)));
    t28 = (t0 + 4840U);
    t29 = *((char **)t28);
    memset(t33, 0, 8);
    t28 = (t33 + 4);
    t34 = (t29 + 8);
    t35 = (t29 + 12);
    t23 = *((unsigned int *)t34);
    t24 = (t23 >> 3);
    t25 = (t24 & 1);
    *((unsigned int *)t33) = t25;
    t26 = *((unsigned int *)t35);
    t27 = (t26 >> 3);
    t36 = (t27 & 1);
    *((unsigned int *)t28) = t36;
    xsi_vlog_mul_concat(t32, 7, 1, t20, 1U, t33, 1);
    xsi_vlogtype_concat(t31, 35, 35, 2U, t32, 7, t4, 28);
    t37 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t37, t31, 0, 0, 35, 0LL);
    goto LAB47;

LAB37:    xsi_set_current_line(201, ng0);

LAB54:    xsi_set_current_line(202, ng0);
    t3 = (t0 + 7480);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 18, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 18, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(205, ng0);

LAB55:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 4840U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 8);
    *((unsigned int *)t3) = t10;
    t13 = (t6 + 8);
    t19 = (t6 + 12);
    t11 = *((unsigned int *)t13);
    t14 = (t11 << 24);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 | t14);
    t16 = *((unsigned int *)t19);
    t17 = (t16 << 24);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 | t17);
    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 268435455U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 268435455U);
    t20 = ((char*)((ng5)));
    t28 = (t0 + 4840U);
    t29 = *((char **)t28);
    memset(t33, 0, 8);
    t28 = (t33 + 4);
    t34 = (t29 + 8);
    t35 = (t29 + 12);
    t23 = *((unsigned int *)t34);
    t24 = (t23 >> 3);
    t25 = (t24 & 1);
    *((unsigned int *)t33) = t25;
    t26 = *((unsigned int *)t35);
    t27 = (t26 >> 3);
    t36 = (t27 & 1);
    *((unsigned int *)t28) = t36;
    xsi_vlog_mul_concat(t32, 7, 1, t20, 1U, t33, 1);
    xsi_vlogtype_concat(t31, 35, 35, 2U, t32, 7, t4, 28);
    t37 = (t0 + 6520);
    xsi_vlogvar_wait_assign_value(t37, t31, 0, 0, 35, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(208, ng0);

LAB56:    xsi_set_current_line(209, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(212, ng0);

LAB57:    xsi_set_current_line(213, ng0);
    t3 = (t0 + 6200);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 5240);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 35, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 6360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5400);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 6520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    goto LAB47;

}

static void Cont_225_28(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 15344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng26)));
    xsi_vlog_signed_arith_rshift(t6, 35, t4, 35, t5, 32);
    t7 = (t0 + 17856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t6, 0, 16);
    xsi_driver_vfirst_trans(t7, 0, 15);
    t12 = (t0 + 16112);
    *((int *)t12) = 1;

LAB1:    return;
}


extern void work_m_00000000004156341877_1259823480_init()
{
	static char *pe[] = {(void *)NetDecl_41_0,(void *)NetDecl_42_1,(void *)NetDecl_43_2,(void *)NetDecl_46_3,(void *)NetDecl_51_4,(void *)Cont_57_5,(void *)Cont_58_6,(void *)Cont_59_7,(void *)Always_76_8,(void *)Cont_95_9,(void *)Cont_96_10,(void *)Cont_97_11,(void *)Cont_98_12,(void *)Cont_99_13,(void *)Cont_95_14,(void *)Cont_96_15,(void *)Cont_97_16,(void *)Cont_98_17,(void *)Cont_99_18,(void *)Cont_95_19,(void *)Cont_96_20,(void *)Cont_97_21,(void *)Cont_98_22,(void *)Cont_99_23,(void *)NetDecl_117_24,(void *)NetDecl_118_25,(void *)NetDecl_119_26,(void *)Always_154_27,(void *)Cont_225_28};
	xsi_register_didat("work_m_00000000004156341877_1259823480", "isim/test.exe.sim/work/m_00000000004156341877_1259823480.didat");
	xsi_register_executes(pe);
}
