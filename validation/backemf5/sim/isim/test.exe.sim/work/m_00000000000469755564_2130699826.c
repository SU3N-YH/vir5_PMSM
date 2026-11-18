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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/test_backEMF.v";
static int ng1[] = {1, 0};
static int ng2[] = {12, 0};
static int ng3[] = {2, 0, 0, 0};
static int ng4[] = {1, 0, 0, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {67108, 0};
static int ng8[] = {14, 0};
static unsigned int ng9[] = {262143U, 0U};
static int ng10[] = {131072, 0};
static int ng11[] = {262144, 0};
static int ng12[] = {4, 0};
static int ng13[] = {13, 0};
static int ng14[] = {0, 0};
static unsigned int ng15[] = {1U, 1U};
static const char *ng16 = "FAIL: settled STM32 error at test %0d: actual=%0d ideal=%0d diff=%0d";
static const char *ng17 = "SWEEP,%0d,%0d,%0d,%0d,%0d,0x%04h,%0d,0x%04h,%0d,%0d";
static int ng18[] = {24, 0};
static unsigned int ng19[] = {4096U, 0U};
static unsigned int ng20[] = {400U, 0U};
static unsigned int ng21[] = {16384U, 0U};
static unsigned int ng22[] = {8192U, 0U};
static unsigned int ng23[] = {24576U, 0U};
static int ng24[] = {32768, 0};
static int ng25[] = {32767, 0};
static int ng26[] = {256, 0};
static unsigned int ng27[] = {32767U, 0U};
static unsigned int ng28[] = {4094U, 0U};
static unsigned int ng29[] = {4095U, 0U};
static unsigned int ng30[] = {4097U, 0U};
static unsigned int ng31[] = {4098U, 0U};
static unsigned int ng32[] = {6554U, 0U};
static unsigned int ng33[] = {13107U, 0U};
static unsigned int ng34[] = {19661U, 0U};
static unsigned int ng35[] = {26214U, 0U};
static int ng36[] = {2, 0};
static int ng37[] = {1024, 0};
static unsigned int ng38[] = {800U, 0U};
static const char *ng39 = "PASS: five-phase BackEMF sweep samples=%0d max absolute error=%0d STM32 codes";
static const char *ng40 = "FAIL: sweep errors=%0d";
static const char *ng41 = "FAIL: sweep timeout";



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
    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t1 + 7816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 7976);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(57, ng0);

LAB3:    t3 = (t1 + 7976);
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

LAB5:    xsi_set_current_line(58, ng0);

LAB6:    t3 = (t1 + 7976);
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

LAB8:    xsi_set_current_line(59, ng0);
    t3 = (t1 + 7976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 8136);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(60, ng0);
    t3 = (t1 + 7976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 8296);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 8456);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB9:    t3 = (t1 + 8456);
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

LAB11:    xsi_set_current_line(65, ng0);
    t3 = (t1 + 8296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 7656);
    xsi_vlogvar_assign_value_double(t7, t6, 0);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(57, ng0);
    t16 = (t1 + 7976);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = *((double *)t18);
    t20 = (t19 - 6.2831853071795862);
    t21 = (t1 + 7976);
    xsi_vlogvar_assign_value_double(t21, t20, 0);
    goto LAB3;

LAB7:    xsi_set_current_line(58, ng0);
    t16 = (t1 + 7976);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = *((double *)t18);
    t22 = (t20 + 6.2831853071795862);
    t21 = (t1 + 7976);
    xsi_vlogvar_assign_value_double(t21, t22, 0);
    goto LAB6;

LAB10:    xsi_set_current_line(61, ng0);

