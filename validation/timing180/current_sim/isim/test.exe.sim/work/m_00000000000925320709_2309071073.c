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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_current180.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {5, 0};
static int ng4[] = {0, 0, 0, 0};
static int ng5[] = {20, 0};
static int ng6[] = {4, 0};
static int ng7[] = {52, 0};
static int ng8[] = {7, 0};
static int ng9[] = {3, 0};
static int ng10[] = {18, 0};
static const char *ng11 = "FAIL: current phase=%0d actual=%0d expected=%0d";
static int ng12[] = {1, 0, 0, 0};
static int ng13[] = {65536, 0, 0, 0};
static int ng14[] = {24, 0};
static int ng15[] = {9000, 0};
static int ng16[] = {360, 0};
static int ng17[] = {5001, 0};
static int ng18[] = {5004, 0};
static int ng19[] = {450, 0};
static const char *ng20 = "PASS: current180 five-phase recurrence updates=%0d, signed wrap, R, EMF, coefficient snapshots and reset";
static const char *ng21 = "FAIL: current180 errors=%0d updates=%0d";
static const char *ng22 = "FAIL: current180 timeout";



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

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(5, ng0);
    t2 = (t0 + 5536);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(5, ng0);
    t4 = (t0 + 1448);
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
    t24 = (t0 + 1448);
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

static void Always_31_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t24[8];
    char t38[16];
    char t39[16];
    char t40[16];
    char t43[16];
    char t58[8];
    char t73[8];
    char t78[8];
    char t79[8];
    char t80[8];
    char t102[16];
    char t106[16];
    char t116[16];
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
    char *t41;
    char *t42;
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
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
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
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
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
    char *t117;

LAB0:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1608);
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

LAB11:    xsi_set_current_line(38, ng0);

LAB28:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2568);
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
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB51:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t24, 0, 8);
    xsi_vlog_signed_equal(t24, 32, t5, 32, t6, 32);
    memset(t23, 0, 8);
    t7 = (t24 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t24);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t7) != 0)
        goto LAB78;

LAB79:    t14 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB80;

LAB81:    t19 = *((unsigned int *)t23);
    t20 = (~(t19));
    t70 = *((unsigned int *)t14);
    t71 = (t20 || t70);
    if (t71 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t14) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t23) > 0)
        goto LAB86;

LAB87:    memcpy(t4, t58, 8);

LAB88:    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t4, 0, 0, 32);

LAB12:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5784);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2568);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
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

LAB15:    xsi_set_current_line(34, ng0);

LAB17:    xsi_set_current_line(35, ng0);
    t8 = ((char*)((ng4)));
    t14 = (t0 + 3368);
    t15 = (t0 + 3368);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t25 = (t0 + 3368);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 3048);
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

LAB19:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    t5 = (t0 + 3528);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3528);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 3048);
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

LAB21:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3688);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 3048);
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

LAB23:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    t5 = (t0 + 3848);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3848);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 3048);
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

LAB25:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4008);
    t14 = (t8 + 64U);
    t15 = *((char **)t14);
    t21 = (t0 + 3048);
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
        goto LAB26;

LAB27:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3048);
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

LAB26:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t23), t37);
    goto LAB27;

LAB29:    xsi_set_current_line(39, ng0);

LAB32:    xsi_set_current_line(40, ng0);
    t8 = (t0 + 2408);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memcpy(t23, t15, 8);
    t21 = (t0 + 4648);
    xsi_vlogvar_assign_value(t21, t23, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB34;

LAB35:    goto LAB31;

LAB34:    xsi_set_current_line(41, ng0);

LAB36:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 3688);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 3688);
    t22 = (t21 + 72U);
    t25 = *((char **)t22);
    t26 = (t0 + 3688);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 3048);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_get_array_select_value(t39, 35, t15, t25, t28, 1, 1, t31, 32, 1);
    xsi_vlogtype_sign_extend(t38, 64, t39, 35);
    t33 = (t0 + 4488);
    xsi_vlogvar_assign_value(t33, t38, 0, 0, 64);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_multiply(t38, 64, t5, 64, t8, 16);
    t14 = (t0 + 4488);
    xsi_vlogvar_assign_value(t14, t38, 0, 0, 64);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    xsi_vlog_signed_arith_rshift(t38, 64, t5, 64, t6, 32);
    t7 = (t0 + 3848);
    t8 = (t0 + 3848);
    t14 = (t8 + 72U);
    t15 = *((char **)t14);
    t21 = (t0 + 3848);
    t22 = (t21 + 64U);
    t25 = *((char **)t22);
    t26 = (t0 + 3048);
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
        goto LAB37;

