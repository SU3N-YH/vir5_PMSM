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
static const char *ng0 = "E:/SUEN27/vir5_PMSM_V/tests/tb_model180.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "FAIL: full top read addr=%h actual=%h expected=%h";
static unsigned int ng4[] = {0U, 65535U};
static unsigned int ng5[] = {512U, 0U};
static unsigned int ng6[] = {640U, 0U};
static unsigned int ng7[] = {276U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {310U, 0U};
static unsigned int ng10[] = {256U, 0U};
static unsigned int ng11[] = {378U, 0U};
static unsigned int ng12[] = {5120U, 0U};
static unsigned int ng13[] = {92U, 0U};
static unsigned int ng14[] = {400U, 0U};
static unsigned int ng15[] = {370U, 0U};
static unsigned int ng16[] = {8192U, 0U};
static int ng17[] = {500, 0};
static unsigned int ng18[] = {438U, 0U};
static unsigned int ng19[] = {85U, 0U};
static unsigned int ng20[] = {1U, 1U};
static const char *ng21 = "FAIL: full model unknown current or neutral";
static unsigned int ng22[] = {196U, 0U};
static unsigned int ng23[] = {280U, 0U};
static unsigned int ng24[] = {296U, 0U};
static int ng25[] = {0, 0, 0, 0};
static const char *ng26 = "FAIL: full model current did not evolve";
static const char *ng27 = "FAIL: full model reset";
static const char *ng28 = "PASS: full model 20 MHz PLL, 180 MHz arithmetic, 500 stable port6 reads, five-phase current and reset";
static const char *ng29 = "FAIL: full model errors=%0d";
static const char *ng30 = "FAIL: model timeout";
static unsigned int ng31[] = {1U, 0U};



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
    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t5 = (t1 + 5832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4552);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 12);
    xsi_set_current_line(25, ng0);
    t4 = (t1 + 5992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5352);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(26, ng0);
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

LAB6:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4712);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 241000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4712);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 17000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 47000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    goto LAB4;

}

static int sp_read_word(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
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
    char *t22;
    char *t23;
    char *t24;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t5 = (t1 + 6152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 4552);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 12);
    xsi_set_current_line(33, ng0);
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

LAB6:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4712);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 101000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(34, ng0);
    t4 = (t1 + 1912U);
    t5 = *((char **)t4);
    t4 = (t1 + 6312);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    t8 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t10))
        goto LAB9;

LAB10:    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4712);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 47000LL);
    *((char **)t3) = &&LAB15;
    t0 = 1;
    goto LAB1;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    t17 = (t1 + 6152);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 1912U);
    t21 = *((char **)t20);
    t20 = (t1 + 6312);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t24, (char)118, t19, 12, (char)118, t21, 16, (char)118, t23, 16);
    xsi_set_current_line(36, ng0);
    t4 = (t1 + 5512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 5512);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB13;

LAB15:    goto LAB4;

}

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

LAB0:    t1 = (t0 + 7232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(5, ng0);
    t2 = (t0 + 7040);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(5, ng0);
    t4 = (t0 + 4232);
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
    t24 = (t0 + 4232);
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

static void Cont_11_1(char *t0)
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

LAB0:    t1 = (t0 + 7480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 5192);
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

LAB16:    t26 = (t0 + 11352);
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
    t39 = (t0 + 11272);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 5352);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng4)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t20, 16, t25, 16);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Initial_41_2(char *t0)
{
    char t22[8];
    char t33[8];
    char t34[8];
    char t39[8];
    char t40[8];
    char t41[8];
    char t47[8];
    char t69[8];
    char t80[8];
    char t85[8];
    char t88[8];
    char t96[8];
    char t124[8];
    char t137[8];
    char t142[8];
    char t145[8];
    char t153[8];
    char t187[16];
    char t188[16];
    char t189[16];
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
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
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;

LAB0:    t1 = (t0 + 7728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);

LAB4:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 7536);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5832);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5992);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB8:    t9 = (t0 + 7632);
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