LAB12:    xsi_set_current_line(62, ng0);
    t16 = (t1 + 8136);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t6 = *((double *)t18);
    t19 = (-(t6));
    t21 = (t1 + 7976);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t20 = *((double *)t24);
    t22 = (t19 * t20);
    t25 = (t1 + 7976);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = *((double *)t27);
    t29 = (t22 * t28);
    t30 = ((char*)((ng3)));
    t31 = (t1 + 8456);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_signed_multiply(t34, 64, t30, 32, t33, 32);
    t35 = ((char*)((ng3)));
    t36 = (t1 + 8456);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_signed_multiply(t39, 64, t35, 32, t38, 32);
    t40 = ((char*)((ng4)));
    xsi_vlog_signed_add(t41, 64, t39, 64, t40, 32);
    xsi_vlog_signed_multiply(t42, 64, t34, 64, t41, 64);
    t43 = xsi_vlog_convert_to_real(t42, 32, 1);
    t44 = (t29 / t43);
    t45 = (t1 + 8136);
    xsi_vlogvar_assign_value_double(t45, t44, 0);
    xsi_set_current_line(63, ng0);
    t3 = (t1 + 8296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t7 = (t1 + 8136);
    t10 = (t7 + 56U);
    t16 = *((char **)t10);
    t19 = *((double *)t16);
    t20 = (t6 + t19);
    t17 = (t1 + 8296);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(61, ng0);
    t3 = (t1 + 8456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t10 = (t1 + 8456);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB9;

}

static int sp_floor_real(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t31[8];
    char t33[8];
    char t41[8];
    char t83[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    double t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    double t25;
    char *t26;
    char *t27;
    char *t28;
    double t29;
    unsigned int t30;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;

LAB0:    t0 = 1;
    xsi_set_current_line(72, ng0);

LAB2:    xsi_set_current_line(73, ng0);
    t3 = (t1 + 8776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    *((int *)t7) = ((int)(t6));
    t8 = (t7 + 4);
    *((int *)t8) = 0;
    t9 = (t1 + 8936);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t3 = (t1 + 8776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = *((double *)t5);
    t10 = (t6 < 0.00000000000000000);
    *((unsigned int *)t7) = t10;
    t8 = (t7 + 4);
    *((unsigned int *)t8) = 0U;
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB3;

LAB4:    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB6:    t18 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB7;

LAB8:    memcpy(t41, t11, 8);

LAB9:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(77, ng0);
    t3 = (t1 + 8936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t1 + 8616);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);

LAB19:    t0 = 0;

LAB1:    return t0;
LAB3:    *((unsigned int *)t11) = 1;
    goto LAB6;

LAB5:    t17 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB6;

LAB7:    t22 = (t1 + 8936);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = xsi_vlog_convert_to_real(t24, 32, 1);
    t26 = (t1 + 8776);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = *((double *)t28);
    t30 = (t25 != t29);
    *((unsigned int *)t31) = t30;
    t32 = (t31 + 4);
    *((unsigned int *)t32) = 0U;
    memset(t33, 0, 8);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t34) != 0)
        goto LAB12;

LAB13:    t42 = *((unsigned int *)t11);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t11 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB9;

LAB10:    *((unsigned int *)t33) = 1;
    goto LAB13;

LAB12:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB13;

LAB14:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t11 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t11);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB16;

LAB17:    xsi_set_current_line(75, ng0);
    t79 = (t1 + 8936);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng1)));
    memset(t83, 0, 8);
    xsi_vlog_signed_minus(t83, 32, t81, 32, t82, 32);
    t84 = (t1 + 8616);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 32);
    goto LAB19;

}

