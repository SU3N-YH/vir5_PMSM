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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/BackEMF.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {7, 0};
static int ng3[] = {5, 0};
static int ng4[] = {4, 0};
static int ng5[] = {2, 0};
static int ng6[] = {6, 0};
static int ng7[] = {11, 0};
static int ng8[] = {14, 0};
static unsigned int ng9[] = {18U, 0U};
static unsigned int ng10[] = {4718592U, 0U};
static unsigned int ng11[] = {9437184U, 0U};
static unsigned int ng12[] = {14155776U, 0U};
static unsigned int ng13[] = {18874368U, 0U};
static int ng14[] = {0, 0};
static unsigned int ng15[] = {131072U, 0U};
static unsigned int ng16[] = {131071U, 0U};
static int ng17[] = {1, 0};
static int ng18[] = {3, 0};
static unsigned int ng19[] = {1U, 0U};
static unsigned int ng20[] = {0U, 0U, 0U, 0U};
static int ng21[] = {17, 0};
static unsigned int ng22[] = {3U, 0U};
static unsigned int ng23[] = {4U, 0U};
static unsigned int ng24[] = {6U, 0U};
static unsigned int ng25[] = {7U, 0U};
static unsigned int ng26[] = {9U, 0U};
static unsigned int ng27[] = {10U, 0U};
static unsigned int ng28[] = {12U, 0U};
static unsigned int ng29[] = {13U, 0U};
static unsigned int ng30[] = {15U, 0U};
static unsigned int ng31[] = {16U, 0U};
static int ng32[] = {15, 0};



static void NetDecl_40_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 7328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 18, 18, 2U, t5, 16, t2, 2);
    t4 = (t0 + 13984);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 262143U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 17U);
    t18 = (t0 + 13600);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_41_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 7576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 18, 18, 2U, t5, 16, t2, 2);
    t4 = (t0 + 14048);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 262143U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 17U);
    t18 = (t0 + 13616);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_45_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 7824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 131071U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 131071U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 15, t4, 17);
    t14 = (t0 + 14112);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31U);
    t19 = (t0 + 13632);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_46_3(char *t0)
{
    char t4[8];
    char t7[8];
    char t8[8];
    char t11[8];
    char t12[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_arith_lshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2328U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_arith_lshift(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 2328U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_arith_lshift(t11, 32, t10, 32, t9, 32);
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t11, 32);
    t13 = (t0 + 2328U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_arith_lshift(t15, 32, t14, 32, t13, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t12, 32, t15, 32);
    t17 = (t0 + 14176);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8);
    xsi_driver_vfirst_trans(t17, 0, 31U);
    t22 = (t0 + 13648);
    *((int *)t22) = 1;

LAB1:    return;
}

static void NetDecl_50_4(char *t0)
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

LAB0:    t1 = (t0 + 8320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 16, t2, 16);
    t4 = ((char*)((ng1)));
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng6)));
    t10 = (t0 + 1688U);
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
    t22 = ((char*)((ng1)));
    t23 = (t0 + 1688U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng2)));
    t26 = (t0 + 1688U);
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
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1688U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng7)));
    t42 = (t0 + 1688U);
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
    t54 = ((char*)((ng1)));
    t55 = (t0 + 1688U);
    t56 = *((char **)t55);
    t55 = ((char*)((ng8)));
    t58 = (t0 + 1688U);
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
    t69 = (t0 + 14240);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memcpy(t73, t68, 8);
    xsi_driver_vfirst_trans(t69, 0, 31U);
    t74 = (t0 + 13664);
    *((int *)t74) = 1;

LAB1:    return;
}

static void NetDecl_56_5(char *t0)
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

LAB0:    t1 = (t0 + 8568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2648U);
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
    t12 = (t0 + 14304);
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
    t25 = (t0 + 13680);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_61_6(char *t0)
{
    char t6[8];
    char t22[8];
    char t34[8];
    char t45[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;

LAB0:    t1 = (t0 + 8816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t53, t22, 8);

LAB14:    t85 = (t0 + 14368);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memset(t89, 0, 8);
    t90 = 1U;
    t91 = t90;
    t92 = (t53 + 4);
    t93 = *((unsigned int *)t53);
    t90 = (t90 & t93);
    t94 = *((unsigned int *)t92);
    t91 = (t91 & t94);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 | t90);
    t97 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t97 | t91);
    xsi_driver_vfirst_trans(t85, 0, 0U);
    t98 = (t0 + 13696);
    *((int *)t98) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 5288);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t38) == 0)
        goto LAB15;

