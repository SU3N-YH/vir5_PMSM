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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/add5ov5.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {104858U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {209716U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {314574U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {419432U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {524290U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {629148U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {734006U, 0U};
static unsigned int ng17[] = {4294967295U, 0U, 3U, 0U};
static unsigned int ng18[] = {0U, 0U, 4U, 0U};
static int ng19[] = {0, 0, 0, 0};
static int ng20[] = {11, 0};
static int ng21[] = {12, 0};
static unsigned int ng22[] = {1U, 0U};
static unsigned int ng23[] = {0U, 0U, 0U, 0U};
static unsigned int ng24[] = {262144U, 0U, 0U, 0U};
static int ng25[] = {9, 0};



static int sp_remainder_times_q19(char *t1, char *t2)
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
    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    t3 = (t1 + 8528);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB18;

LAB19:
LAB20:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(56, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 8368);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 21);
    goto LAB20;

LAB6:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

LAB10:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

LAB12:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

LAB14:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

LAB16:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

LAB18:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 8368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 21);
    goto LAB20;

}

static int sp_saturate(char *t1, char *t2)
{
    char t7[16];
    char t16[16];
    char t17[16];
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

LAB0:    t0 = 1;
    xsi_set_current_line(69, ng0);

LAB2:    xsi_set_current_line(70, ng0);
    t3 = (t1 + 8848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng17)));
    xsi_vlog_signed_greater(t7, 37, t5, 37, t6, 37);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(71, ng0);
    t3 = (t1 + 8848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng18)));
    xsi_vlog_signed_unary_minus(t7, 37, t6, 37);
    xsi_vlog_signed_less(t16, 37, t5, 37, t7, 37);
    t8 = (t16 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);
    t3 = (t1 + 8848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t7, 35, t5, 34, 0);
    t6 = (t1 + 8688);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 35);

LAB8:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(70, ng0);
    t14 = ((char*)((ng17)));
    t15 = (t1 + 8688);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 35);
    goto LAB5;

LAB6:    xsi_set_current_line(71, ng0);
    t14 = ((char*)((ng18)));
    xsi_vlog_signed_unary_minus(t17, 35, t14, 35);
    t15 = (t1 + 8688);
    xsi_vlogvar_assign_value(t15, t17, 0, 0, 35);
    goto LAB8;

}

static void NetDecl_47_0(char *t0)
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
    char *t11;

LAB0:    t1 = (t0 + 9768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 8048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t3, 37, t5, 55, 19);
    t6 = (t0 + 10432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t3, 0, 37);
    xsi_driver_vfirst_trans(t6, 0, 36U);
    t11 = (t0 + 10336);
    *((int *)t11) = 1;

LAB1:    return;
}

static void Always_75_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t52[8];
    char t54[8];
    char t66[16];
    char t67[16];
    char t69[16];
    char t70[16];
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
    char *t23;
    char *t24;
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
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 10016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 10352);
    *((int *)t2) = 1;
    t3 = (t0 + 10048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 2208U);
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

LAB11:    xsi_set_current_line(85, ng0);

LAB24:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng21)));
    memset(t22, 0, 8);
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
    t38 = (~(t18));
    t39 = (t15 & t38);
    if (t39 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t22) = 1;

LAB28:    memset(t21, 0, 8);
    t20 = (t22 + 4);
    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t22);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t20) != 0)
        goto LAB31;

LAB32:    t24 = (t21 + 4);
    t45 = *((unsigned int *)t21);
    t46 = *((unsigned int *)t24);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB33;

LAB34:    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t24);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t24) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t21) > 0)
        goto LAB39;

LAB40:    memcpy(t4, t52, 8);