static int sp_apply_sample(char *t1, char *t2)
{
    char t8[8];
    char t41[8];
    char t60[8];
    char t61[8];
    char t62[8];
    char t63[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    double t42;
    double t43;
    double t44;
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
    double t58;
    double t59;
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
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
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

LAB6:    xsi_set_current_line(88, ng0);
    t4 = (t1 + 9096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4456);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t4 = (t1 + 9256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4616);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t4 = (t1 + 9416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4776);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(91, ng0);
    t4 = (t1 + 4936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t6, 16, t7, 16);
    t9 = (t1 + 4936);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t4 = (t1 + 9416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 16, t7, 32);
    t9 = (t1 + 6856);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t4 = (t1 + 6856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_arith_rshift(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 6856);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 6856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t8) = t12;
    t9 = (t6 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB7;

LAB8:
LAB9:    t40 = (t1 + 7176);
    xsi_vlogvar_assign_value(t40, t8, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 7176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t15 = (t12 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(101, ng0);
    t4 = (t1 + 9256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng12)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 16, t7, 32);
    t9 = (t1 + 7336);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t4 = (t1 + 7336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7176);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t13, 32);
    t14 = ((char*)((ng13)));
    memset(t41, 0, 8);
    xsi_vlog_signed_arith_rshift(t41, 32, t8, 32, t14, 32);
    t22 = (t1 + 7016);
    xsi_vlogvar_assign_value(t22, t41, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t4 = (t1 + 7016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t8) = t12;
    t9 = (t6 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB13;

LAB14:
LAB15:    t40 = (t1 + 7496);
    xsi_vlogvar_assign_value(t40, t8, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    t4 = (t1 + 7496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t15 = (t12 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(106, ng0);
    t4 = (t1 + 7496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5416);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 18);
    xsi_set_current_line(108, ng0);
    t4 = (t1 + 9096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t42 = xsi_vlog_convert_to_real(t6, 16, 1);
    t43 = (t42 * 6.2831853071795862);
    t44 = (t43 / 32768.000000000000);
    t7 = (t1 + 9576);
    xsi_vlogvar_assign_value_double(t7, t44, 0);
    xsi_set_current_line(109, ng0);
    t4 = (t1 + 9576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t42 = *((double *)t6);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t13 = (t1 + 1120);
    t14 = xsi_create_subprogram_invocation(t9, 0, t1, t13, 0, t2);
    t22 = (t1 + 7816);
    xsi_vlogvar_assign_value_double(t22, t42, 0);

LAB19:    t23 = (t2 + 64U);
    t40 = *((char **)t23);
    t45 = (t40 + 80U);
    t46 = *((char **)t45);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t32 = ((int  (*)(char *, char *))t50)(t1, t40);
    if (t32 != 0)
        goto LAB21;

LAB20:    t40 = (t2 + 64U);
    t51 = *((char **)t40);
    t40 = (t1 + 7656);
    t52 = (t40 + 56U);
    t53 = *((char **)t52);
    t43 = *((double *)t53);
    t54 = (t1 + 1120);
    t55 = (t2 + 56U);
    t56 = *((char **)t55);
    xsi_delete_subprogram_invocation(t54, t51, t1, t56, t2);
    t57 = (t1 + 5576);
    xsi_vlogvar_assign_value_double(t57, t43, 0);
    xsi_set_current_line(110, ng0);
    t4 = (t1 + 7496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t42 = xsi_vlog_convert_to_real(t6, 32, 1);
    t43 = (-(t42));
    t7 = (t1 + 5576);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    t44 = *((double *)t13);
    t58 = (t43 * t44);
    t59 = (t58 / 64.000000000000000);
    t14 = (t1 + 5736);
    xsi_vlogvar_assign_value_double(t14, t59, 0);
    xsi_set_current_line(111, ng0);
    t4 = (t1 + 5736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t42 = *((double *)t6);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t13 = (t1 + 1552);
    t14 = xsi_create_subprogram_invocation(t9, 0, t1, t13, 0, t2);
    t22 = (t1 + 8776);
    xsi_vlogvar_assign_value_double(t22, t42, 0);

LAB22:    t23 = (t2 + 64U);
    t40 = *((char **)t23);
    t45 = (t40 + 80U);
    t46 = *((char **)t45);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t32 = ((int  (*)(char *, char *))t50)(t1, t40);
    if (t32 != 0)
        goto LAB24;

LAB23:    t40 = (t2 + 64U);
    t51 = *((char **)t40);
    t40 = (t1 + 8616);
    t52 = (t40 + 56U);
    t53 = *((char **)t52);
    memcpy(t8, t53, 8);
    t54 = (t1 + 1552);
    t55 = (t2 + 56U);
    t56 = *((char **)t55);
    xsi_delete_subprogram_invocation(t54, t51, t1, t56, t2);
    t57 = (t1 + 5096);
    xsi_vlogvar_assign_value(t57, t8, 0, 0, 16);
    xsi_set_current_line(114, ng0);
    t4 = (t1 + 608);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t32 = (t12 & t11);
    t6 = (t1 + 14804);
    *((int *)t6) = t32;

LAB25:    t7 = (t1 + 14804);
    if (*((int *)t7) > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t4 = (t1 + 3736U);
    t5 = *((char **)t4);
    memcpy(t8, t5, 8);
    t12 = *((unsigned int *)t5);
    t15 = (t12 & 65536U);
    t10 = t15;
    t4 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 & 65536U);
    t11 = t17;
    t18 = (t15 != 0);
    if (t18 == 1)
        goto LAB29;

LAB30:    t20 = (t17 != 0);
    if (t20 == 1)
        goto LAB31;

LAB32:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 4294967295U);
    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 4294967295U);
    t9 = (t1 + 6696);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t4 = (t1 + 6696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t15 = (t12 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(119, ng0);
    t4 = (t1 + 6696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6376);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t6, 32, t13, 32);
    t14 = (t8 + 4);
    t10 = *((unsigned int *)t14);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t15 = (t12 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(120, ng0);
    t4 = (t1 + 6216);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 6216);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t4 = (t1 + 3576U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t5);
    t11 = (t11 & 1);
    if (*((unsigned int *)t4) != 0)
        goto LAB39;

LAB40:    t12 = 1;

LAB42:    t15 = (t12 <= 15);
    if (t15 == 1)
        goto LAB43;

LAB44:    *((unsigned int *)t8) = t11;

LAB41:    t7 = ((char*)((ng15)));
    memset(t41, 0, 8);
    if (*((unsigned int *)t8) != *((unsigned int *)t7))
        goto LAB48;

LAB46:    t9 = (t8 + 4);
    t13 = (t7 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t13))
        goto LAB48;

LAB47:    *((unsigned int *)t41) = 1;

LAB48:    memset(t60, 0, 8);
    t14 = (t41 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (~(t17));
    t19 = *((unsigned int *)t41);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t14) != 0)
        goto LAB51;

LAB52:    t23 = (t60 + 4);
    t24 = *((unsigned int *)t60);
    t25 = (!(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB53;

LAB54:    memcpy(t63, t60, 8);

LAB55:    t55 = (t63 + 4);
    t79 = *((unsigned int *)t55);
    t80 = (~(t79));
    t81 = *((unsigned int *)t63);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(127, ng0);
    t4 = (t1 + 4936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9096);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    t14 = (t1 + 9256);
    t22 = (t14 + 56U);
    t23 = *((char **)t22);
    t40 = (t1 + 9416);
    t45 = (t40 + 56U);
    t46 = *((char **)t45);
    t47 = (t1 + 3576U);
    t48 = *((char **)t47);
    t47 = (t1 + 3576U);
    t49 = *((char **)t47);
    t47 = (t1 + 5096);
    t50 = (t47 + 56U);
    t51 = *((char **)t50);
    t52 = (t1 + 5096);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t1 + 3736U);
    t56 = *((char **)t55);
    t55 = (t1 + 5416);
    t57 = (t55 + 56U);
    t84 = *((char **)t57);
    t85 = (t1 + 1984);
    xsi_vlogfile_write(1, 0, 0, ng17, 11, t85, (char)118, t6, 16, (char)119, t13, 16, (char)119, t23, 16, (char)119, t46, 16, (char)119, t48, 16, (char)119, t49, 16, (char)119, t51, 16, (char)119, t54, 16, (char)119, t56, 17, (char)119, t84, 18);
    xsi_set_current_line(131, ng0);
    t4 = (t1 + 472);
    t5 = *((char **)t4);
    t4 = (t1 + 608);
    t6 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t6, 32);
    t4 = ((char*)((ng1)));
    memset(t41, 0, 8);
    xsi_vlog_signed_minus(t41, 32, t8, 32, t4, 32);
    t7 = (t41 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t41);
    t32 = (t12 & t11);
    t9 = (t1 + 14808);
    *((int *)t9) = t32;

LAB67:    t13 = (t1 + 14808);
    if (*((int *)t13) > 0)
        goto LAB68;

LAB69:    goto LAB4;

LAB7:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t6 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB9;

LAB10:    xsi_set_current_line(99, ng0);
    t13 = (t1 + 7176);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    t23 = ((char*)((ng11)));
    memset(t41, 0, 8);
    xsi_vlog_signed_minus(t41, 32, t22, 32, t23, 32);
    t40 = (t1 + 7176);
    xsi_vlogvar_assign_value(t40, t41, 0, 0, 32);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t6 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB15;

LAB16:    xsi_set_current_line(105, ng0);
    t13 = (t1 + 7496);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    t23 = ((char*)((ng11)));
    memset(t41, 0, 8);
    xsi_vlog_signed_minus(t41, 32, t22, 32, t23, 32);
    t40 = (t1 + 7496);
    xsi_vlogvar_assign_value(t40, t41, 0, 0, 32);
    goto LAB18;

LAB21:    t23 = (t2 + 48U);
    *((char **)t23) = &&LAB19;
    goto LAB1;

LAB24:    t23 = (t2 + 48U);
    *((char **)t23) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(114, ng0);
    t9 = (t2 + 88U);
    t13 = *((char **)t9);
    t14 = (t13 + 16U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB28;
    goto LAB1;

LAB28:    t4 = (t1 + 14804);
    t32 = *((int *)t4);
    *((int *)t4) = (t32 - 1);
    goto LAB25;

LAB29:    t19 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t19 | 4294836224U);
    goto LAB30;

LAB31:    t6 = (t8 + 4);
    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 | 4294836224U);
    goto LAB32;

LAB33:    xsi_set_current_line(118, ng0);
    t13 = (t1 + 6696);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    memset(t41, 0, 8);
    xsi_vlog_signed_unary_minus(t41, 32, t22, 32);
    t23 = (t1 + 6696);
    xsi_vlogvar_assign_value(t23, t41, 0, 0, 32);
    goto LAB35;

LAB36:    xsi_set_current_line(119, ng0);
    t22 = (t1 + 6696);
    t23 = (t22 + 56U);
    t40 = *((char **)t23);
    t45 = (t1 + 6376);
    xsi_vlogvar_assign_value(t45, t40, 0, 0, 32);
    goto LAB38;

LAB39:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB43:    t10 = (t10 >> 1);
    t16 = (t10 & 1);
    t11 = (t11 ^ t16);

LAB45:    t12 = (t12 + 1);
    goto LAB42;

LAB49:    *((unsigned int *)t60) = 1;
    goto LAB52;

LAB51:    t22 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB53:    t40 = (t1 + 6696);
    t45 = (t40 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng1)));
    memset(t61, 0, 8);
    xsi_vlog_signed_greater(t61, 32, t46, 32, t47, 32);
    memset(t62, 0, 8);
    t48 = (t61 + 4);
    t28 = *((unsigned int *)t48);
    t29 = (~(t28));
    t30 = *((unsigned int *)t61);
    t31 = (t30 & t29);
    t34 = (t31 & 1U);
    if (t34 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t48) != 0)
        goto LAB58;

LAB59:    t35 = *((unsigned int *)t60);
    t36 = *((unsigned int *)t62);
    t37 = (t35 | t36);
    *((unsigned int *)t63) = t37;
    t50 = (t60 + 4);
    t51 = (t62 + 4);
    t52 = (t63 + 4);
    t38 = *((unsigned int *)t50);
    t39 = *((unsigned int *)t51);
    t64 = (t38 | t39);
    *((unsigned int *)t52) = t64;
    t65 = *((unsigned int *)t52);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB55;

LAB56:    *((unsigned int *)t62) = 1;
    goto LAB59;

LAB58:    t49 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB59;

LAB60:    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t52);
    *((unsigned int *)t63) = (t67 | t68);
    t53 = (t60 + 4);
    t54 = (t62 + 4);
    t69 = *((unsigned int *)t53);
    t70 = (~(t69));
    t71 = *((unsigned int *)t60);
    t32 = (t71 & t70);
    t72 = *((unsigned int *)t54);
    t73 = (~(t72));
    t74 = *((unsigned int *)t62);
    t33 = (t74 & t73);
    t75 = (~(t32));
    t76 = (~(t33));
    t77 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t77 & t75);
    t78 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t78 & t76);
    goto LAB62;

LAB63:    xsi_set_current_line(121, ng0);

LAB66:    xsi_set_current_line(122, ng0);
    t56 = (t1 + 4936);
    t57 = (t56 + 56U);
    t84 = *((char **)t57);
    t85 = (t1 + 3576U);
    t86 = *((char **)t85);
    t85 = (t1 + 5096);
    t87 = (t85 + 56U);
    t88 = *((char **)t87);
    t89 = (t1 + 3736U);
    t90 = *((char **)t89);
    t89 = (t1 + 1984);
    xsi_vlogfile_write(1, 0, 0, ng16, 5, t89, (char)118, t84, 16, (char)119, t86, 16, (char)119, t88, 16, (char)119, t90, 17);
    xsi_set_current_line(124, ng0);
    t4 = (t1 + 6536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 6536);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB65;

LAB68:    xsi_set_current_line(131, ng0);
    t14 = (t2 + 88U);
    t22 = *((char **)t14);
    t23 = (t22 + 32U);
    xsi_wp_set_status(t23, 1);
    *((char **)t3) = &&LAB70;
    goto LAB1;

LAB70:    t4 = (t1 + 14808);
    t32 = *((int *)t4);
    *((int *)t4) = (t32 - 1);
    goto LAB67;

}