LAB7:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 7536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5832);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5992);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB14:    t9 = (t0 + 7632);
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

LAB13:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng10)));
    t4 = (t0 + 7536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5832);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5992);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB20:    t9 = (t0 + 7632);
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

LAB19:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng12)));
    t4 = (t0 + 7536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5832);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5992);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB26:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB28:    if (t17 != 0)
        goto LAB29;

LAB24:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB25:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng14)));
    t4 = (t0 + 7536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5832);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5992);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB32:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB34:    if (t17 != 0)
        goto LAB35;

LAB30:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB31:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng16)));
    memset(t22, 0, 8);
    xsi_vlog_signed_unary_minus(t22, 16, t3, 16);
    t4 = (t0 + 7536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5832);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 5992);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 16);

LAB38:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB40:    if (t17 != 0)
        goto LAB41;

LAB36:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB37:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 7536);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB9:;
LAB11:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB26;
    goto LAB1;

LAB33:;
LAB35:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB32;
    goto LAB1;

LAB39:;
LAB41:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB38;
    goto LAB1;

LAB42:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB43:    t2 = (t0 + 5672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng12)));
    t4 = (t0 + 7536);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6152);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 6312);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB113:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB115:    if (t17 != 0)
        goto LAB116;

LAB111:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB112:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng23)));
    t3 = ((char*)((ng14)));
    t4 = (t0 + 7536);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6152);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 6312);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 16);

LAB119:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB121:    if (t17 != 0)
        goto LAB122;

LAB117:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB118:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng24)));
    t3 = ((char*)((ng16)));
    memset(t22, 0, 8);
    xsi_vlog_signed_unary_minus(t22, 16, t3, 16);
    t4 = (t0 + 7536);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 6152);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 12);
    t8 = (t0 + 6312);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 16);

LAB125:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB127:    if (t17 != 0)
        goto LAB128;

LAB123:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB124:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 14760);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng25)));
    xsi_vlog_unsigned_equal(t187, 35, t5, 35, t4, 32);
    memset(t22, 0, 8);
    t6 = (t187 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t187);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t6) != 0)
        goto LAB131;

LAB132:    t8 = (t22 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (!(t35));
    t37 = *((unsigned int *)t8);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB133;

LAB134:    memcpy(t34, t22, 8);

LAB135:    memset(t39, 0, 8);
    t21 = (t34 + 4);
    t70 = *((unsigned int *)t21);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t21) != 0)
        goto LAB145;

LAB146:    t29 = (t39 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (!(t76));
    t78 = *((unsigned int *)t29);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB147;

LAB148:    memcpy(t41, t39, 8);

LAB149:    t95 = (t41 + 4);
    t126 = *((unsigned int *)t95);
    t127 = (~(t126));
    t128 = *((unsigned int *)t41);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB157;

LAB158:
LAB159:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7536);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB161;
    goto LAB1;

LAB44:    xsi_set_current_line(50, ng0);

LAB46:    xsi_set_current_line(51, ng0);
    t7 = ((char*)((ng18)));
    t8 = ((char*)((ng19)));
    t9 = (t0 + 7536);
    t10 = (t0 + 1280);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 6152);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 12);
    t13 = (t0 + 6312);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 16);

LAB49:    t14 = (t0 + 7632);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t18 = *((char **)t16);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t28 = *((char **)t21);
    t17 = ((int  (*)(char *, char *))t28)(t0, t15);

LAB51:    if (t17 != 0)
        goto LAB52;

LAB47:    t15 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t15);

LAB48:    t29 = (t0 + 7632);
    t30 = *((char **)t29);
    t29 = (t0 + 1280);
    t31 = (t0 + 7536);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 14640);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    xsi_vlog_unary_xor(t22, 1, t5, 35);
    t4 = ((char*)((ng20)));
    memset(t33, 0, 8);
    if (*((unsigned int *)t22) != *((unsigned int *)t4))
        goto LAB55;

