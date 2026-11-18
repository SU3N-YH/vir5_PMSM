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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_backemf_port6.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {438U, 0U};
static const char *ng4 = "FAIL: port6 bus actual=%h expected=%h";
static unsigned int ng5[] = {0U, 65535U};
static const char *ng6 = "FAIL: port6 bus not released";
static const char *ng7 = "FAIL: port6 source jumped actual=%h expected=%h";
static unsigned int ng8[] = {378U, 0U};
static unsigned int ng9[] = {5120U, 0U};
static unsigned int ng10[] = {92U, 0U};
static unsigned int ng11[] = {400U, 0U};
static unsigned int ng12[] = {370U, 0U};
static unsigned int ng13[] = {8192U, 0U};
static unsigned int ng14[] = {85U, 0U};
static int ng15[] = {1000, 0};
static int ng16[] = {31, 0};
static int ng17[] = {17, 0};
static unsigned int ng18[] = {0U, 0U};
static int ng19[] = {20, 0};
static int ng20[] = {100, 0};
static const char *ng21 = "PASS: BackEMF port6 reads=%0d stable=0055, zero-speed and reset recovery";
static const char *ng22 = "FAIL: BackEMF port6 errors=%0d";
static const char *ng23 = "FAIL: BackEMF port6 timeout";



static int sp_write_word(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t1 + 5032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3272);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 12);
    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t4 = (t1 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4072);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(39, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 17000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 241000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 17000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 47000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    goto LAB4;

}

static int sp_read_port6(char *t1, char *t2)
{
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t1 + 3272);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 12);
    xsi_set_current_line(48, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 13000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 7000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 101000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(51, ng0);
    t4 = (t1 + 1912U);
    t5 = *((char **)t4);
    t4 = (t1 + 4392);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB10;

LAB9:    t9 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB10;

LAB11:    t11 = (t8 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(55, ng0);
    t4 = (t1 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4712);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 7000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB10:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(51, ng0);

LAB15:    xsi_set_current_line(52, ng0);
    t17 = (t1 + 1912U);
    t18 = *((char **)t17);
    t17 = (t1 + 4392);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 3, t21, (char)118, t18, 16, (char)118, t20, 16);
    xsi_set_current_line(53, ng0);
    t4 = (t1 + 4552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4552);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB14;

LAB16:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 29000LL);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB17:    xsi_set_current_line(59, ng0);
    t4 = (t1 + 1912U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB19;

LAB18:    t6 = (t5 + 4);
    t7 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB19;

LAB20:    t9 = (t8 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB4;

LAB19:    *((unsigned int *)t8) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(59, ng0);

LAB24:    xsi_set_current_line(60, ng0);
    t10 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t10);
    xsi_set_current_line(61, ng0);
    t4 = (t1 + 4552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4552);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB23;

}

static void Always_6_0(char *t0)
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

LAB0:    t1 = (t0 + 6112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 5920);
    xsi_process_wait(t2, 2778LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);
    t4 = (t0 + 2952);
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
    t24 = (t0 + 2952);
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

static void Cont_14_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3912);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 7520);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 65535U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 15);
    t39 = (t0 + 7424);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4072);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng5)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t20, 16, t25, 16);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_27_2(char *t0)
{
    char t5[8];
    char t21[8];
    char t24[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 7440);
    *((int *)t2) = 1;
    t3 = (t0 + 6640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 6416);
    xsi_process_wait(t4, 1LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t6) != 0)
        goto LAB9;

LAB10:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB11;

LAB12:    memcpy(t32, t5, 8);

LAB13:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB7:    *((unsigned int *)t5) = 1;
    goto LAB10;

LAB9:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB10;

LAB11:    t17 = (t0 + 2552U);
    t18 = *((char **)t17);
    t17 = (t0 + 4392);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    if (*((unsigned int *)t18) != *((unsigned int *)t20))
        goto LAB15;

LAB14:    t22 = (t18 + 4);
    t23 = (t20 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t23))
        goto LAB15;

LAB16:    memset(t24, 0, 8);
    t25 = (t21 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB20:    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t5 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB19:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB21:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t5 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t5);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB23;

LAB24:    xsi_set_current_line(29, ng0);

LAB27:    xsi_set_current_line(30, ng0);
    t70 = (t0 + 2552U);
    t71 = *((char **)t70);
    t70 = (t0 + 4392);
    t72 = (t70 + 56U);
    t73 = *((char **)t72);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t71, 16, (char)118, t73, 16);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t12 = (t0 + 4552);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    goto LAB26;

}

static void Initial_65_3(char *t0)
{
    char t22[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    double t35;
    double t36;
    int t37;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 6664);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5032);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5192);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB8:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB10:    if (t17 != 0)
        goto LAB11;

LAB6:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB7:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng11)));
    t4 = (t0 + 6664);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5032);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5192);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB14:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB16:    if (t17 != 0)
        goto LAB17;

LAB12:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB13:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng13)));
    memset(t22, 0, 8);
    xsi_vlog_signed_unary_minus(t22, 16, t3, 16);
    t4 = (t0 + 6664);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5032);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5192);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 16);

LAB20:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB22:    if (t17 != 0)
        goto LAB23;

LAB18:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB19:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:;
LAB11:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB24:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB25:    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng18)));
    t4 = (t0 + 6664);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5032);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5192);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB50:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB52:    if (t17 != 0)
        goto LAB53;

LAB48:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB49:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB26:    xsi_set_current_line(72, ng0);

LAB28:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 6664);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);

