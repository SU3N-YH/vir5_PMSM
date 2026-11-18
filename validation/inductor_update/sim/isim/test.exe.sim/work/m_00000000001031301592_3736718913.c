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
static const char *ng0 = "E:/SUEN27/vir5_PMSM/EMFm_calc.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {18U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {8, 0};
static int ng5[] = {6, 0};
static int ng6[] = {5, 0};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {7864320U, 0U};
static unsigned int ng9[] = {15728640U, 0U};
static int ng10[] = {19, 0};
static int ng11[] = {17, 0};
static int ng12[] = {2, 0};
static unsigned int ng13[] = {0U, 0U, 0U, 0U};
static int ng14[] = {31, 0};
static unsigned int ng15[] = {2U, 0U};
static unsigned int ng16[] = {3U, 0U};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {5U, 0U};
static unsigned int ng19[] = {6U, 0U};
static unsigned int ng20[] = {7U, 0U};
static unsigned int ng21[] = {8U, 0U};
static unsigned int ng22[] = {9U, 0U};
static unsigned int ng23[] = {10U, 0U};
static unsigned int ng24[] = {11U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {13U, 0U};
static unsigned int ng27[] = {14U, 0U};
static unsigned int ng28[] = {15U, 0U};
static unsigned int ng29[] = {16U, 0U};
static int ng30[] = {10, 0};
static unsigned int ng31[] = {75U, 0U};



static void Always_39_0(char *t0)
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 15440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 20224);
    *((int *)t2) = 1;
    t3 = (t0 + 15472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
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

LAB11:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
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
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t4) = 1;

LAB16:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB12;

LAB15:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(43, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    goto LAB19;

}

static void NetDecl_53_1(char *t0)
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

LAB0:    t1 = (t0 + 15688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2440U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 20592);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
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
    xsi_driver_vfirst_trans(t12, 0, 15U);
    t25 = (t0 + 20240);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_54_2(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 15936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2600U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t2, 16, t4, 16);
    t5 = (t0 + 20656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 20256);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_56_3(char *t0)
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

LAB0:    t1 = (t0 + 16184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_arith_lshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2760U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_arith_lshift(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 2760U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_signed_arith_lshift(t11, 32, t10, 32, t9, 32);
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t11, 32);
    t13 = (t0 + 2760U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_signed_arith_lshift(t15, 32, t14, 32, t13, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t12, 32, t15, 32);
    t17 = (t0 + 20720);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8);
    xsi_driver_vfirst_trans(t17, 0, 31U);
    t22 = (t0 + 20272);
    *((int *)t22) = 1;

LAB1:    return;
}

static void NetDecl_62_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 16432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 20784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t8 = (t0 + 20288);
    *((int *)t8) = 1;

LAB1:    return;
}

static void NetDecl_63_5(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 16680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 20848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 20304);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_64_6(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 16928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 20912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 20320);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_67_7(char *t0)
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

LAB0:    t1 = (t0 + 17176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB14:    t85 = (t0 + 20976);
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
    t98 = (t0 + 20336);
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

LAB12:    t35 = (t0 + 7480);
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

static void Always_94_8(char *t0)
{
    char t4[8];
    char t21[8];
    char t26[8];
    char t53[8];
    char t68[8];
    char t75[8];
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
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;

LAB0:    t1 = (t0 + 17424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 20352);
    *((int *)t2) = 1;
    t3 = (t0 + 17456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
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

LAB11:    xsi_set_current_line(100, ng0);

LAB14:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3560U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3720U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t2) != 0)
        goto LAB20;

LAB21:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB22;

LAB23:    memcpy(t26, t4, 8);

LAB24:    memset(t53, 0, 8);
    t54 = (t26 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t26);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t54) != 0)
        goto LAB34;

LAB35:    t61 = (t53 + 4);
    t62 = *((unsigned int *)t53);
    t63 = (!(t62));
    t64 = *((unsigned int *)t61);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB36;

LAB37:    memcpy(t75, t53, 8);

LAB38:    t103 = (t75 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t75);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(95, ng0);

LAB13:    xsi_set_current_line(96, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(102, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB21;

LAB22:    t12 = (t0 + 3880U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t22 = (~(t18));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t12) != 0)
        goto LAB27;

LAB28:    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t21);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t20 = (t4 + 4);
    t30 = (t21 + 4);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t20);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB27:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB28;