LAB53:    t6 = (t22 + 4);
    t7 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB55;

LAB54:    *((unsigned int *)t33) = 1;

LAB55:    memset(t34, 0, 8);
    t8 = (t33 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t33);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t8) != 0)
        goto LAB58;

LAB59:    t10 = (t34 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB60;

LAB61:    memcpy(t47, t34, 8);

LAB62:    memset(t69, 0, 8);
    t31 = (t47 + 4);
    t70 = *((unsigned int *)t31);
    t71 = (~(t70));
    t72 = *((unsigned int *)t47);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t31) != 0)
        goto LAB75;

LAB76:    t75 = (t69 + 4);
    t76 = *((unsigned int *)t69);
    t77 = (!(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB77;

LAB78:    memcpy(t96, t69, 8);

LAB79:    memset(t124, 0, 8);
    t125 = (t96 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t96);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t125) != 0)
        goto LAB92;

LAB93:    t132 = (t124 + 4);
    t133 = *((unsigned int *)t124);
    t134 = (!(t133));
    t135 = *((unsigned int *)t132);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB94;

LAB95:    memcpy(t153, t124, 8);

LAB96:    t181 = (t153 + 4);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t153);
    t185 = (t184 & t183);
    t186 = (t185 != 0);
    if (t186 > 0)
        goto LAB107;

LAB108:
LAB109:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 5672);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB43;

LAB50:;
LAB52:    t14 = (t0 + 7728U);
    *((char **)t14) = &&LAB49;
    goto LAB1;

LAB56:    *((unsigned int *)t34) = 1;
    goto LAB59;

LAB58:    t9 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB60:    t11 = (t0 + 14672);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 40U);
    t14 = *((char **)t13);
    xsi_vlog_unary_xor(t39, 1, t14, 35);
    t13 = ((char*)((ng20)));
    memset(t40, 0, 8);
    if (*((unsigned int *)t39) != *((unsigned int *)t13))
        goto LAB65;

LAB63:    t15 = (t39 + 4);
    t16 = (t13 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB65;

LAB64:    *((unsigned int *)t40) = 1;

LAB65:    memset(t41, 0, 8);
    t18 = (t40 + 4);
    t42 = *((unsigned int *)t18);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t18) != 0)
        goto LAB68;

LAB69:    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t41);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t20 = (t34 + 4);
    t21 = (t41 + 4);
    t28 = (t47 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t21);
    t53 = (t51 | t52);
    *((unsigned int *)t28) = t53;
    t54 = *((unsigned int *)t28);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB62;

LAB66:    *((unsigned int *)t41) = 1;
    goto LAB69;

LAB68:    t19 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB69;

LAB70:    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t28);
    *((unsigned int *)t47) = (t56 | t57);
    t29 = (t34 + 4);
    t30 = (t41 + 4);
    t58 = *((unsigned int *)t29);
    t59 = (~(t58));
    t60 = *((unsigned int *)t34);
    t17 = (t60 & t59);
    t61 = *((unsigned int *)t30);
    t62 = (~(t61));
    t63 = *((unsigned int *)t41);
    t64 = (t63 & t62);
    t65 = (~(t17));
    t66 = (~(t64));
    t67 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t67 & t65);
    t68 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t68 & t66);
    goto LAB72;

LAB73:    *((unsigned int *)t69) = 1;
    goto LAB76;

LAB75:    t32 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB76;

LAB77:    t81 = (t0 + 14704);
    t82 = *((char **)t81);
    t83 = ((((char*)(t82))) + 40U);
    t84 = *((char **)t83);
    xsi_vlog_unary_xor(t80, 1, t84, 35);
    t83 = ((char*)((ng20)));
    memset(t85, 0, 8);
    if (*((unsigned int *)t80) != *((unsigned int *)t83))
        goto LAB82;

LAB80:    t86 = (t80 + 4);
    t87 = (t83 + 4);
    if (*((unsigned int *)t86) != *((unsigned int *)t87))
        goto LAB82;