static void NetDecl_18_0(char *t0)
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

LAB0:    t1 = (t0 + 10496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3416U);
    t3 = *((char **)t2);
    t2 = (t0 + 11968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t2, 0, 15U);
    t16 = (t0 + 11808);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_20_1(char *t0)
{
    char t4[8];
    char t7[8];
    char t16[8];
    char t23[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 10744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3576U);
    t5 = *((char **)t2);
    t2 = (t0 + 3576U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    xsi_vlogtype_concat(t4, 17, 17, 2U, t7, 1, t5, 16);
    t17 = (t0 + 5096);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 5096);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 15);
    t31 = (t30 & 1);
    *((unsigned int *)t24) = t31;
    xsi_vlogtype_concat(t16, 17, 17, 2U, t23, 1, t19, 16);
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 17, t4, 17, t16, 17);
    t33 = (t0 + 12032);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 131071U;
    t39 = t38;
    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 16U);
    t46 = (t0 + 11824);
    *((int *)t46) = 1;

LAB1:    return;
}

static void Always_49_2(char *t0)
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

LAB0:    t1 = (t0 + 10992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 10800);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 4136);
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
    t24 = (t0 + 4136);
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

static void Initial_135_3(char *t0)
{
    char t27[8];
    char t37[8];
    char t43[8];
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
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 11240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);