LAB17:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB18:    memset(t45, 0, 8);
    t46 = (t34 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t34);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t46) != 0)
        goto LAB21;

LAB22:    t54 = *((unsigned int *)t22);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t57 = (t22 + 4);
    t58 = (t45 + 4);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t34) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t45) = 1;
    goto LAB22;

LAB21:    t52 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB23:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t22 + 4);
    t68 = (t45 + 4);
    t69 = *((unsigned int *)t22);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t45);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t77 = (t70 & t72);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t79);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t83 & t79);
    t84 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t84 & t80);
    goto LAB25;

}

static void Cont_69_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 9064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 128, 159);

LAB1:    return;
}

static void Cont_70_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 9312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 14496);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 96, 127);

LAB1:    return;
}

static void Cont_71_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 9560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 14560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 64, 95);

LAB1:    return;
}

static void Cont_72_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 9808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 14624);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 32, 63);

LAB1:    return;
}

static void Cont_73_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 10056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 14688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Cont_78_12(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 10304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3408U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3408U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t3, 32, t5, 32);
    t13 = (t0 + 14752);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 8);
    xsi_driver_vfirst_trans(t13, 128, 159);
    t18 = (t0 + 13712);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_86_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t31[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 10552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3568U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t13 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 18, t6, 18, t13, 18);
    memset(t4, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t41 = (t0 + 14816);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 262143U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 72, 89);
    t54 = (t0 + 13728);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t26 = ((char*)((ng16)));
    goto LAB9;

LAB10:    t32 = (t0 + 3608U);
    t33 = *((char **)t32);
    t32 = (t0 + 3568U);
    t35 = (t32 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 3568U);
    t38 = (t37 + 48U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t34, 18, t33, t36, t39, 1, 1, t40, 32, 1);
    memset(t31, 0, 8);
    xsi_vlog_signed_unary_minus(t31, 18, t34, 18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 18, t26, 18, t31, 18);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_78_14(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 10800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3408U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3408U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t3, 32, t5, 32);
    t13 = (t0 + 14880);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 8);
    xsi_driver_vfirst_trans(t13, 96, 127);
    t18 = (t0 + 13744);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_86_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t31[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 11048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3568U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t13 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 18, t6, 18, t13, 18);
    memset(t4, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t41 = (t0 + 14944);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 262143U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 54, 71);
    t54 = (t0 + 13760);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t26 = ((char*)((ng16)));
    goto LAB9;

LAB10:    t32 = (t0 + 3608U);
    t33 = *((char **)t32);
    t32 = (t0 + 3568U);
    t35 = (t32 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 3568U);
    t38 = (t37 + 48U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t34, 18, t33, t36, t39, 1, 1, t40, 32, 1);
    memset(t31, 0, 8);
    xsi_vlog_signed_unary_minus(t31, 18, t34, 18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 18, t26, 18, t31, 18);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_78_16(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 11296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3408U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3408U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t3, 32, t5, 32);
    t13 = (t0 + 15008);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 8);
    xsi_driver_vfirst_trans(t13, 64, 95);
    t18 = (t0 + 13776);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_86_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t31[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 11544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3568U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t13 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 18, t6, 18, t13, 18);
    memset(t4, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t41 = (t0 + 15072);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 262143U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 36, 53);
    t54 = (t0 + 13792);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t26 = ((char*)((ng16)));
    goto LAB9;