LAB81:    *((unsigned int *)t85) = 1;

LAB82:    memset(t88, 0, 8);
    t89 = (t85 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t89) != 0)
        goto LAB85;

LAB86:    t97 = *((unsigned int *)t69);
    t98 = *((unsigned int *)t88);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = (t69 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB79;

LAB83:    *((unsigned int *)t88) = 1;
    goto LAB86;

LAB85:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB86;

LAB87:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t69 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t69);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t111);
    t117 = (~(t116));
    t118 = *((unsigned int *)t88);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t122 & t120);
    t123 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t123 & t121);
    goto LAB89;

LAB90:    *((unsigned int *)t124) = 1;
    goto LAB93;

LAB92:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB93;

LAB94:    t138 = (t0 + 14728);
    t139 = *((char **)t138);
    t140 = ((((char*)(t139))) + 40U);
    t141 = *((char **)t140);
    xsi_vlog_unary_xor(t137, 1, t141, 35);
    t140 = ((char*)((ng20)));
    memset(t142, 0, 8);
    if (*((unsigned int *)t137) != *((unsigned int *)t140))
        goto LAB99;

LAB97:    t143 = (t137 + 4);
    t144 = (t140 + 4);
    if (*((unsigned int *)t143) != *((unsigned int *)t144))
        goto LAB99;

LAB98:    *((unsigned int *)t142) = 1;

LAB99:    memset(t145, 0, 8);
    t146 = (t142 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t142);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t146) != 0)
        goto LAB102;

LAB103:    t154 = *((unsigned int *)t124);
    t155 = *((unsigned int *)t145);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = (t124 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB96;

LAB100:    *((unsigned int *)t145) = 1;
    goto LAB103;

LAB102:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB103;

LAB104:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t124 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t167);
    t170 = (~(t169));
    t171 = *((unsigned int *)t124);
    t172 = (t171 & t170);
    t173 = *((unsigned int *)t168);
    t174 = (~(t173));
    t175 = *((unsigned int *)t145);
    t176 = (t175 & t174);
    t177 = (~(t172));
    t178 = (~(t176));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    goto LAB106;

LAB107:    xsi_set_current_line(53, ng0);

LAB110:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 5512);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB109;

LAB114:;
LAB116:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB113;
    goto LAB1;

LAB120:;
LAB122:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB119;
    goto LAB1;

LAB126:;
LAB128:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB125;
    goto LAB1;

LAB129:    *((unsigned int *)t22) = 1;
    goto LAB132;

LAB131:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB132;

LAB133:    t9 = (t0 + 14792);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 40U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng25)));
    xsi_vlog_unsigned_equal(t188, 35, t12, 35, t11, 32);
    memset(t33, 0, 8);
    t13 = (t188 + 4);
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t188);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t13) != 0)
        goto LAB138;

LAB139:    t48 = *((unsigned int *)t22);
    t49 = *((unsigned int *)t33);
    t50 = (t48 | t49);
    *((unsigned int *)t34) = t50;
    t15 = (t22 + 4);
    t16 = (t33 + 4);
    t18 = (t34 + 4);
    t51 = *((unsigned int *)t15);
    t52 = *((unsigned int *)t16);
    t53 = (t51 | t52);
    *((unsigned int *)t18) = t53;
    t54 = *((unsigned int *)t18);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB140;

LAB141:
LAB142:    goto LAB135;

LAB136:    *((unsigned int *)t33) = 1;
    goto LAB139;

LAB138:    t14 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB139;

LAB140:    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t18);
    *((unsigned int *)t34) = (t56 | t57);
    t19 = (t22 + 4);
    t20 = (t33 + 4);
    t58 = *((unsigned int *)t19);
    t59 = (~(t58));
    t60 = *((unsigned int *)t22);
    t17 = (t60 & t59);
    t61 = *((unsigned int *)t20);
    t62 = (~(t61));
    t63 = *((unsigned int *)t33);
    t64 = (t63 & t62);
    t65 = (~(t17));
    t66 = (~(t64));
    t67 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t67 & t65);
    t68 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t68 & t66);
    goto LAB142;