LAB4:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 14812);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 14812);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB11:    t15 = (t0 + 11144);
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

LAB9:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB10:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB17:    t15 = (t0 + 11144);
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

LAB15:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB16:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng23)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB23:    t15 = (t0 + 11144);
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

LAB21:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB22:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(145, ng0);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng24)));
    memset(t27, 0, 8);
    xsi_vlog_signed_unary_minus(t27, 32, t2, 32);
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t27, 0, 0, 32);

LAB27:    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng25)));
    memset(t27, 0, 8);
    xsi_vlog_signed_leq(t27, 32, t8, 32, t9, 32);
    t10 = (t27 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t27);
    t28 = (t6 & t5);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng27)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB38:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB40:    if (t7 != 0)
        goto LAB41;

LAB36:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB37:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng28)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB44:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB46:    if (t7 != 0)
        goto LAB47;

LAB42:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB43:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng29)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB50:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB52:    if (t7 != 0)
        goto LAB53;

LAB48:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB49:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB56:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB58:    if (t7 != 0)
        goto LAB59;

LAB54:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB55:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng30)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB62:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB64:    if (t7 != 0)
        goto LAB65;

LAB60:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB61:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng31)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB68:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB70:    if (t7 != 0)
        goto LAB71;

LAB66:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB67:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng32)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB74:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB76:    if (t7 != 0)
        goto LAB77;