LAB41:    t30 = (t0 + 5808);
    xsi_vlogvar_wait_assign_value(t30, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 1023U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 1023U);
    xsi_vlogtype_concat(t4, 11, 11, 2U, t21, 10, t2, 1);
    t19 = (t0 + 7248);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 11, 0LL);
    xsi_set_current_line(88, ng0);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB42:    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng20)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB47:    t6 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 32);
    if (t32 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t32 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng15)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t32 == 1)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5968);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 6128);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    xsi_vlog_signed_add(t66, 38, t6, 38, t19, 38);
    t20 = (t0 + 6448);
    xsi_vlogvar_wait_assign_value(t20, t66, 0, 0, 38, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6288);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 6608);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 38, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6448);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 6608);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    xsi_vlog_signed_add(t66, 38, t6, 38, t19, 38);
    t20 = (t0 + 6768);
    xsi_vlogvar_wait_assign_value(t20, t66, 0, 0, 38, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlog_get_part_select_value(t66, 35, t6, 37, 3);
    t12 = (t0 + 7088);
    xsi_vlogvar_wait_assign_value(t12, t66, 0, 0, 35, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6768);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 7U);
    t19 = (t0 + 9824);
    t20 = (t0 + 984);
    t23 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t24 = (t0 + 8528);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 3);

LAB70:    t25 = (t0 + 9920);
    t26 = *((char **)t25);
    t27 = (t26 + 80U);
    t28 = *((char **)t27);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t33 = *((char **)t31);
    t32 = ((int  (*)(char *, char *))t33)(t0, t26);
    if (t32 != 0)
        goto LAB72;

LAB71:    t26 = (t0 + 9920);
    t53 = *((char **)t26);
    t26 = (t0 + 8368);
    t55 = (t26 + 56U);
    t56 = *((char **)t55);
    memcpy(t21, t56, 8);
    t57 = (t0 + 984);
    t58 = (t0 + 9824);
    t59 = 0;
    xsi_delete_subprogram_invocation(t57, t53, t0, t58, t59);
    t60 = (t0 + 7568);
    xsi_vlogvar_wait_assign_value(t60, t21, 0, 0, 21, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7568);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7728);
    t13 = (t0 + 7728);
    t19 = (t13 + 72U);
    t20 = *((char **)t19);
    t23 = (t0 + 7728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t20, t25, 2, 1, t26, 32, 1);
    t27 = (t4 + 4);
    t7 = *((unsigned int *)t27);
    t32 = (!(t7));
    t28 = (t21 + 4);
    t8 = *((unsigned int *)t28);
    t34 = (!(t8));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(111, ng0);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB75:    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t12, 32);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4768U);
    t6 = *((char **)t3);
    xsi_vlogtype_concat(t67, 56, 56, 2U, t6, 53, t2, 3);
    t3 = (t0 + 7728);
    t12 = (t3 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 7728);
    t20 = (t19 + 72U);
    t23 = *((char **)t20);
    t24 = (t0 + 7728);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t4, 21, t13, t23, t26, 2, 1, t27, 32, 1);
    t28 = ((char*)((ng23)));
    xsi_vlogtype_concat(t69, 56, 56, 2U, t28, 35, t4, 21);
    xsi_vlog_signed_add(t70, 56, t67, 56, t69, 56);
    t29 = (t0 + 7888);
    xsi_vlogvar_wait_assign_value(t29, t70, 0, 0, 56, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng24)));
    xsi_vlog_signed_add(t66, 56, t6, 56, t12, 56);
    t13 = (t0 + 8048);
    xsi_vlogvar_wait_assign_value(t13, t66, 0, 0, 56, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 9);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 9);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    t19 = (t4 + 4);
    t15 = *((unsigned int *)t19);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t38 = (t18 != 0);
    if (t38 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);

LAB13:    xsi_set_current_line(77, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 5808);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 38, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 38, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 38, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 38, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 38, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 38, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(83, ng0);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng20)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    goto LAB12;

LAB15:    xsi_set_current_line(83, ng0);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 7408);
    t20 = (t0 + 7408);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 7408);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 8208);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t22, t24, t27, 2, 1, t30, 32, 1);
    t31 = (t21 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    t33 = (t22 + 4);
    t15 = *((unsigned int *)t33);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 8208);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB14;

LAB17:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, *((unsigned int *)t22), t37, 0LL);
    goto LAB18;

LAB20:    xsi_set_current_line(84, ng0);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 7728);
    t20 = (t0 + 7728);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 7728);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 8208);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t22, t24, t27, 2, 1, t30, 32, 1);
    t31 = (t21 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    t33 = (t22 + 4);
    t15 = *((unsigned int *)t33);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 8208);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB19;

LAB22:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, *((unsigned int *)t22), t37, 0LL);
    goto LAB23;