LAB29:    t37 = *((unsigned int *)t26);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t26) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t21 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t4);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t21);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB31;

LAB32:    *((unsigned int *)t53) = 1;
    goto LAB35;

LAB34:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB35;

LAB36:    t66 = (t0 + 4040U);
    t67 = *((char **)t66);
    memset(t68, 0, 8);
    t66 = (t67 + 4);
    t69 = *((unsigned int *)t66);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t66) != 0)
        goto LAB41;

LAB42:    t76 = *((unsigned int *)t53);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = (t53 + 4);
    t80 = (t68 + 4);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t80);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t68) = 1;
    goto LAB42;

LAB41:    t74 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB42;

LAB43:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t75) = (t87 | t88);
    t89 = (t53 + 4);
    t90 = (t68 + 4);
    t91 = *((unsigned int *)t89);
    t92 = (~(t91));
    t93 = *((unsigned int *)t53);
    t94 = (t93 & t92);
    t95 = *((unsigned int *)t90);
    t96 = (~(t95));
    t97 = *((unsigned int *)t68);
    t98 = (t97 & t96);
    t99 = (~(t94));
    t100 = (~(t98));
    t101 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t101 & t99);
    t102 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t102 & t100);
    goto LAB45;

LAB46:    xsi_set_current_line(103, ng0);

LAB49:    xsi_set_current_line(104, ng0);
    t109 = ((char*)((ng3)));
    t110 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4200U);
    t3 = *((char **)t2);
    t2 = (t0 + 7640);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4360U);
    t3 = *((char **)t2);
    t2 = (t0 + 7800);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4520U);
    t3 = *((char **)t2);
    t2 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB48;

}

static void NetDecl_138_9(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 17672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng10)));
    t6 = (t0 + 1640U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 19, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 35, 35, 2U, t5, 19, t4, 16);
    t16 = (t0 + 21040);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t16, 0, 34U);
    t21 = (t0 + 20368);
    *((int *)t21) = 1;

LAB1:    return;
}

static void NetDecl_139_10(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 17920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 35, 35, 2U, t5, 16, t2, 19);
    t4 = (t0 + 21104);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t4, 0, 34U);
    t10 = (t0 + 20384);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_140_11(char *t0)
{
    char t3[16];
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

LAB0:    t1 = (t0 + 18168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 7640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    t8 = (t0 + 7640);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 17);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 17);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlog_mul_concat(t6, 17, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 35, 35, 2U, t6, 17, t5, 18);
    t20 = (t0 + 21168);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_bit_copy(t24, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t20, 0, 34U);
    t25 = (t0 + 20400);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_141_12(char *t0)
{
    char t3[16];
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

LAB0:    t1 = (t0 + 18416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7800);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    t8 = (t0 + 7800);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 17);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 17);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlog_mul_concat(t6, 17, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 35, 35, 2U, t6, 17, t5, 18);
    t20 = (t0 + 21232);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_bit_copy(t24, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t20, 0, 34U);
    t25 = (t0 + 20416);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_142_13(char *t0)
{
    char t3[16];
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

LAB0:    t1 = (t0 + 18664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 7960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng11)));
    t8 = (t0 + 7960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 17);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 17);
    t19 = (t18 & 1);
    *((unsigned int *)t12) = t19;
    xsi_vlog_mul_concat(t6, 17, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 35, 35, 2U, t6, 17, t5, 18);
    t20 = (t0 + 21296);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_bit_copy(t24, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t20, 0, 34U);
    t25 = (t0 + 20432);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_147_14(char *t0)
{
    char t3[16];
    char t6[8];
    char t11[8];
    char t21[16];
    char t25[8];
    char t30[8];
    char t40[16];
    char t41[16];
    char t45[8];
    char t50[8];
    char t60[16];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 18912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 10520);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng12)));
    t8 = (t0 + 10520);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 8);
    t14 = (t10 + 12);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 20);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 20);
    t20 = (t19 & 1);
    *((unsigned int *)t12) = t20;
    xsi_vlog_mul_concat(t6, 2, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 55, 55, 2U, t6, 2, t5, 53);
    t22 = (t0 + 10680);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng12)));
    t27 = (t0 + 10680);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 8);
    t33 = (t29 + 12);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 20);
    t36 = (t35 & 1);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 20);
    t39 = (t38 & 1);
    *((unsigned int *)t31) = t39;
    xsi_vlog_mul_concat(t25, 2, 1, t26, 1U, t30, 1);
    xsi_vlogtype_concat(t21, 55, 55, 2U, t25, 2, t24, 53);
    xsi_vlog_unsigned_add(t40, 55, t3, 55, t21, 55);
    t42 = (t0 + 10840);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = ((char*)((ng12)));
    t47 = (t0 + 10840);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t52 = (t49 + 8);
    t53 = (t49 + 12);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 20);
    t56 = (t55 & 1);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 20);
    t59 = (t58 & 1);
    *((unsigned int *)t51) = t59;
    xsi_vlog_mul_concat(t45, 2, 1, t46, 1U, t50, 1);
    xsi_vlogtype_concat(t41, 55, 55, 2U, t45, 2, t44, 53);
    xsi_vlog_unsigned_add(t60, 55, t40, 55, t41, 55);
    t61 = (t0 + 21360);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    xsi_vlog_bit_copy(t65, 0, t60, 0, 55);
    xsi_driver_vfirst_trans(t61, 0, 54U);
    t66 = (t0 + 20448);
    *((int *)t66) = 1;