LAB38:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB33;

LAB37:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t7, t38, 0, *((unsigned int *)t23), t37);
    goto LAB38;

LAB39:    xsi_set_current_line(47, ng0);

LAB42:    xsi_set_current_line(48, ng0);
    t8 = (t0 + 2888);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng1)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t15, 32, t21, 32);
    t22 = (t0 + 2888);
    xsi_vlogvar_assign_value(t22, t23, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB43:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB44;

LAB45:    goto LAB41;

LAB44:    xsi_set_current_line(49, ng0);

LAB46:    xsi_set_current_line(50, ng0);
    t8 = (t0 + 3368);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = (t0 + 3368);
    t22 = (t21 + 72U);
    t25 = *((char **)t22);
    t26 = (t0 + 3368);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 3048);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_get_array_select_value(t39, 53, t15, t25, t28, 2, 1, t31, 32, 1);
    xsi_vlog_get_part_select_value(t40, 34, t39, 43, 10);
    t33 = (t0 + 3368);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    t44 = (t0 + 3368);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 3368);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 3048);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t43, 53, t42, t46, t49, 2, 1, t52, 32, 1);
    t53 = (t0 + 3368);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t23, 1, t43, t55, 2, t56, 32, 1);
    xsi_vlogtype_concat(t38, 35, 35, 2U, t23, 1, t40, 34);
    t57 = (t0 + 3688);
    t59 = (t0 + 3688);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 3688);
    t63 = (t62 + 64U);
    t64 = *((char **)t63);
    t65 = (t0 + 3048);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlog_generic_convert_array_indices(t24, t58, t61, t64, 1, 1, t67, 32, 1);
    t68 = (t24 + 4);
    t16 = *((unsigned int *)t68);
    t32 = (!(t16));
    t69 = (t58 + 4);
    t17 = *((unsigned int *)t69);
    t34 = (!(t17));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t14 = (t0 + 3368);
    t15 = (t14 + 64U);
    t21 = *((char **)t15);
    t22 = (t0 + 3048);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_array_select_value(t38, 53, t5, t8, t21, 1, 1, t26, 32, 1);
    t27 = (t0 + 3528);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 3528);
    t31 = (t30 + 72U);
    t33 = *((char **)t31);
    t41 = (t0 + 3528);
    t42 = (t41 + 64U);
    t44 = *((char **)t42);
    t45 = (t0 + 3048);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_array_select_value(t39, 53, t29, t33, t44, 1, 1, t47, 32, 1);
    xsi_vlog_signed_add(t40, 53, t38, 53, t39, 53);
    t48 = (t0 + 3368);
    t49 = (t0 + 3368);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = (t0 + 3368);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = (t0 + 3048);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    xsi_vlog_generic_convert_array_indices(t4, t23, t51, t54, 1, 1, t57, 32, 1);
    t59 = (t4 + 4);
    t9 = *((unsigned int *)t59);
    t32 = (!(t9));
    t60 = (t23 + 4);
    t10 = *((unsigned int *)t60);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB43;

LAB47:    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t58);
    t36 = (t18 - t19);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t57, t38, 0, *((unsigned int *)t58), t37);
    goto LAB48;

LAB49:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t48, t40, 0, *((unsigned int *)t23), t37);
    goto LAB50;

LAB52:    xsi_set_current_line(54, ng0);

LAB54:    xsi_set_current_line(55, ng0);
    t8 = (t0 + 2568);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t21 = ((char*)((ng8)));
    t22 = ((char*)((ng9)));
    t25 = (t0 + 3048);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng9)));
    memset(t58, 0, 8);
    xsi_vlog_signed_greatereq(t58, 32, t27, 32, t28, 32);
    memset(t24, 0, 8);
    t29 = (t58 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (~(t16));
    t18 = *((unsigned int *)t58);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t29) != 0)
        goto LAB57;