LAB27:    t19 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t21) = 1;
    goto LAB32;

LAB31:    t23 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB32;

LAB33:    t25 = ((char*)((ng22)));
    goto LAB34;

LAB35:    t26 = (t0 + 5808);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng22)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 4, t28, 4, t29, 4);
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t4, 4, t25, 4, t52, 4);
    goto LAB41;

LAB39:    memcpy(t4, t25, 8);
    goto LAB41;

LAB43:    xsi_set_current_line(88, ng0);
    t13 = (t0 + 7408);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t23 = (t0 + 7408);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 7408);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 8208);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t31, 32, t33, 32);
    xsi_vlog_generic_get_array_select_value(t21, 2, t20, t25, t28, 2, 1, t22, 32, 1);
    t53 = (t0 + 7408);
    t55 = (t0 + 7408);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 7408);
    t59 = (t58 + 64U);
    t60 = *((char **)t59);
    t61 = (t0 + 8208);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    xsi_vlog_generic_convert_array_indices(t52, t54, t57, t60, 2, 1, t63, 32, 1);
    t64 = (t52 + 4);
    t14 = *((unsigned int *)t64);
    t32 = (!(t14));
    t65 = (t54 + 4);
    t15 = *((unsigned int *)t65);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 8208);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB42;

LAB45:    t16 = *((unsigned int *)t52);
    t17 = *((unsigned int *)t54);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t53, t21, 0, *((unsigned int *)t54), t37, 0LL);
    goto LAB46;

LAB48:    xsi_set_current_line(90, ng0);

