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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_fsmc_port1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static const char *ng3 = "FAIL: port1 read actual=%h expected=%h t=%0t";
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 65535U};
static const char *ng6 = "FAIL: port1 bus not high impedance after read, actual=%h t=%0t";
static unsigned int ng7[] = {512U, 0U};
static const char *ng8 = "FAIL: port1 write capture actual=%h expected=%h t=%0t";
static unsigned int ng9[] = {23205U, 0U};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {42330U, 0U};
static int ng12[] = {7, 0};
static int ng13[] = {13, 0};
static unsigned int ng14[] = {65535U, 0U};
static int ng15[] = {19, 0};
static int ng16[] = {16, 0};
static int ng17[] = {20, 0};
static int ng18[] = {11, 0};
static const char *ng19 = "PASS: FSMC port1 loopback: read offset 0x000, write offset 0x200, 36 patterns, 16-bit bidirectional bus";
static const char *ng20 = "FAIL: FSMC port1 loopback: %0d errors";
static const char *ng21 = "FAIL: FSMC port1 regression timeout";



static int sp_check_read(char *t1, char *t2)
{
    char t8[8];
    char t21[16];
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
    char *t22;
    char *t23;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 5352);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 12);
    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5672);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5832);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 24000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5832);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 100000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(84, ng0);
    t4 = (t1 + 1912U);
    t5 = *((char **)t4);
    t4 = (t1 + 6792);
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
LAB14:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5832);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB10:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(84, ng0);

LAB15:    xsi_set_current_line(85, ng0);
    t17 = (t1 + 1912U);
    t18 = *((char **)t17);
    t17 = (t1 + 6792);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t22 = xsi_vlog_time(t21, 1000.0000000000000, 1000.0000000000000);
    t23 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t23, (char)118, t18, 16, (char)118, t20, 16, (char)118, t21, 64);
    xsi_set_current_line(86, ng0);
    t4 = (t1 + 6312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 6312);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB14;

LAB16:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 24000LL);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB17:    xsi_set_current_line(92, ng0);
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

LAB21:    xsi_set_current_line(92, ng0);

LAB24:    xsi_set_current_line(93, ng0);
    t10 = (t1 + 1912U);
    t11 = *((char **)t10);
    t10 = xsi_vlog_time(t21, 1000.0000000000000, 1000.0000000000000);
    t17 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t17, (char)118, t11, 16, (char)118, t21, 64);
    xsi_set_current_line(94, ng0);
    t4 = (t1 + 6312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 6312);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB23;

}

static int sp_write_read(char *t1, char *t2)
{
    char t12[8];
    char t23[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    double t8;
    double t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(103, ng0);
    t5 = (t1 + 7112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = xsi_vlog_convert_to_real(t7, 32, 1);
    t8 = (t8 * 1000.0000000000000);
    t9 = (t8 < 0.00000000000000000);
    if (t9 == 1)
        goto LAB6;

LAB7:    t8 = (t8 + 0.50000000000000000);
    t8 = ((int64)(t8));

LAB8:    t8 = (t8 * 1.0000000000000000);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    xsi_process_wait(t11, t8);
    *((char **)t3) = &&LAB9;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    t8 = 0.00000000000000000;
    goto LAB8;

LAB9:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5672);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5832);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 5352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);
    xsi_set_current_line(109, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 24000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB11;
    t0 = 1;
    goto LAB1;

LAB11:    xsi_set_current_line(112, ng0);
    t4 = (t1 + 6952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 4000LL);
    *((char **)t3) = &&LAB12;
    t0 = 1;
    goto LAB1;

LAB12:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5672);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 200000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5672);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 24000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5512);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 32000LL);
    *((char **)t3) = &&LAB15;
    t0 = 1;
    goto LAB1;

LAB15:    xsi_set_current_line(122, ng0);
    t4 = (t1 + 2072U);
    t5 = *((char **)t4);
    t4 = (t1 + 6952);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB17;

LAB16:    t10 = (t5 + 4);
    t11 = (t7 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB17;

LAB18:    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(126, ng0);
    t4 = (t1 + 6952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t10 = *((char **)t7);
    t11 = (t2 + 56U);
    t13 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t13, &&LAB23);
    t19 = (t2 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t24 = (t1 + 6792);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 16);

LAB25:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t27 = (t26 + 80U);
    t28 = *((char **)t27);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t33 = ((int  (*)(char *, char *))t32)(t1, t26);
    if (t33 == -1)
        goto LAB26;

LAB27:    if (t33 != 0)
        goto LAB28;

LAB23:    t26 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t26);