LAB10:    t32 = (t0 + 3608U);
    t33 = *((char **)t32);
    t32 = (t0 + 3568U);
    t35 = (t32 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 3568U);
    t38 = (t37 + 48U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t34, 18, t33, t36, t39, 1, 1, t40, 32, 1);
    memset(t31, 0, 8);
    xsi_vlog_signed_unary_minus(t31, 18, t34, 18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 18, t26, 18, t31, 18);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_78_18(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 11792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3408U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3408U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t3, 32, t5, 32);
    t13 = (t0 + 15136);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 8);
    xsi_driver_vfirst_trans(t13, 32, 63);
    t18 = (t0 + 13808);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_86_19(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t31[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 12040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3568U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t13 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 18, t6, 18, t13, 18);
    memset(t4, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t41 = (t0 + 15200);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 262143U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 18, 35);
    t54 = (t0 + 13824);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t26 = ((char*)((ng16)));
    goto LAB9;

LAB10:    t32 = (t0 + 3608U);
    t33 = *((char **)t32);
    t32 = (t0 + 3568U);
    t35 = (t32 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 3568U);
    t38 = (t37 + 48U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t34, 18, t33, t36, t39, 1, 1, t40, 32, 1);
    memset(t31, 0, 8);
    xsi_vlog_signed_unary_minus(t31, 18, t34, 18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 18, t26, 18, t31, 18);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Cont_78_20(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 12288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3408U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3408U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t7, t10, 1, 1, t11, 32, 1);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t3, 32, t5, 32);
    t13 = (t0 + 15264);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 13840);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_86_21(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t31[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 12536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3568U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 18, t5, t8, t11, 1, 1, t12, 32, 1);
    t13 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 18, t6, 18, t13, 18);
    memset(t4, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB8;

LAB9:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t31, 8);

LAB16:    t41 = (t0 + 15328);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 262143U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 17);
    t54 = (t0 + 13856);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t26 = ((char*)((ng16)));
    goto LAB9;

LAB10:    t32 = (t0 + 3608U);
    t33 = *((char **)t32);
    t32 = (t0 + 3568U);
    t35 = (t32 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 3568U);
    t38 = (t37 + 48U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t34, 18, t33, t36, t39, 1, 1, t40, 32, 1);
    memset(t31, 0, 8);
    xsi_vlog_signed_unary_minus(t31, 18, t34, 18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 18, t26, 18, t31, 18);
    goto LAB16;

LAB14:    memcpy(t3, t26, 8);
    goto LAB16;

}

static void Always_99_22(char *t0)
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

LAB0:    t1 = (t0 + 12784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 13872);
    *((int *)t2) = 1;
    t3 = (t0 + 12816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
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

LAB11:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 | t8);
    if (t9 != 31U)
        goto LAB14;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB14:    t6 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(101, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB17:    xsi_set_current_line(103, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(105, ng0);
    t5 = ((char*)((ng19)));
    t6 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB22;

}

static void Always_129_23(char *t0)
{
    char t4[8];
    char t31[16];
    char t32[8];
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
    char *t33;

LAB0:    t1 = (t0 + 13032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 13888);
    *((int *)t2) = 1;
    t3 = (t0 + 13064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(129, ng0);

LAB5:    xsi_set_current_line(130, ng0);
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

LAB11:    xsi_set_current_line(144, ng0);

LAB14:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
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

LAB20:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng19)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB21:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB22:    t6 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 5);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng27)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng28)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng29)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng30)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng31)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t30 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(191, ng0);

LAB61:
LAB49:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(130, ng0);

LAB13:    xsi_set_current_line(131, ng0);
    t19 = ((char*)((ng19)));
    t20 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    goto LAB12;

LAB17:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(146, ng0);
    t28 = ((char*)((ng19)));
    t29 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(151, ng0);

LAB50:    xsi_set_current_line(152, ng0);
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    t12 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    t6 = (t0 + 2808U);
    t12 = *((char **)t6);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 17);
    t9 = (t8 & 1);
    *((unsigned int *)t32) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 17);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    xsi_vlog_mul_concat(t4, 17, 1, t2, 1U, t32, 1);
    xsi_vlogtype_concat(t31, 35, 35, 2U, t4, 17, t3, 18);
    t19 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t19, t31, 0, 0, 35, 0LL);
    goto LAB49;

LAB25:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 3928U);
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
    t13 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 18, 0LL);
    goto LAB49;

LAB27:    xsi_set_current_line(156, ng0);

LAB51:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 3768U);
    t6 = *((char **)t3);
    t3 = (t0 + 3728U);
    t12 = (t3 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 3728U);
    t20 = (t19 + 48U);
    t28 = *((char **)t20);
    t29 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t13, t28, 1, 1, t29, 32, 1);
    t33 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 18, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng21)));
    t13 = (t0 + 5768);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t28 = (t32 + 4);
    t29 = (t20 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (t7 >> 17);
    t9 = (t8 & 1);
    *((unsigned int *)t32) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 17);
    t14 = (t11 & 1);
    *((unsigned int *)t28) = t14;
    xsi_vlog_mul_concat(t4, 17, 1, t12, 1U, t32, 1);
    xsi_vlogtype_concat(t31, 35, 35, 2U, t4, 17, t6, 18);
    t33 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t33, t31, 0, 0, 35, 0LL);
    goto LAB49;