LAB72:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB73:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng33)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB80:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB82:    if (t7 != 0)
        goto LAB83;

LAB78:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB79:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng34)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB86:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB88:    if (t7 != 0)
        goto LAB89;

LAB84:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB85:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng35)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB92:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB94:    if (t7 != 0)
        goto LAB95;

LAB90:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB91:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_signed_unary_minus(t27, 16, t2, 16);
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t27, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB98:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB100:    if (t7 != 0)
        goto LAB101;

LAB96:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB97:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB104:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB106:    if (t7 != 0)
        goto LAB107;

LAB102:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB103:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(164, ng0);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB108:    t2 = (t0 + 6056);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng36)));
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t8, 32, t9, 32);
    t10 = (t27 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t27);
    t28 = (t6 & t5);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng6)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB133:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB135:    if (t7 != 0)
        goto LAB136;

LAB131:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB132:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng6)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB139:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB141:    if (t7 != 0)
        goto LAB142;

LAB137:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB138:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng38)));
    t8 = ((char*)((ng21)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB145:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB147:    if (t7 != 0)
        goto LAB148;

LAB143:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB144:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng20)));
    t8 = ((char*)((ng22)));
    t9 = (t0 + 11048);
    t10 = (t0 + 1984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 9096);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 16);
    t13 = (t0 + 9256);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);
    t14 = (t0 + 9416);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);