LAB55:    xsi_set_current_line(91, ng0);
    t12 = (t0 + 2368U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng7)));
    t19 = (t0 + 2368U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t23 = (t20 + 8);
    t24 = (t20 + 12);
    t7 = *((unsigned int *)t23);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t24);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t19) = t14;
    xsi_vlog_mul_concat(t4, 3, 1, t12, 1U, t21, 1);
    xsi_vlogtype_concat(t67, 38, 38, 2U, t4, 3, t13, 35);
    t25 = (t0 + 2528U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng7)));
    t27 = (t0 + 2528U);
    t28 = *((char **)t27);
    memset(t52, 0, 8);
    t27 = (t52 + 4);
    t29 = (t28 + 8);
    t30 = (t28 + 12);
    t15 = *((unsigned int *)t29);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t52) = t17;
    t18 = *((unsigned int *)t30);
    t38 = (t18 >> 2);
    t39 = (t38 & 1);
    *((unsigned int *)t27) = t39;
    xsi_vlog_mul_concat(t22, 3, 1, t25, 1U, t52, 1);
    xsi_vlogtype_concat(t69, 38, 38, 2U, t22, 3, t26, 35);
    xsi_vlog_signed_add(t70, 38, t67, 38, t69, 38);
    t31 = (t0 + 5968);
    xsi_vlogvar_wait_assign_value(t31, t70, 0, 0, 38, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 2688U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 8);
    t19 = (t12 + 12);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    xsi_vlog_mul_concat(t4, 3, 1, t2, 1U, t21, 1);
    xsi_vlogtype_concat(t67, 38, 38, 2U, t4, 3, t3, 35);
    t20 = (t0 + 2848U);
    t23 = *((char **)t20);
    t20 = ((char*)((ng7)));
    t24 = (t0 + 2848U);
    t25 = *((char **)t24);
    memset(t52, 0, 8);
    t24 = (t52 + 4);
    t26 = (t25 + 8);
    t27 = (t25 + 12);
    t15 = *((unsigned int *)t26);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t52) = t17;
    t18 = *((unsigned int *)t27);
    t38 = (t18 >> 2);
    t39 = (t38 & 1);
    *((unsigned int *)t24) = t39;
    xsi_vlog_mul_concat(t22, 3, 1, t20, 1U, t52, 1);
    xsi_vlogtype_concat(t69, 38, 38, 2U, t22, 3, t23, 35);
    xsi_vlog_signed_add(t70, 38, t67, 38, t69, 38);
    t28 = (t0 + 6128);
    xsi_vlogvar_wait_assign_value(t28, t70, 0, 0, 38, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t66, 38, t3, 35);
    t2 = (t0 + 6288);
    xsi_vlogvar_wait_assign_value(t2, t66, 0, 0, 38, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7248);
    t6 = (t0 + 7248);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t19, 32, 1);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7408);
    t6 = (t0 + 7408);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 7408);
    t20 = (t19 + 64U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t13, t23, 2, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t32 = (!(t7));
    t26 = (t21 + 4);
    t8 = *((unsigned int *)t26);
    t34 = (!(t8));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB58;

LAB59:    goto LAB54;

LAB50:    xsi_set_current_line(95, ng0);

LAB60:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 3168U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng7)));
    t12 = (t0 + 3168U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t19 = (t13 + 8);
    t20 = (t13 + 12);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    xsi_vlog_mul_concat(t4, 3, 1, t3, 1U, t21, 1);
    xsi_vlogtype_concat(t67, 38, 38, 2U, t4, 3, t6, 35);
    t23 = (t0 + 3328U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng7)));
    t25 = (t0 + 3328U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t27 = (t26 + 8);
    t28 = (t26 + 12);
    t15 = *((unsigned int *)t27);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t52) = t17;
    t18 = *((unsigned int *)t28);
    t38 = (t18 >> 2);
    t39 = (t38 & 1);
    *((unsigned int *)t25) = t39;
    xsi_vlog_mul_concat(t22, 3, 1, t23, 1U, t52, 1);
    xsi_vlogtype_concat(t69, 38, 38, 2U, t22, 3, t24, 35);
    xsi_vlog_signed_add(t70, 38, t67, 38, t69, 38);
    t29 = (t0 + 5968);
    xsi_vlogvar_wait_assign_value(t29, t70, 0, 0, 38, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 3488U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 8);
    t19 = (t12 + 12);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    xsi_vlog_mul_concat(t4, 3, 1, t2, 1U, t21, 1);
    xsi_vlogtype_concat(t67, 38, 38, 2U, t4, 3, t3, 35);
    t20 = (t0 + 3648U);
    t23 = *((char **)t20);
    t20 = ((char*)((ng7)));
    t24 = (t0 + 3648U);
    t25 = *((char **)t24);
    memset(t52, 0, 8);
    t24 = (t52 + 4);
    t26 = (t25 + 8);
    t27 = (t25 + 12);
    t15 = *((unsigned int *)t26);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t52) = t17;
    t18 = *((unsigned int *)t27);
    t38 = (t18 >> 2);
    t39 = (t38 & 1);
    *((unsigned int *)t24) = t39;
    xsi_vlog_mul_concat(t22, 3, 1, t20, 1U, t52, 1);
    xsi_vlogtype_concat(t69, 38, 38, 2U, t22, 3, t23, 35);
    xsi_vlog_signed_add(t70, 38, t67, 38, t69, 38);
    t28 = (t0 + 6128);
    xsi_vlogvar_wait_assign_value(t28, t70, 0, 0, 38, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3808U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t66, 38, t3, 35);
    t2 = (t0 + 6288);
    xsi_vlogvar_wait_assign_value(t2, t66, 0, 0, 38, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7248);
    t6 = (t0 + 7248);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t19, 32, 1);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7408);
    t6 = (t0 + 7408);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 7408);
    t20 = (t19 + 64U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t13, t23, 2, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t32 = (!(t7));
    t26 = (t21 + 4);
    t8 = *((unsigned int *)t26);
    t34 = (!(t8));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB63;

LAB64:    goto LAB54;

LAB52:    xsi_set_current_line(100, ng0);

LAB65:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 3968U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng7)));
    t12 = (t0 + 3968U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t19 = (t13 + 8);
    t20 = (t13 + 12);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t20);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    xsi_vlog_mul_concat(t4, 3, 1, t3, 1U, t21, 1);
    xsi_vlogtype_concat(t67, 38, 38, 2U, t4, 3, t6, 35);
    t23 = (t0 + 4128U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng7)));
    t25 = (t0 + 4128U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t27 = (t26 + 8);
    t28 = (t26 + 12);
    t15 = *((unsigned int *)t27);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t52) = t17;
    t18 = *((unsigned int *)t28);
    t38 = (t18 >> 2);
    t39 = (t38 & 1);
    *((unsigned int *)t25) = t39;
    xsi_vlog_mul_concat(t22, 3, 1, t23, 1U, t52, 1);
    xsi_vlogtype_concat(t69, 38, 38, 2U, t22, 3, t24, 35);
    xsi_vlog_signed_add(t70, 38, t67, 38, t69, 38);
    t29 = (t0 + 5968);
    xsi_vlogvar_wait_assign_value(t29, t70, 0, 0, 38, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4288U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 4288U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 8);
    t19 = (t12 + 12);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    xsi_vlog_mul_concat(t4, 3, 1, t2, 1U, t21, 1);
    xsi_vlogtype_concat(t67, 38, 38, 2U, t4, 3, t3, 35);
    t20 = (t0 + 4448U);
    t23 = *((char **)t20);
    t20 = ((char*)((ng7)));
    t24 = (t0 + 4448U);
    t25 = *((char **)t24);
    memset(t52, 0, 8);
    t24 = (t52 + 4);
    t26 = (t25 + 8);
    t27 = (t25 + 12);
    t15 = *((unsigned int *)t26);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t52) = t17;
    t18 = *((unsigned int *)t27);
    t38 = (t18 >> 2);
    t39 = (t38 & 1);
    *((unsigned int *)t24) = t39;
    xsi_vlog_mul_concat(t22, 3, 1, t20, 1U, t52, 1);
    xsi_vlogtype_concat(t69, 38, 38, 2U, t22, 3, t23, 35);
    xsi_vlog_signed_add(t70, 38, t67, 38, t69, 38);
    t28 = (t0 + 6128);
    xsi_vlogvar_wait_assign_value(t28, t70, 0, 0, 38, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4608U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t66, 38, t3, 35);
    t2 = (t0 + 6288);
    xsi_vlogvar_wait_assign_value(t2, t66, 0, 0, 38, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7248);
    t6 = (t0 + 7248);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t19, 32, 1);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7408);
    t6 = (t0 + 7408);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 7408);
    t20 = (t19 + 64U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t13, t23, 2, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t32 = (!(t7));
    t26 = (t21 + 4);
    t8 = *((unsigned int *)t26);
    t34 = (!(t8));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB68;

LAB69:    goto LAB54;

LAB56:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB57;

LAB58:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t37, 0LL);
    goto LAB59;