LAB1:    return;
}

static void NetDecl_150_15(char *t0)
{
    char t3[16];
    char t6[8];
    char t11[8];
    char t21[16];
    char t25[8];
    char t30[8];
    char t40[16];
    char t41[16];
    char t45[8];
    char t50[8];
    char t60[16];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 19160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 11000);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng12)));
    t8 = (t0 + 11000);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 8);
    t14 = (t10 + 12);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 20);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 20);
    t20 = (t19 & 1);
    *((unsigned int *)t12) = t20;
    xsi_vlog_mul_concat(t6, 2, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 55, 55, 2U, t6, 2, t5, 53);
    t22 = (t0 + 11160);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng12)));
    t27 = (t0 + 11160);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 8);
    t33 = (t29 + 12);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 20);
    t36 = (t35 & 1);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 20);
    t39 = (t38 & 1);
    *((unsigned int *)t31) = t39;
    xsi_vlog_mul_concat(t25, 2, 1, t26, 1U, t30, 1);
    xsi_vlogtype_concat(t21, 55, 55, 2U, t25, 2, t24, 53);
    xsi_vlog_unsigned_add(t40, 55, t3, 55, t21, 55);
    t42 = (t0 + 11320);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = ((char*)((ng12)));
    t47 = (t0 + 11320);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t52 = (t49 + 8);
    t53 = (t49 + 12);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 20);
    t56 = (t55 & 1);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 20);
    t59 = (t58 & 1);
    *((unsigned int *)t51) = t59;
    xsi_vlog_mul_concat(t45, 2, 1, t46, 1U, t50, 1);
    xsi_vlogtype_concat(t41, 55, 55, 2U, t45, 2, t44, 53);
    xsi_vlog_unsigned_add(t60, 55, t40, 55, t41, 55);
    t61 = (t0 + 21424);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    xsi_vlog_bit_copy(t65, 0, t60, 0, 55);
    xsi_driver_vfirst_trans(t61, 0, 54U);
    t66 = (t0 + 20464);
    *((int *)t66) = 1;

LAB1:    return;
}