LAB31:    t10 = (t0 + 6760);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t18 = *((char **)t16);
    t17 = ((int  (*)(char *, char *))t18)(t0, t11);

LAB33:    if (t17 != 0)
        goto LAB34;

LAB29:    t11 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t11);

LAB30:    t19 = (t0 + 6760);
    t20 = *((char **)t19);
    t19 = (t0 + 1280);
    t21 = (t0 + 6664);
    t28 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t28);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t22, 0, 8);
    xsi_vlog_signed_mod(t22, 32, t4, 32, t5, 32);
    t6 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_signed_equal(t29, 32, t22, 32, t6, 32);
    t7 = (t29 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (~(t23));
    t25 = *((unsigned int *)t29);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t22, 0, 8);
    xsi_vlog_signed_mod(t22, 32, t4, 32, t5, 32);
    t6 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t22, 32, t6, 32);
    t35 = xsi_vlog_convert_to_real(t29, 32, 1);
    t35 = (t35 * 1000.0000000000000);
    t36 = (t35 < 0.00000000000000000);
    if (t36 == 1)
        goto LAB44;

LAB45:    t35 = (t35 + 0.50000000000000000);
    t35 = ((int64)(t35));

LAB46:    t35 = (t35 * 1.0000000000000000);
    t7 = (t0 + 6664);
    xsi_process_wait(t7, t35);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB32:;
LAB34:    t10 = (t0 + 6856U);
    *((char **)t10) = &&LAB31;
    goto LAB1;

LAB35:    xsi_set_current_line(75, ng0);
    t8 = ((char*)((ng8)));
    t9 = ((char*)((ng9)));
    t10 = (t0 + 6664);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 5032);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 12);
    t14 = (t0 + 5192);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 16);

LAB40:    t15 = (t0 + 6760);
    t16 = *((char **)t15);
    t18 = (t16 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t28 = (t21 + 0U);
    t30 = *((char **)t28);
    t17 = ((int  (*)(char *, char *))t30)(t0, t16);

LAB42:    if (t17 != 0)
        goto LAB43;

LAB38:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB39:    t31 = (t0 + 6760);
    t32 = *((char **)t31);
    t31 = (t0 + 848);
    t33 = (t0 + 6664);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    goto LAB37;

LAB41:;
LAB43:    t15 = (t0 + 6856U);
    *((char **)t15) = &&LAB40;
    goto LAB1;

LAB44:    t35 = 0.00000000000000000;
    goto LAB46;

LAB47:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 4872);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB25;

LAB51:;
LAB53:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB50;
    goto LAB1;

LAB54:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t2 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t2);
    t17 = (t25 & t24);
    t4 = (t0 + 9972);
    *((int *)t4) = t17;

LAB55:    t5 = (t0 + 9972);
    if (*((int *)t5) > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng11)));
    t4 = (t0 + 6664);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5032);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5192);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB66:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB68:    if (t17 != 0)
        goto LAB69;

LAB64:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB65:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB56:    xsi_set_current_line(81, ng0);
    t6 = (t0 + 6664);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB60:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t37 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB62:    if (t37 != 0)
        goto LAB63;

LAB58:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB59:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    t2 = (t0 + 9972);
    t17 = *((int *)t2);
    *((int *)t2) = (t17 - 1);
    goto LAB55;

LAB61:;
LAB63:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB60;
    goto LAB1;

LAB67:;
LAB69:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB66;
    goto LAB1;

LAB70:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t2 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t2);
    t17 = (t25 & t24);
    t4 = (t0 + 9976);
    *((int *)t4) = t17;

LAB71:    t5 = (t0 + 9976);
    if (*((int *)t5) > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 47000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB72:    xsi_set_current_line(85, ng0);
    t6 = (t0 + 6664);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB76:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t37 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB78:    if (t37 != 0)
        goto LAB79;

LAB74:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB75:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    t2 = (t0 + 9976);
    t17 = *((int *)t2);
    *((int *)t2) = (t17 - 1);
    goto LAB71;

LAB77:;
LAB79:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB76;
    goto LAB1;

LAB80:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6664);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t2 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t2);
    t17 = (t25 & t24);
    t4 = (t0 + 9980);
    *((int *)t4) = t17;

LAB82:    t5 = (t0 + 9980);
    if (*((int *)t5) > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)119, t4, 32);

LAB93:    xsi_set_current_line(93, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB83:    xsi_set_current_line(90, ng0);
    t6 = (t0 + 6664);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB87:    t9 = (t0 + 6760);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t37 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB89:    if (t37 != 0)
        goto LAB90;

LAB85:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB86:    t18 = (t0 + 6760);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6664);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    t2 = (t0 + 9980);
    t17 = *((int *)t2);
    *((int *)t2) = (t17 - 1);
    goto LAB82;

LAB88:;
LAB90:    t9 = (t0 + 6856U);
    *((char **)t9) = &&LAB87;
    goto LAB1;

LAB91:    xsi_set_current_line(91, ng0);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)119, t9, 32);
    goto LAB93;

}

static void Initial_95_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 6912);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(97, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(98, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001586207682_1251027558_init()
{
	static char *pe[] = {(void *)Always_6_0,(void *)Cont_14_1,(void *)Always_27_2,(void *)Initial_65_3,(void *)Initial_95_4};
	static char *se[] = {(void *)sp_write_word,(void *)sp_read_port6};
	xsi_register_didat("work_m_00000000001586207682_1251027558", "isim/tb_backemf_port6.exe.sim/work/m_00000000001586207682_1251027558.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