LAB24:    t34 = (t2 + 64U);
    t35 = *((char **)t34);
    t34 = (t1 + 848);
    t36 = (t2 + 56U);
    t37 = *((char **)t36);
    xsi_delete_subprogram_invocation(t34, t35, t1, t37, t2);
    goto LAB4;

LAB17:    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(122, ng0);

LAB22:    xsi_set_current_line(123, ng0);
    t19 = (t1 + 2072U);
    t20 = *((char **)t19);
    t19 = (t1 + 6952);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t24 = xsi_vlog_time(t23, 1000.0000000000000, 1000.0000000000000);
    t25 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t25, (char)118, t20, 16, (char)118, t22, 16, (char)118, t23, 64);
    xsi_set_current_line(124, ng0);
    t4 = (t1 + 6312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t6, 32, t7, 32);
    t10 = (t1 + 6312);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB21;

LAB26:    t0 = -1;
    goto LAB1;

LAB28:    t25 = (t2 + 48U);
    *((char **)t25) = &&LAB25;
    goto LAB1;

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

LAB0:    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 7840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);
    t4 = (t0 + 5192);
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
    t24 = (t0 + 5192);
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

static void Cont_21_1(char *t0)
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

LAB0:    t1 = (t0 + 8280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 5992);
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

LAB16:    t26 = (t0 + 13392);
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
    t39 = (t0 + 13312);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6152);
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

static void Initial_130_2(char *t0)
{
    char t22[8];
    char t28[8];
    char t38[8];
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 8528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);

LAB4:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 8336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8336);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 6792);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 16);

LAB8:    t7 = (t0 + 8432);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 8432);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 8336);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng10)));
    t4 = (t0 + 8336);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6952);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 16);
    t8 = (t0 + 7112);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB14:    t9 = (t0 + 8432);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB16:    if (t15 != 0)
        goto LAB17;

LAB12:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB13:    t18 = (t0 + 8432);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 8336);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng12)));
    t4 = (t0 + 8336);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6952);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 16);
    t8 = (t0 + 7112);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB20:    t9 = (t0 + 8432);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB22:    if (t15 != 0)
        goto LAB23;

LAB18:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB19:    t18 = (t0 + 8432);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 8336);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng13)));
    t4 = (t0 + 8336);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6952);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 16);
    t8 = (t0 + 7112);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB26:    t9 = (t0 + 8432);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB28:    if (t15 != 0)
        goto LAB29;

LAB24:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB25:    t18 = (t0 + 8432);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 8336);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng15)));
    t4 = (t0 + 8336);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6952);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 16);
    t8 = (t0 + 7112);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);

LAB32:    t9 = (t0 + 8432);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t16 = (t14 + 0U);
    t17 = *((char **)t16);
    t15 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB34:    if (t15 != 0)
        goto LAB35;

LAB30:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB31:    t18 = (t0 + 8432);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 8336);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(139, ng0);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB36:    t2 = (t0 + 6472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)119, t4, 32);

LAB56:    xsi_set_current_line(149, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 8528U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t9 = (t0 + 8528U);
    *((char **)t9) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 8528U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t9 = (t0 + 8528U);
    *((char **)t9) = &&LAB26;
    goto LAB1;

LAB33:;
LAB35:    t9 = (t0 + 8528U);
    *((char **)t9) = &&LAB32;
    goto LAB1;

LAB37:    xsi_set_current_line(139, ng0);

LAB39:    xsi_set_current_line(140, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 6472);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_lshift(t28, 16, t7, 16, t10, 32);
    t11 = (t0 + 6632);
    xsi_vlogvar_assign_value(t11, t28, 0, 0, 16);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng12)));
    memset(t22, 0, 8);
    xsi_vlog_signed_multiply(t22, 32, t7, 32, t8, 32);
    t9 = ((char*)((ng17)));
    memset(t28, 0, 8);
    xsi_vlog_signed_mod(t28, 32, t22, 32, t9, 32);
    t10 = (t0 + 8336);
    t11 = (t0 + 1280);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t11, t12);
    t13 = (t0 + 6952);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 16);
    t14 = (t0 + 7112);
    xsi_vlogvar_assign_value(t14, t28, 0, 0, 32);