static void NetDecl_153_16(char *t0)
{
    char t3[16];
    char t6[8];
    char t11[8];
    char t21[16];
    char t25[8];
    char t30[8];
    char t40[16];
    char t41[16];
    char t45[8];
    char t50[8];
    char t60[16];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 19408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 11480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng12)));
    t8 = (t0 + 11480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 8);
    t14 = (t10 + 12);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 20);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 20);
    t20 = (t19 & 1);
    *((unsigned int *)t12) = t20;
    xsi_vlog_mul_concat(t6, 2, 1, t7, 1U, t11, 1);
    xsi_vlogtype_concat(t3, 55, 55, 2U, t6, 2, t5, 53);
    t22 = (t0 + 11640);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng12)));
    t27 = (t0 + 11640);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 8);
    t33 = (t29 + 12);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 20);
    t36 = (t35 & 1);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 20);
    t39 = (t38 & 1);
    *((unsigned int *)t31) = t39;
    xsi_vlog_mul_concat(t25, 2, 1, t26, 1U, t30, 1);
    xsi_vlogtype_concat(t21, 55, 55, 2U, t25, 2, t24, 53);
    xsi_vlog_unsigned_add(t40, 55, t3, 55, t21, 55);
    t42 = (t0 + 11800);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = ((char*)((ng12)));
    t47 = (t0 + 11800);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t52 = (t49 + 8);
    t53 = (t49 + 12);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 20);
    t56 = (t55 & 1);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 20);
    t59 = (t58 & 1);
    *((unsigned int *)t51) = t59;
    xsi_vlog_mul_concat(t45, 2, 1, t46, 1U, t50, 1);
    xsi_vlogtype_concat(t41, 55, 55, 2U, t45, 2, t44, 53);
    xsi_vlog_unsigned_add(t60, 55, t40, 55, t41, 55);
    t61 = (t0 + 21488);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    xsi_vlog_bit_copy(t65, 0, t60, 0, 55);
    xsi_driver_vfirst_trans(t61, 0, 54U);
    t66 = (t0 + 20480);
    *((int *)t66) = 1;

LAB1:    return;
}

static void Always_157_17(char *t0)
{
    char t4[8];
    char t24[16];
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
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 19656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 20496);
    *((int *)t2) = 1;
    t3 = (t0 + 19688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(157, ng0);

LAB5:    xsi_set_current_line(158, ng0);
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

LAB11:    xsi_set_current_line(171, ng0);

LAB14:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 5);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng16)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng17)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng18)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng19)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng20)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng21)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng22)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng23)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng24)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng25)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng26)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng27)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng28)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng29)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB48;

LAB49:
LAB51:
LAB50:    xsi_set_current_line(226, ng0);

LAB82:
LAB52:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(158, ng0);

LAB13:    xsi_set_current_line(159, ng0);
    t19 = ((char*)((ng13)));
    t20 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 35, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 53, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 11960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 12120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 12280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(178, ng0);

LAB53:    xsi_set_current_line(179, ng0);
    t12 = (t0 + 5640U);
    t13 = *((char **)t12);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 35, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t9 = *((unsigned int *)t3);
    t10 = (t9 & 32768U);
    t7 = t10;
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t14 = (t11 & 32768U);
    t8 = t14;
    t15 = (t10 != 0);
    if (t15 == 1)
        goto LAB54;

LAB55:    t17 = (t14 != 0);
    if (t17 == 1)
        goto LAB56;

LAB57:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 262143U);
    t12 = (t4 + 4);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 262143U);
    t13 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 18, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB52;

LAB18:    xsi_set_current_line(183, ng0);

LAB58:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 5800U);
    t6 = *((char **)t3);
    t3 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t9 = *((unsigned int *)t3);
    t10 = (t9 & 32768U);
    t7 = t10;
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t14 = (t11 & 32768U);
    t8 = t14;
    t15 = (t10 != 0);
    if (t15 == 1)
        goto LAB59;

LAB60:    t17 = (t14 != 0);
    if (t17 == 1)
        goto LAB61;

LAB62:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 262143U);
    t12 = (t4 + 4);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 262143U);
    t13 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 18, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    xsi_vlog_signed_arith_rshift(t24, 55, t3, 55, t2, 32);
    t6 = (t0 + 11960);
    xsi_vlogvar_wait_assign_value(t6, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 6280U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    xsi_vlog_signed_arith_rshift(t24, 55, t3, 55, t2, 32);
    t6 = (t0 + 12120);
    xsi_vlogvar_wait_assign_value(t6, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6440U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    xsi_vlog_signed_arith_rshift(t24, 55, t3, 55, t2, 32);
    t6 = (t0 + 12280);
    xsi_vlogvar_wait_assign_value(t6, t24, 0, 0, 35, 0LL);
    goto LAB52;

LAB20:    xsi_set_current_line(189, ng0);

LAB63:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t24, 35, t6, 34, 0);
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5960U);
    t3 = *((char **)t2);
    t2 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t9 = *((unsigned int *)t3);
    t10 = (t9 & 32768U);
    t7 = t10;
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t14 = (t11 & 32768U);
    t8 = t14;
    t15 = (t10 != 0);
    if (t15 == 1)
        goto LAB64;