LAB61:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB62;

LAB63:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t37, 0LL);
    goto LAB64;

LAB66:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB67;

LAB68:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t37, 0LL);
    goto LAB69;

LAB72:    t25 = (t0 + 10016U);
    *((char **)t25) = &&LAB70;
    goto LAB1;

LAB73:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, *((unsigned int *)t21), t37, 0LL);
    goto LAB74;

LAB76:    xsi_set_current_line(111, ng0);
    t19 = (t0 + 7728);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t0 + 7728);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 7728);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = (t0 + 8208);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t53 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t33, 32, t53, 32);
    xsi_vlog_generic_get_array_select_value(t21, 21, t23, t26, t29, 2, 1, t22, 32, 1);
    t55 = (t0 + 7728);
    t56 = (t0 + 7728);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 7728);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 8208);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_generic_convert_array_indices(t52, t54, t58, t61, 2, 1, t64, 32, 1);
    t65 = (t52 + 4);
    t14 = *((unsigned int *)t65);
    t32 = (!(t14));
    t71 = (t54 + 4);
    t15 = *((unsigned int *)t71);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 8208);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 8208);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB75;

LAB78:    t16 = *((unsigned int *)t52);
    t17 = *((unsigned int *)t54);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t55, t21, 0, *((unsigned int *)t54), t37, 0LL);
    goto LAB79;

LAB80:    xsi_set_current_line(114, ng0);

LAB83:    xsi_set_current_line(115, ng0);
    t20 = (t0 + 7408);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 7408);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 7408);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng25)));
    xsi_vlog_generic_get_array_select_value(t21, 32, t24, t27, t30, 2, 1, t31, 32, 1);