LAB143:    *((unsigned int *)t39) = 1;
    goto LAB146;

LAB145:    t28 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB146;

LAB147:    t30 = (t0 + 14824);
    t31 = *((char **)t30);
    t32 = ((((char*)(t31))) + 40U);
    t75 = *((char **)t32);
    t32 = ((char*)((ng25)));
    xsi_vlog_unsigned_equal(t189, 35, t75, 35, t32, 32);
    memset(t40, 0, 8);
    t81 = (t189 + 4);
    t90 = *((unsigned int *)t81);
    t91 = (~(t90));
    t92 = *((unsigned int *)t189);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t81) != 0)
        goto LAB152;

LAB153:    t97 = *((unsigned int *)t39);
    t98 = *((unsigned int *)t40);
    t99 = (t97 | t98);
    *((unsigned int *)t41) = t99;
    t83 = (t39 + 4);
    t84 = (t40 + 4);
    t86 = (t41 + 4);
    t103 = *((unsigned int *)t83);
    t104 = *((unsigned int *)t84);
    t105 = (t103 | t104);
    *((unsigned int *)t86) = t105;
    t106 = *((unsigned int *)t86);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB154;

LAB155:
LAB156:    goto LAB149;

LAB150:    *((unsigned int *)t40) = 1;
    goto LAB153;

LAB152:    t82 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB153;

LAB154:    t108 = *((unsigned int *)t41);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t41) = (t108 | t109);
    t87 = (t39 + 4);
    t89 = (t40 + 4);
    t112 = *((unsigned int *)t87);
    t113 = (~(t112));
    t114 = *((unsigned int *)t39);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t89);
    t117 = (~(t116));
    t118 = *((unsigned int *)t40);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t122 & t120);
    t123 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t123 & t121);
    goto LAB156;

LAB157:    xsi_set_current_line(59, ng0);

LAB160:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 5512);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB159;

LAB161:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 14856);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng25)));
    xsi_vlog_unsigned_case_noteq(t187, 35, t5, 35, t4, 32);
    memset(t22, 0, 8);
    t6 = (t187 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t187);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t6) != 0)
        goto LAB164;

LAB165:    t8 = (t22 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (!(t35));
    t37 = *((unsigned int *)t8);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB166;

LAB167:    memcpy(t34, t22, 8);

LAB168:    memset(t39, 0, 8);
    t21 = (t34 + 4);
    t70 = *((unsigned int *)t21);
    t71 = (~(t70));
    t72 = *((unsigned int *)t34);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t21) != 0)
        goto LAB178;

LAB179:    t29 = (t39 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (!(t76));
    t78 = *((unsigned int *)t29);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB180;

LAB181:    memcpy(t41, t39, 8);

LAB182:    t95 = (t41 + 4);
    t126 = *((unsigned int *)t95);
    t127 = (~(t126));
    t128 = *((unsigned int *)t41);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB190;

LAB191:
LAB192:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5512);
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
        goto LAB194;

LAB195:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng29, 2, t0, (char)119, t4, 32);

LAB196:    xsi_set_current_line(68, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB162:    *((unsigned int *)t22) = 1;
    goto LAB165;

LAB164:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB165;

LAB166:    t9 = (t0 + 14888);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 40U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng25)));
    xsi_vlog_unsigned_case_noteq(t188, 35, t12, 35, t11, 32);
    memset(t33, 0, 8);
    t13 = (t188 + 4);
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t188);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t13) != 0)
        goto LAB171;

LAB172:    t48 = *((unsigned int *)t22);
    t49 = *((unsigned int *)t33);
    t50 = (t48 | t49);
    *((unsigned int *)t34) = t50;
    t15 = (t22 + 4);
    t16 = (t33 + 4);
    t18 = (t34 + 4);
    t51 = *((unsigned int *)t15);
    t52 = *((unsigned int *)t16);
    t53 = (t51 | t52);
    *((unsigned int *)t18) = t53;
    t54 = *((unsigned int *)t18);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB168;