LAB65:    t17 = (t14 != 0);
    if (t17 == 1)
        goto LAB66;

LAB67:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 262143U);
    t12 = (t4 + 4);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 262143U);
    t13 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 18, 0LL);
    goto LAB52;

LAB22:    xsi_set_current_line(193, ng0);

LAB68:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t24, 35, t6, 34, 0);
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t24, 0, 0, 35, 0LL);
    goto LAB52;

LAB24:    xsi_set_current_line(196, ng0);

LAB69:    xsi_set_current_line(197, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t24, 35, t6, 34, 0);
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t24, 0, 0, 35, 0LL);
    goto LAB52;

LAB26:    xsi_set_current_line(199, ng0);

LAB70:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 5480U);
    t6 = *((char **)t3);
    t3 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 8440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 8600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t24, 35, t6, 35, t13, 35);
    t12 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t12, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 8760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t24, 35, t6, 35, t13, 35);
    t12 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t12, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 8600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t24, 35, t6, 35, t13, 35);
    t12 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t12, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 8760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 8440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t24, 35, t6, 35, t13, 35);
    t12 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t12, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 8760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t24, 35, t6, 35, t13, 35);
    t12 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t12, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 8440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 5480U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t24, 35, t6, 35, t13, 35);
    t12 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t12, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 8600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    goto LAB52;

LAB28:    xsi_set_current_line(212, ng0);

LAB71:    xsi_set_current_line(212, ng0);
    t3 = (t0 + 9080);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 35, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB30:    xsi_set_current_line(213, ng0);

LAB72:    xsi_set_current_line(213, ng0);
    t3 = (t0 + 9240);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 35, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB32:    xsi_set_current_line(214, ng0);

LAB73:    xsi_set_current_line(214, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 9400);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB34:    xsi_set_current_line(215, ng0);

LAB74:    xsi_set_current_line(216, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9560);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 12440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB52;

LAB36:    xsi_set_current_line(219, ng0);

LAB75:    xsi_set_current_line(219, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 9720);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB38:    xsi_set_current_line(220, ng0);

LAB76:    xsi_set_current_line(220, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 11000);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 9880);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB40:    xsi_set_current_line(221, ng0);

LAB77:    xsi_set_current_line(221, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 11160);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 10040);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB42:    xsi_set_current_line(222, ng0);

LAB78:    xsi_set_current_line(222, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 11320);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 10200);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB44:    xsi_set_current_line(223, ng0);

LAB79:    xsi_set_current_line(223, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 11480);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 18, 0LL);
    goto LAB52;

LAB46:    xsi_set_current_line(224, ng0);

LAB80:    xsi_set_current_line(224, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 11640);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    goto LAB52;

LAB48:    xsi_set_current_line(225, ng0);

LAB81:    xsi_set_current_line(225, ng0);
    t3 = (t0 + 5160U);
    t6 = *((char **)t3);
    t3 = (t0 + 11800);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 53, 0LL);
    goto LAB52;

LAB54:    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 | 4294901760U);
    goto LAB55;

LAB56:    t6 = (t4 + 4);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 | 4294901760U);
    goto LAB57;

LAB59:    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 | 4294901760U);
    goto LAB60;

LAB61:    t6 = (t4 + 4);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 | 4294901760U);
    goto LAB62;

LAB64:    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 | 4294901760U);
    goto LAB65;

LAB66:    t6 = (t4 + 4);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 | 4294901760U);
    goto LAB67;

}