LAB29:    xsi_set_current_line(160, ng0);

LAB52:    xsi_set_current_line(161, ng0);
    t3 = (t0 + 3928U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t31, 35, t6, 42, 8);
    t3 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 35, 0LL);
    goto LAB49;

LAB31:    xsi_set_current_line(163, ng0);

LAB53:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 3768U);
    t6 = *((char **)t3);
    t3 = (t0 + 3728U);
    t12 = (t3 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 3728U);
    t20 = (t19 + 48U);
    t28 = *((char **)t20);
    t29 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t13, t28, 1, 1, t29, 32, 1);
    t33 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 18, 0LL);
    goto LAB49;

LAB33:    xsi_set_current_line(166, ng0);

LAB54:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 3928U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t31, 35, t6, 42, 8);
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 35, 0LL);
    goto LAB49;

LAB35:    xsi_set_current_line(169, ng0);

LAB55:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 3768U);
    t6 = *((char **)t3);
    t3 = (t0 + 3728U);
    t12 = (t3 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 3728U);
    t20 = (t19 + 48U);
    t28 = *((char **)t20);
    t29 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t13, t28, 1, 1, t29, 32, 1);
    t33 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 18, 0LL);
    goto LAB49;

LAB37:    xsi_set_current_line(172, ng0);

LAB56:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 3928U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t31, 35, t6, 42, 8);
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 35, 0LL);
    goto LAB49;

LAB39:    xsi_set_current_line(175, ng0);

LAB57:    xsi_set_current_line(176, ng0);
    t3 = (t0 + 3768U);
    t6 = *((char **)t3);
    t3 = (t0 + 3728U);
    t12 = (t3 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 3728U);
    t20 = (t19 + 48U);
    t28 = *((char **)t20);
    t29 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t13, t28, 1, 1, t29, 32, 1);
    t33 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 18, 0LL);
    goto LAB49;

LAB41:    xsi_set_current_line(178, ng0);

LAB58:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 3928U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t31, 35, t6, 42, 8);
    t3 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 35, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(181, ng0);

LAB59:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 3768U);
    t6 = *((char **)t3);
    t3 = (t0 + 3728U);
    t12 = (t3 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 3728U);
    t20 = (t19 + 48U);
    t28 = *((char **)t20);
    t29 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t4, 18, t6, t13, t28, 1, 1, t29, 32, 1);
    t33 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 18, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(184, ng0);

LAB60:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 5928);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 35, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t31, 35, t3, 42, 8);
    t2 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t2, t31, 0, 0, 35, 0LL);
    goto LAB49;

}

static void Cont_196_24(char *t0)
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

LAB0:    t1 = (t0 + 13280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng32)));
    xsi_vlog_signed_arith_rshift(t6, 35, t4, 35, t5, 32);
    t7 = (t0 + 15392);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t6, 0, 16);
    xsi_driver_vfirst_trans(t7, 0, 15);
    t12 = (t0 + 13904);
    *((int *)t12) = 1;

LAB1:    return;
}


extern void work_m_00000000004277221209_1259823480_init()
{
	static char *pe[] = {(void *)NetDecl_40_0,(void *)NetDecl_41_1,(void *)NetDecl_45_2,(void *)NetDecl_46_3,(void *)NetDecl_50_4,(void *)NetDecl_56_5,(void *)NetDecl_61_6,(void *)Cont_69_7,(void *)Cont_70_8,(void *)Cont_71_9,(void *)Cont_72_10,(void *)Cont_73_11,(void *)Cont_78_12,(void *)Cont_86_13,(void *)Cont_78_14,(void *)Cont_86_15,(void *)Cont_78_16,(void *)Cont_86_17,(void *)Cont_78_18,(void *)Cont_86_19,(void *)Cont_78_20,(void *)Cont_86_21,(void *)Always_99_22,(void *)Always_129_23,(void *)Cont_196_24};
	xsi_register_didat("work_m_00000000004277221209_1259823480", "isim/test.exe.sim/work/m_00000000004277221209_1259823480.didat");
	xsi_register_executes(pe);
}