LAB42:    t16 = (t0 + 8432);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t29 = (t21 + 0U);
    t30 = *((char **)t29);
    t15 = ((int  (*)(char *, char *))t30)(t0, t17);

LAB44:    if (t15 != 0)
        goto LAB45;

LAB40:    t17 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t17);

LAB41:    t31 = (t0 + 8432);
    t32 = *((char **)t31);
    t31 = (t0 + 1280);
    t33 = (t0 + 8336);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t6 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    *((unsigned int *)t22) = t24;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB47;

LAB46:    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & 65535U);
    t37 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t37 & 65535U);
    t7 = (t0 + 6472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng18)));
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t9, 32, t10, 32);
    t11 = ((char*)((ng17)));
    memset(t38, 0, 8);
    xsi_vlog_signed_mod(t38, 32, t28, 32, t11, 32);
    t12 = (t0 + 8336);
    t13 = (t0 + 1280);
    t14 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t16 = (t0 + 6952);
    xsi_vlogvar_assign_value(t16, t22, 0, 0, 16);
    t17 = (t0 + 7112);
    xsi_vlogvar_assign_value(t17, t38, 0, 0, 32);

LAB50:    t18 = (t0 + 8432);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t29 = (t21 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t15 = ((int  (*)(char *, char *))t32)(t0, t19);

LAB52:    if (t15 != 0)
        goto LAB53;

LAB48:    t19 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t19);

LAB49:    t33 = (t0 + 8432);
    t34 = *((char **)t33);
    t33 = (t0 + 1280);
    t39 = (t0 + 8336);
    t40 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t39, t40);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 6472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 6472);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB36;

LAB43:;
LAB45:    t16 = (t0 + 8528U);
    *((char **)t16) = &&LAB42;
    goto LAB1;

LAB47:    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t6);
    *((unsigned int *)t22) = (t25 | t26);
    t27 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t27 | t35);
    goto LAB46;

LAB51:;
LAB53:    t18 = (t0 + 8528U);
    *((char **)t18) = &&LAB50;
    goto LAB1;

LAB54:    xsi_set_current_line(146, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB56;

}

static void Initial_152_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 8776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);

LAB4:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 8584);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(154, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(155, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 9024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig3_execute(char *t0)
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

LAB0:    t1 = (t0 + 9520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13584);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig4_execute(char *t0)
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

LAB0:    t1 = (t0 + 9768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig5_execute(char *t0)
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

LAB0:    t1 = (t0 + 10016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig6_execute(char *t0)
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

LAB0:    t1 = (t0 + 10264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig7_execute(char *t0)
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

LAB0:    t1 = (t0 + 10512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig8_execute(char *t0)
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

LAB0:    t1 = (t0 + 10760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig9_execute(char *t0)
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

LAB0:    t1 = (t0 + 11008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig10_execute(char *t0)
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

LAB0:    t1 = (t0 + 11256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14032);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig11_execute(char *t0)
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

LAB0:    t1 = (t0 + 11504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig12_execute(char *t0)
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

LAB0:    t1 = (t0 + 11752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig13_execute(char *t0)
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

LAB0:    t1 = (t0 + 12000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig14_execute(char *t0)
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

LAB0:    t1 = (t0 + 12248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14288);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig15_execute(char *t0)
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

LAB0:    t1 = (t0 + 12496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig16_execute(char *t0)
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

LAB0:    t1 = (t0 + 12744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14416);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void implSig17_execute(char *t0)
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

LAB0:    t1 = (t0 + 12992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}


extern void work_m_00000000002895840363_3701373026_init()
{
	static char *pe[] = {(void *)Always_6_0,(void *)Cont_21_1,(void *)Initial_130_2,(void *)Initial_152_3,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute,(void *)implSig9_execute,(void *)implSig10_execute,(void *)implSig11_execute,(void *)implSig12_execute,(void *)implSig13_execute,(void *)implSig14_execute,(void *)implSig15_execute,(void *)implSig16_execute,(void *)implSig17_execute};
	static char *se[] = {(void *)sp_check_read,(void *)sp_write_read};
	xsi_register_didat("work_m_00000000002895840363_3701373026", "isim/port1.exe.sim/work/m_00000000002895840363_3701373026.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