static void Always_242_18(char *t0)
{
    char t4[8];
    char t21[16];
    char t23[16];
    char t25[16];
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
    char *t22;
    char *t24;
    char *t26;

LAB0:    t1 = (t0 + 19904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 20512);
    *((int *)t2) = 1;
    t3 = (t0 + 19936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(242, ng0);

LAB5:    xsi_set_current_line(243, ng0);
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

LAB11:    xsi_set_current_line(253, ng0);

LAB14:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 12600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 11960);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_add(t21, 35, t5, 35, t13, 35);
    t19 = (t0 + 13080);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_signed_minus(t23, 35, t21, 35, t22, 35);
    t24 = (t0 + 12600);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 35, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 12760);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 12120);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_add(t21, 35, t5, 35, t13, 35);
    t19 = (t0 + 13240);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_signed_minus(t23, 35, t21, 35, t22, 35);
    t24 = (t0 + 12760);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 35, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 12920);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 12280);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_add(t21, 35, t5, 35, t13, 35);
    t19 = (t0 + 13400);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_signed_minus(t23, 35, t21, 35, t22, 35);
    t24 = (t0 + 12920);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 35, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 12600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 11960);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_add(t21, 35, t5, 35, t13, 35);
    t19 = (t0 + 13080);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_signed_minus(t23, 35, t21, 35, t22, 35);
    t24 = ((char*)((ng30)));
    xsi_vlog_signed_arith_rshift(t25, 35, t23, 35, t24, 32);
    t26 = (t0 + 13080);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 35, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 12760);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 12120);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_add(t21, 35, t5, 35, t13, 35);
    t19 = (t0 + 13240);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_signed_minus(t23, 35, t21, 35, t22, 35);
    t24 = ((char*)((ng30)));
    xsi_vlog_signed_arith_rshift(t25, 35, t23, 35, t24, 32);
    t26 = (t0 + 13240);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 35, 0LL);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 12920);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 12280);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_add(t21, 35, t5, 35, t13, 35);
    t19 = (t0 + 13400);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_signed_minus(t23, 35, t21, 35, t22, 35);
    t24 = ((char*)((ng30)));
    xsi_vlog_signed_arith_rshift(t25, 35, t23, 35, t24, 32);
    t26 = (t0 + 13400);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 35, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 14520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng31)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB15:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB18:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(273, ng0);

LAB24:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 14520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 7, t5, 7, t6, 7);
    t12 = (t0 + 14520);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 7, 0LL);

LAB22:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 14040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 35, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 14200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 35, 0LL);
    xsi_set_current_line(279, ng0);
    t2 = (t0 + 14360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 35, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(243, ng0);

LAB13:    xsi_set_current_line(244, ng0);
    t19 = ((char*)((ng13)));
    t20 = (t0 + 12600);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 35, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 12760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 12920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 13080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 13240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 13400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 13560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 13720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 13880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 14040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 14200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 14360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 14520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    goto LAB12;

LAB16:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(263, ng0);

LAB23:    xsi_set_current_line(264, ng0);
    t22 = ((char*)((ng3)));
    t24 = (t0 + 14520);
    xsi_vlogvar_wait_assign_value(t24, t22, 0, 0, 7, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = (t0 + 13080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 13560);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t21, 35, t5, 35, t13, 35);
    t19 = ((char*)((ng11)));
    xsi_vlog_signed_arith_lshift(t23, 35, t21, 35, t19, 32);
    t20 = (t0 + 14040);
    xsi_vlogvar_wait_assign_value(t20, t23, 0, 0, 35, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 13240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 13720);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t21, 35, t5, 35, t13, 35);
    t19 = ((char*)((ng11)));
    xsi_vlog_signed_arith_lshift(t23, 35, t21, 35, t19, 32);
    t20 = (t0 + 14200);
    xsi_vlogvar_wait_assign_value(t20, t23, 0, 0, 35, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 13400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 13880);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_signed_minus(t21, 35, t5, 35, t13, 35);
    t19 = ((char*)((ng11)));
    xsi_vlog_signed_arith_lshift(t23, 35, t21, 35, t19, 32);
    t20 = (t0 + 14360);
    xsi_vlogvar_wait_assign_value(t20, t23, 0, 0, 35, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 13080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 13560);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 35, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 13240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 13720);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 35, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 13400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 13880);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 35, 0LL);
    goto LAB22;

}


extern void work_m_00000000001031301592_3736718913_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)NetDecl_53_1,(void *)NetDecl_54_2,(void *)NetDecl_56_3,(void *)NetDecl_62_4,(void *)NetDecl_63_5,(void *)NetDecl_64_6,(void *)NetDecl_67_7,(void *)Always_94_8,(void *)NetDecl_138_9,(void *)NetDecl_139_10,(void *)NetDecl_140_11,(void *)NetDecl_141_12,(void *)NetDecl_142_13,(void *)NetDecl_147_14,(void *)NetDecl_150_15,(void *)NetDecl_153_16,(void *)Always_157_17,(void *)Always_242_18};
	xsi_register_didat("work_m_00000000001031301592_3736718913", "isim/test.exe.sim/work/m_00000000001031301592_3736718913.didat");
	xsi_register_executes(pe);
}