LAB58:    t31 = (t24 + 4);
    t70 = *((unsigned int *)t24);
    t71 = *((unsigned int *)t31);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB59;

LAB60:    t74 = *((unsigned int *)t24);
    t75 = (~(t74));
    t76 = *((unsigned int *)t31);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t31) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t24) > 0)
        goto LAB65;

LAB66:    memcpy(t23, t47, 8);

LAB67:    memset(t78, 0, 8);
    xsi_vlog_signed_multiply(t78, 32, t22, 32, t23, 32);
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t21, 32, t78, 32);
    memset(t80, 0, 8);
    xsi_vlog_signed_equal(t80, 32, t15, 32, t79, 32);
    t48 = (t80 + 4);
    t81 = *((unsigned int *)t48);
    t82 = (~(t81));
    t83 = *((unsigned int *)t80);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB51;

LAB55:    *((unsigned int *)t24) = 1;
    goto LAB58;

LAB57:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB58;

LAB59:    t33 = (t0 + 3048);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    t44 = ((char*)((ng9)));
    memset(t73, 0, 8);
    xsi_vlog_signed_minus(t73, 32, t42, 32, t44, 32);
    goto LAB60;

LAB61:    t45 = (t0 + 3048);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t23, 32, t73, 32, t47, 32);
    goto LAB67;

LAB65:    memcpy(t23, t73, 8);
    goto LAB67;

LAB68:    xsi_set_current_line(55, ng0);

LAB71:    xsi_set_current_line(56, ng0);
    t49 = (t0 + 1768);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t0 + 1768);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = (t0 + 1768);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t59 = (t0 + 3048);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_get_array_select_value(t38, 35, t51, t54, t57, 1, 1, t61, 32, 1);
    t62 = (t0 + 1928);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t0 + 1928);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = (t0 + 1928);
    t69 = (t68 + 64U);
    t86 = *((char **)t69);
    t87 = (t0 + 3048);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    xsi_vlog_generic_get_array_select_value(t39, 35, t64, t67, t86, 1, 1, t89, 32, 1);
    xsi_vlog_signed_minus(t40, 35, t38, 35, t39, 35);
    t90 = (t0 + 3848);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t0 + 3848);
    t94 = (t93 + 72U);
    t95 = *((char **)t94);
    t96 = (t0 + 3848);
    t97 = (t96 + 64U);
    t98 = *((char **)t97);
    t99 = (t0 + 3048);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    xsi_vlog_generic_get_array_select_value(t43, 35, t92, t95, t98, 1, 1, t101, 32, 1);
    xsi_vlog_signed_minus(t102, 35, t40, 35, t43, 35);
    t103 = (t0 + 2088);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t107 = (t0 + 2088);
    t108 = (t107 + 72U);
    t109 = *((char **)t108);
    t110 = (t0 + 2088);
    t111 = (t110 + 64U);
    t112 = *((char **)t111);
    t113 = (t0 + 3048);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    xsi_vlog_generic_get_array_select_value(t106, 35, t105, t109, t112, 1, 1, t115, 32, 1);
    xsi_vlog_signed_minus(t116, 35, t102, 35, t106, 35);
    t117 = (t0 + 4168);
    xsi_vlogvar_assign_value(t117, t116, 0, 0, 35);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4008);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t0 + 4008);
    t15 = (t14 + 72U);
    t21 = *((char **)t15);
    t22 = (t0 + 4008);
    t25 = (t22 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 3048);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t38, 35, t8, t21, t26, 1, 1, t29, 32, 1);
    xsi_vlog_signed_add(t39, 35, t5, 35, t38, 35);
    t30 = (t0 + 4328);
    xsi_vlogvar_assign_value(t30, t39, 0, 0, 35);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4008);
    t7 = (t0 + 4008);
    t8 = (t7 + 72U);
    t14 = *((char **)t8);
    t15 = (t0 + 4008);
    t21 = (t15 + 64U);
    t22 = *((char **)t21);
    t25 = (t0 + 3048);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t4, t23, t14, t22, 1, 1, t27, 32, 1);
    t28 = (t4 + 4);
    t9 = *((unsigned int *)t28);
    t32 = (!(t9));
    t29 = (t23 + 4);
    t10 = *((unsigned int *)t29);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB72;