LAB84:    t33 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t21, 32, t33, 32);
    if (t32 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t21, 32, t2, 32);
    if (t32 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t21, 32, t2, 32);
    if (t32 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB82;

LAB85:    xsi_set_current_line(116, ng0);
    t53 = (t0 + 4928U);
    t55 = *((char **)t53);
    t53 = (t0 + 9824);
    t56 = (t0 + 1416);
    t57 = xsi_create_subprogram_invocation(t53, 0, t0, t56, 0, 0);
    t58 = (t0 + 8848);
    xsi_vlogvar_assign_value(t58, t55, 0, 0, 37);

LAB92:    t59 = (t0 + 9920);
    t60 = *((char **)t59);
    t61 = (t60 + 80U);
    t62 = *((char **)t61);
    t63 = (t62 + 272U);
    t64 = *((char **)t63);
    t65 = (t64 + 0U);
    t71 = *((char **)t65);
    t34 = ((int  (*)(char *, char *))t71)(t0, t60);
    if (t34 != 0)
        goto LAB94;

LAB93:    t60 = (t0 + 9920);
    t72 = *((char **)t60);
    t60 = (t0 + 8688);
    t73 = (t60 + 56U);
    t74 = *((char **)t73);
    memcpy(t66, t74, 16);
    t75 = (t0 + 1416);
    t76 = (t0 + 9824);
    t77 = 0;
    xsi_delete_subprogram_invocation(t75, t72, t0, t76, t77);
    t78 = (t0 + 5328);
    xsi_vlogvar_wait_assign_value(t78, t66, 0, 0, 35, 0LL);
    goto LAB91;

LAB87:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 4928U);
    t6 = *((char **)t3);
    t3 = (t0 + 9824);
    t12 = (t0 + 1416);
    t13 = xsi_create_subprogram_invocation(t3, 0, t0, t12, 0, 0);
    t19 = (t0 + 8848);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 37);

LAB95:    t20 = (t0 + 9920);
    t23 = *((char **)t20);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t34 = ((int  (*)(char *, char *))t29)(t0, t23);
    if (t34 != 0)
        goto LAB97;

LAB96:    t23 = (t0 + 9920);
    t30 = *((char **)t23);
    t23 = (t0 + 8688);
    t31 = (t23 + 56U);
    t33 = *((char **)t31);
    memcpy(t66, t33, 16);
    t53 = (t0 + 1416);
    t55 = (t0 + 9824);
    t56 = 0;
    xsi_delete_subprogram_invocation(t53, t30, t0, t55, t56);
    t57 = (t0 + 5488);
    xsi_vlogvar_wait_assign_value(t57, t66, 0, 0, 35, 0LL);
    goto LAB91;

LAB89:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 4928U);
    t6 = *((char **)t3);
    t3 = (t0 + 9824);
    t12 = (t0 + 1416);
    t13 = xsi_create_subprogram_invocation(t3, 0, t0, t12, 0, 0);
    t19 = (t0 + 8848);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 37);

LAB98:    t20 = (t0 + 9920);
    t23 = *((char **)t20);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t34 = ((int  (*)(char *, char *))t29)(t0, t23);
    if (t34 != 0)
        goto LAB100;

LAB99:    t23 = (t0 + 9920);
    t30 = *((char **)t23);
    t23 = (t0 + 8688);
    t31 = (t23 + 56U);
    t33 = *((char **)t31);
    memcpy(t66, t33, 16);
    t53 = (t0 + 1416);
    t55 = (t0 + 9824);
    t56 = 0;
    xsi_delete_subprogram_invocation(t53, t30, t0, t55, t56);
    t57 = (t0 + 5648);
    xsi_vlogvar_wait_assign_value(t57, t66, 0, 0, 35, 0LL);
    goto LAB91;

LAB94:    t59 = (t0 + 10016U);
    *((char **)t59) = &&LAB92;
    goto LAB1;

LAB97:    t20 = (t0 + 10016U);
    *((char **)t20) = &&LAB95;
    goto LAB1;

LAB100:    t20 = (t0 + 10016U);
    *((char **)t20) = &&LAB98;
    goto LAB1;

}


extern void work_m_00000000002896231980_3155786691_init()
{
	static char *pe[] = {(void *)NetDecl_47_0,(void *)Always_75_1};
	static char *se[] = {(void *)sp_remainder_times_q19,(void *)sp_saturate};
	xsi_register_didat("work_m_00000000002896231980_3155786691", "isim/test.exe.sim/work/m_00000000002896231980_3155786691.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