LAB169:    *((unsigned int *)t33) = 1;
    goto LAB172;

LAB171:    t14 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB172;

LAB173:    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t18);
    *((unsigned int *)t34) = (t56 | t57);
    t19 = (t22 + 4);
    t20 = (t33 + 4);
    t58 = *((unsigned int *)t19);
    t59 = (~(t58));
    t60 = *((unsigned int *)t22);
    t17 = (t60 & t59);
    t61 = *((unsigned int *)t20);
    t62 = (~(t61));
    t63 = *((unsigned int *)t33);
    t64 = (t63 & t62);
    t65 = (~(t17));
    t66 = (~(t64));
    t67 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t67 & t65);
    t68 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t68 & t66);
    goto LAB175;

LAB176:    *((unsigned int *)t39) = 1;
    goto LAB179;

LAB178:    t28 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB179;

LAB180:    t30 = (t0 + 14920);
    t31 = *((char **)t30);
    t32 = ((((char*)(t31))) + 40U);
    t75 = *((char **)t32);
    t32 = ((char*)((ng25)));
    xsi_vlog_unsigned_case_noteq(t189, 35, t75, 35, t32, 32);
    memset(t40, 0, 8);
    t81 = (t189 + 4);
    t90 = *((unsigned int *)t81);
    t91 = (~(t90));
    t92 = *((unsigned int *)t189);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB183;

LAB184:    if (*((unsigned int *)t81) != 0)
        goto LAB185;

LAB186:    t97 = *((unsigned int *)t39);
    t98 = *((unsigned int *)t40);
    t99 = (t97 | t98);
    *((unsigned int *)t41) = t99;
    t83 = (t39 + 4);
    t84 = (t40 + 4);
    t86 = (t41 + 4);
    t103 = *((unsigned int *)t83);
    t104 = *((unsigned int *)t84);
    t105 = (t103 | t104);
    *((unsigned int *)t86) = t105;
    t106 = *((unsigned int *)t86);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB187;

LAB188:
LAB189:    goto LAB182;

LAB183:    *((unsigned int *)t40) = 1;
    goto LAB186;

LAB185:    t82 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB186;

LAB187:    t108 = *((unsigned int *)t41);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t41) = (t108 | t109);
    t87 = (t39 + 4);
    t89 = (t40 + 4);
    t112 = *((unsigned int *)t87);
    t113 = (~(t112));
    t114 = *((unsigned int *)t39);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t89);
    t117 = (~(t116));
    t118 = *((unsigned int *)t40);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t122 & t120);
    t123 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t123 & t121);
    goto LAB189;

LAB190:    xsi_set_current_line(63, ng0);

LAB193:    xsi_set_current_line(64, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 5512);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB192;

LAB194:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    goto LAB196;

}

static void Initial_70_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7784);
    xsi_process_wait(t2, 1000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(70, ng0);
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

LAB0:    t1 = (t0 + 8224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 11416);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 8472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 11480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 8720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 8968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 11608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 9216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 11672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 9464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 11736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 9712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 11800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 9960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 11864);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 10208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 11928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 10456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 11992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 10704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 12056);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

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

LAB0:    t1 = (t0 + 10952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng31)));
    t3 = (t0 + 12120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000001226061653_2224786307_init()
{
	static char *pe[] = {(void *)Always_5_0,(void *)Cont_11_1,(void *)Initial_41_2,(void *)Initial_70_3,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute,(void *)implSig9_execute,(void *)implSig10_execute,(void *)implSig11_execute,(void *)implSig12_execute};
	static char *se[] = {(void *)sp_write_word,(void *)sp_read_word};
	xsi_register_didat("work_m_00000000001226061653_2224786307", "isim/test.exe.sim/work/m_00000000001226061653_2224786307.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