LAB73:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogtype_sign_extend(t38, 64, t5, 35);
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t38, 0, 0, 64);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_signed_multiply(t38, 64, t5, 64, t8, 32);
    t14 = (t0 + 3528);
    t15 = (t0 + 3528);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t25 = (t0 + 3528);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 3048);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t4, t23, t22, t27, 1, 1, t30, 32, 1);
    t31 = (t4 + 4);
    t9 = *((unsigned int *)t31);
    t32 = (!(t9));
    t33 = (t23 + 4);
    t10 = *((unsigned int *)t33);
    t34 = (!(t10));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB74;

LAB75:    goto LAB70;

LAB72:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t23), t37);
    goto LAB73;

LAB74:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t23);
    t36 = (t11 - t12);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t14, t38, 0, *((unsigned int *)t23), t37);
    goto LAB75;

LAB76:    *((unsigned int *)t23) = 1;
    goto LAB79;

LAB78:    t8 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB79;

LAB80:    t15 = ((char*)((ng1)));
    goto LAB81;

LAB82:    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t26 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t25, 32, t26, 32);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t4, 32, t15, 32, t58, 32);
    goto LAB88;

LAB86:    memcpy(t4, t15, 8);
    goto LAB88;

LAB89:    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB90:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB91;

LAB92:    goto LAB2;

LAB91:    xsi_set_current_line(66, ng0);

LAB93:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 1048U);
    t14 = *((char **)t8);
    t8 = (t0 + 1008U);
    t15 = (t8 + 72U);
    t21 = *((char **)t15);
    t22 = (t0 + 1008U);
    t25 = (t22 + 48U);
    t26 = *((char **)t25);
    t27 = (t0 + 3048);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t38, 35, t14, t21, t26, 1, 1, t29, 32, 1);
    t30 = (t0 + 3688);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t41 = (t0 + 3688);
    t42 = (t41 + 72U);
    t44 = *((char **)t42);
    t45 = (t0 + 3688);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3048);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_array_select_value(t39, 35, t33, t44, t47, 1, 1, t50, 32, 1);
    xsi_vlog_signed_case_noteq(t40, 35, t38, 35, t39, 35);
    t51 = (t40 + 4);
    t16 = *((unsigned int *)t51);
    t17 = (~(t16));
    t18 = *((unsigned int *)t40);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB90;

LAB94:    xsi_set_current_line(67, ng0);

LAB97:    xsi_set_current_line(68, ng0);
    t52 = (t0 + 3048);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t0 + 1048U);
    t56 = *((char **)t55);
    t55 = (t0 + 1008U);
    t57 = (t55 + 72U);
    t59 = *((char **)t57);
    t60 = (t0 + 1008U);
    t61 = (t60 + 48U);
    t62 = *((char **)t61);
    t63 = (t0 + 3048);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    xsi_vlog_generic_get_array_select_value(t43, 35, t56, t59, t62, 1, 1, t65, 32, 1);
    t66 = (t0 + 3688);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t0 + 3688);
    t86 = (t69 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 3688);
    t89 = (t88 + 64U);
    t90 = *((char **)t89);
    t91 = (t0 + 3048);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    xsi_vlog_generic_get_array_select_value(t102, 35, t68, t87, t90, 1, 1, t93, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng11, 4, t0, (char)119, t54, 32, (char)119, t43, 35, (char)119, t102, 35);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB96;

}

static void Initial_73_2(char *t0)
{
    char t6[8];
    char t17[16];
    char t19[16];
    char t21[8];
    char t22[8];
    char t43[8];
    char t44[8];
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
    char *t15;
    char *t16;
    char *t18;
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
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
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
    unsigned int t58;
    unsigned int t59;
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
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);

LAB4:    xsi_set_current_line(74, ng0);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
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

LAB7:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t34 = (t10 & t9);
    t4 = (t0 + 9340);
    *((int *)t4) = t34;