LAB151:    t15 = (t0 + 11144);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t7 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB153:    if (t7 != 0)
        goto LAB154;

LAB149:    t16 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t16);

LAB150:    t23 = (t0 + 11144);
    t24 = *((char **)t23);
    t23 = (t0 + 1984);
    t25 = (t0 + 11048);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng14)));
    memset(t27, 0, 8);
    xsi_vlog_signed_equal(t27, 32, t8, 32, t9, 32);
    t10 = (t27 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t27);
    t28 = (t6 & t5);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng40, 2, t0, (char)119, t8, 32);

LAB157:    xsi_set_current_line(183, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(137, ng0);
    t10 = (t0 + 11888);
    *((int *)t10) = 1;
    t11 = (t0 + 11272);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 14812);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB12:;
LAB14:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB11;
    goto LAB1;

LAB18:;
LAB20:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB17;
    goto LAB1;

LAB24:;
LAB26:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB23;
    goto LAB1;

LAB28:    xsi_set_current_line(146, ng0);
    t11 = (t0 + 5896);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng20)));
    t15 = ((char*)((ng21)));
    t16 = (t0 + 11048);
    t17 = (t0 + 1984);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 9096);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 16);
    t20 = (t0 + 9256);
    xsi_vlogvar_assign_value(t20, t14, 0, 0, 16);
    t21 = (t0 + 9416);
    xsi_vlogvar_assign_value(t21, t15, 0, 0, 16);

LAB32:    t22 = (t0 + 11144);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t30 = *((char **)t26);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t7 = ((int  (*)(char *, char *))t32)(t0, t23);

LAB34:    if (t7 != 0)
        goto LAB35;

LAB30:    t23 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t23);

LAB31:    t33 = (t0 + 11144);
    t34 = *((char **)t33);
    t33 = (t0 + 1984);
    t35 = (t0 + 11048);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng26)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t8, 32, t9, 32);
    t10 = (t0 + 5896);
    xsi_vlogvar_assign_value(t10, t27, 0, 0, 32);
    goto LAB27;

LAB33:;
LAB35:    t22 = (t0 + 11240U);
    *((char **)t22) = &&LAB32;
    goto LAB1;

LAB39:;
LAB41:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB38;
    goto LAB1;

LAB45:;
LAB47:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB44;
    goto LAB1;

LAB51:;
LAB53:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB50;
    goto LAB1;

LAB57:;
LAB59:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB56;
    goto LAB1;

LAB63:;
LAB65:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB62;
    goto LAB1;

LAB69:;
LAB71:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB68;
    goto LAB1;

LAB75:;
LAB77:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB74;
    goto LAB1;

LAB81:;
LAB83:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB80;
    goto LAB1;

LAB87:;
LAB89:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB86;
    goto LAB1;

LAB93:;
LAB95:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB92;
    goto LAB1;

LAB99:;
LAB101:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB98;
    goto LAB1;

LAB105:;
LAB107:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB104;
    goto LAB1;

LAB109:    xsi_set_current_line(164, ng0);

LAB111:    xsi_set_current_line(165, ng0);
    xsi_set_current_line(165, ng0);
    t11 = ((char*)((ng24)));
    memset(t37, 0, 8);
    xsi_vlog_signed_unary_minus(t37, 32, t11, 32);
    t12 = (t0 + 5896);
    xsi_vlogvar_assign_value(t12, t37, 0, 0, 32);

LAB112:    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng25)));
    memset(t27, 0, 8);
    xsi_vlog_signed_leq(t27, 32, t8, 32, t9, 32);
    t10 = (t27 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t27);
    t28 = (t6 & t5);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6056);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng1)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t8, 32, t9, 32);
    t10 = (t0 + 6056);
    xsi_vlogvar_assign_value(t10, t27, 0, 0, 32);
    goto LAB108;