LAB15:    t5 = (t0 + 9340);
    if (*((int *)t5) > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    memset(t21, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t7) != 0)
        goto LAB46;

LAB47:    t14 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t14);
    t39 = (t33 || t36);
    if (t39 > 0)
        goto LAB48;

LAB49:    memcpy(t44, t21, 8);

LAB50:    t30 = (t44 + 4);
    t73 = *((unsigned int *)t30);
    t74 = (~(t73));
    t75 = *((unsigned int *)t44);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng21, 3, t0, (char)119, t4, 32, (char)119, t13, 32);

LAB60:    xsi_set_current_line(92, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(74, ng0);

LAB8:    xsi_set_current_line(74, ng0);
    t13 = (t0 + 3208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng12)));
    xsi_vlog_signed_add(t17, 35, t15, 32, t16, 32);
    t18 = ((char*)((ng13)));
    xsi_vlog_signed_multiply(t19, 35, t17, 35, t18, 32);
    t20 = (t0 + 1768);
    t23 = (t0 + 1768);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 1768);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 3208);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 1, 1, t31, 32, 1);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t22 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 1928);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3208);
    t18 = (t16 + 56U);
    t20 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t6, t21, t7, t15, 1, 1, t20, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t34 = (!(t8));
    t24 = (t21 + 4);
    t9 = *((unsigned int *)t24);
    t37 = (!(t9));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 2088);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3208);
    t18 = (t16 + 56U);
    t20 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t6, t21, t7, t15, 1, 1, t20, 32, 1);
    t23 = (t6 + 4);
    t8 = *((unsigned int *)t23);
    t34 = (!(t8));
    t24 = (t21 + 4);
    t9 = *((unsigned int *)t24);
    t37 = (!(t9));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB9:    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t20, t19, 0, *((unsigned int *)t22), t42);
    goto LAB10;

LAB11:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t21);
    t41 = (t10 - t11);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t42);
    goto LAB12;

LAB13:    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t21);
    t41 = (t10 - t11);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t42);
    goto LAB14;

LAB16:    xsi_set_current_line(75, ng0);
    t7 = (t0 + 6808);
    *((int *)t7) = 1;
    t13 = (t0 + 6256);
    *((char **)t13) = t7;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    t2 = (t0 + 9340);
    t34 = *((int *)t2);
    *((int *)t2) = (t34 - 1);
    goto LAB15;

LAB20:    xsi_set_current_line(76, ng0);

LAB22:    xsi_set_current_line(77, ng0);
    t13 = (t0 + 6824);
    *((int *)t13) = 1;
    t14 = (t0 + 6256);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng18)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB19;

LAB24:    xsi_set_current_line(79, ng0);

LAB27:    xsi_set_current_line(80, ng0);
    *((int *)t21) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t13 = (t21 + 4);
    *((int *)t13) = 0;
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t21, 0, 0, 16);
    xsi_set_current_line(81, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 16);
    xsi_set_current_line(82, ng0);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB28:    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB29;

LAB30:    goto LAB26;

LAB29:    xsi_set_current_line(82, ng0);

LAB31:    xsi_set_current_line(83, ng0);
    *((int *)t21) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t13 = (t21 + 4);
    *((int *)t13) = 0;
    *((int *)t22) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t14 = (t22 + 4);
    *((int *)t14) = 0;
    xsi_vlogtype_concat(t17, 64, 64, 2U, t22, 32, t21, 32);
    t15 = (t0 + 1768);
    t16 = (t0 + 1768);
    t18 = (t16 + 72U);
    t20 = *((char **)t18);
    t23 = (t0 + 1768);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 4808);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t43, t44, t20, t25, 1, 1, t28, 32, 1);
    t29 = (t43 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (!(t33));
    t30 = (t44 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(83, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    *((int *)t21) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t3 = (t21 + 4);
    *((int *)t3) = 0;
    xsi_vlogtype_concat(t17, 64, 64, 2U, t21, 32, t6, 32);
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 1928);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 4808);
    t20 = (t18 + 56U);
    t23 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t22, t43, t13, t16, 1, 1, t23, 32, 1);
    t24 = (t22 + 4);
    t8 = *((unsigned int *)t24);
    t34 = (!(t8));
    t25 = (t43 + 4);
    t9 = *((unsigned int *)t25);
    t37 = (!(t9));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);
    *((int *)t6) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    *((int *)t21) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t3 = (t21 + 4);
    *((int *)t3) = 0;
    xsi_vlogtype_concat(t17, 64, 64, 2U, t21, 32, t6, 32);
    t4 = (t0 + 2088);
    t5 = (t0 + 2088);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 4808);
    t20 = (t18 + 56U);
    t23 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t22, t43, t13, t16, 1, 1, t23, 32, 1);
    t24 = (t22 + 4);
    t8 = *((unsigned int *)t24);
    t34 = (!(t8));
    t25 = (t43 + 4);
    t9 = *((unsigned int *)t25);
    t37 = (!(t9));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB28;