LAB113:    xsi_set_current_line(165, ng0);

LAB115:    xsi_set_current_line(166, ng0);
    t11 = (t0 + 6056);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng14)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t13, 32, t14, 32);
    t15 = (t37 + 4);
    t38 = *((unsigned int *)t15);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng20)));
    t10 = ((char*)((ng22)));
    memset(t27, 0, 8);
    xsi_vlog_signed_unary_minus(t27, 16, t10, 16);
    t11 = (t0 + 11048);
    t12 = (t0 + 1984);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t0 + 9096);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 16);
    t15 = (t0 + 9256);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 16);
    t16 = (t0 + 9416);
    xsi_vlogvar_assign_value(t16, t27, 0, 0, 16);

LAB127:    t17 = (t0 + 11144);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t7 = ((int  (*)(char *, char *))t24)(t0, t18);

LAB129:    if (t7 != 0)
        goto LAB130;

LAB125:    t18 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t18);

LAB126:    t25 = (t0 + 11144);
    t26 = *((char **)t25);
    t25 = (t0 + 1984);
    t30 = (t0 + 11048);
    t31 = 0;
    xsi_delete_subprogram_invocation(t25, t26, t0, t30, t31);

LAB118:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng37)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t8, 32, t9, 32);
    t10 = (t0 + 5896);
    xsi_vlogvar_assign_value(t10, t27, 0, 0, 32);
    goto LAB112;

LAB116:    xsi_set_current_line(167, ng0);
    t16 = (t0 + 5896);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng20)));
    memset(t43, 0, 8);
    xsi_vlog_signed_unary_minus(t43, 16, t19, 16);
    t20 = ((char*)((ng21)));
    t21 = (t0 + 11048);
    t22 = (t0 + 1984);
    t23 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t24 = (t0 + 9096);
    xsi_vlogvar_assign_value(t24, t18, 0, 0, 16);
    t25 = (t0 + 9256);
    xsi_vlogvar_assign_value(t25, t43, 0, 0, 16);
    t26 = (t0 + 9416);
    xsi_vlogvar_assign_value(t26, t20, 0, 0, 16);

LAB121:    t30 = (t0 + 11144);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t44 = *((char **)t36);
    t7 = ((int  (*)(char *, char *))t44)(t0, t31);

LAB123:    if (t7 != 0)
        goto LAB124;

LAB119:    t31 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t31);

LAB120:    t45 = (t0 + 11144);
    t46 = *((char **)t45);
    t45 = (t0 + 1984);
    t47 = (t0 + 11048);
    t48 = 0;
    xsi_delete_subprogram_invocation(t45, t46, t0, t47, t48);
    goto LAB118;

LAB122:;
LAB124:    t30 = (t0 + 11240U);
    *((char **)t30) = &&LAB121;
    goto LAB1;

LAB128:;
LAB130:    t17 = (t0 + 11240U);
    *((char **)t17) = &&LAB127;
    goto LAB1;

LAB134:;
LAB136:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB133;
    goto LAB1;

LAB140:;
LAB142:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB139;
    goto LAB1;

LAB146:;
LAB148:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB145;
    goto LAB1;

LAB152:;
LAB154:    t15 = (t0 + 11240U);
    *((char **)t15) = &&LAB151;
    goto LAB1;

LAB155:    xsi_set_current_line(179, ng0);
    t11 = (t0 + 6216);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 6376);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng39, 3, t0, (char)119, t13, 32, (char)119, t16, 32);
    goto LAB157;

}

static void Initial_186_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 11488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);

LAB4:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 11296);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(188, ng0);
    xsi_vlogfile_write(1, 0, 0, ng41, 1, t0);
    xsi_set_current_line(189, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000000469755564_2130699826_init()
{
	static char *pe[] = {(void *)NetDecl_18_0,(void *)NetDecl_20_1,(void *)Always_49_2,(void *)Initial_135_3,(void *)Initial_186_4};
	static char *se[] = {(void *)sp_reference_sin,(void *)sp_floor_real,(void *)sp_apply_sample};
	xsi_register_didat("work_m_00000000000469755564_2130699826", "isim/test.exe.sim/work/m_00000000000469755564_2130699826.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