LAB32:    t39 = *((unsigned int *)t43);
    t40 = *((unsigned int *)t44);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t15, t17, 0, *((unsigned int *)t44), t42);
    goto LAB33;

LAB34:    t10 = *((unsigned int *)t22);
    t11 = *((unsigned int *)t43);
    t41 = (t10 - t11);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t4, t17, 0, *((unsigned int *)t43), t42);
    goto LAB35;

LAB36:    t10 = *((unsigned int *)t22);
    t11 = *((unsigned int *)t43);
    t41 = (t10 - t11);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t4, t17, 0, *((unsigned int *)t43), t42);
    goto LAB37;

LAB38:    xsi_set_current_line(86, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB40;

LAB41:    xsi_set_current_line(87, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB43;

LAB44:    *((unsigned int *)t21) = 1;
    goto LAB47;

LAB46:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB47;

LAB48:    t15 = (t0 + 2888);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t20 = ((char*)((ng19)));
    memset(t22, 0, 8);
    xsi_vlog_signed_greater(t22, 32, t18, 32, t20, 32);
    memset(t43, 0, 8);
    t23 = (t22 + 4);
    t40 = *((unsigned int *)t23);
    t45 = (~(t40));
    t46 = *((unsigned int *)t22);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t23) != 0)
        goto LAB53;

LAB54:    t49 = *((unsigned int *)t21);
    t50 = *((unsigned int *)t43);
    t51 = (t49 & t50);
    *((unsigned int *)t44) = t51;
    t25 = (t21 + 4);
    t26 = (t43 + 4);
    t27 = (t44 + 4);
    t52 = *((unsigned int *)t25);
    t53 = *((unsigned int *)t26);
    t54 = (t52 | t53);
    *((unsigned int *)t27) = t54;
    t55 = *((unsigned int *)t27);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB50;

LAB51:    *((unsigned int *)t43) = 1;
    goto LAB54;

LAB53:    t24 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB54;

LAB55:    t57 = *((unsigned int *)t44);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t44) = (t57 | t58);
    t28 = (t21 + 4);
    t29 = (t43 + 4);
    t59 = *((unsigned int *)t21);
    t60 = (~(t59));
    t61 = *((unsigned int *)t28);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (~(t63));
    t65 = *((unsigned int *)t29);
    t66 = (~(t65));
    t34 = (t60 & t62);
    t37 = (t64 & t66);
    t67 = (~(t34));
    t68 = (~(t37));
    t69 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t69 & t67);
    t70 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t70 & t68);
    t71 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t71 & t67);
    t72 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t72 & t68);
    goto LAB57;

LAB58:    xsi_set_current_line(90, ng0);
    t31 = (t0 + 2888);
    t32 = (t31 + 56U);
    t35 = *((char **)t32);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)119, t35, 32);
    goto LAB60;

}

static void Initial_95_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6280);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(95, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000000925320709_2309071073_init()
{
	static char *pe[] = {(void *)Always_5_0,(void *)Always_31_1,(void *)Initial_73_2,(void *)Initial_95_3};
	xsi_register_didat("work_m_00000000000925320709_2309071073", "isim/test.exe.sim/work/m_00000000000925320709_2309071073.didat");
	xsi_register_executes(pe);
}
