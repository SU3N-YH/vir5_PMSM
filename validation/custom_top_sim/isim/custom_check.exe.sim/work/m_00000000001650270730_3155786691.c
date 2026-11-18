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
static unsigned int ng1[] = {104858U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {209716U, 0U};
static unsigned int ng4[] = {419432U, 0U};
static int ng5[] = {3, 0};
static int ng6[] = {35, 0};
static unsigned int ng7[] = {262144U, 0U, 0U, 0U};
static unsigned int ng8[] = {4294967295U, 0U, 3U, 0U};
static unsigned int ng9[] = {0U, 0U, 4U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {0U, 0U, 0U, 0U};
static unsigned int ng12[] = {12U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {10U, 0U};



static int sp_remainder_times_q19(char *t1, char *t2)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t34[8];
    char t35[8];
    char t39[8];
    char t65[8];
    char t66[8];
    char t67[8];
    char t71[8];
    char t97[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t98;

LAB0:    t0 = 1;
    xsi_set_current_line(79, ng0);

LAB2:    xsi_set_current_line(80, ng0);
    t5 = (t1 + 7296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    memset(t4, 0, 8);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t8);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB3;

LAB4:    if (*((unsigned int *)t17) != 0)
        goto LAB5;

LAB6:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t24);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB7;

LAB8:    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t24) > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t4) > 0)
        goto LAB13;

LAB14:    memcpy(t3, t33, 8);

LAB15:    t36 = (t1 + 7296);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 1);
    t44 = (t43 & 1);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 1);
    t47 = (t46 & 1);
    *((unsigned int *)t40) = t47;
    memset(t35, 0, 8);
    t48 = (t39 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t39);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t48) != 0)
        goto LAB18;

LAB19:    t55 = (t35 + 4);
    t56 = *((unsigned int *)t35);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB20;

LAB21:    t60 = *((unsigned int *)t35);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t55) > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t35) > 0)
        goto LAB26;

LAB27:    memcpy(t34, t64, 8);

LAB28:    memset(t65, 0, 8);
    xsi_vlog_unsigned_add(t65, 21, t3, 21, t34, 21);
    t68 = (t1 + 7296);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t72 = (t71 + 4);
    t73 = (t70 + 4);
    t74 = *((unsigned int *)t70);
    t75 = (t74 >> 2);
    t76 = (t75 & 1);
    *((unsigned int *)t71) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 2);
    t79 = (t78 & 1);
    *((unsigned int *)t72) = t79;
    memset(t67, 0, 8);
    t80 = (t71 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t71);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t80) != 0)
        goto LAB31;

LAB32:    t87 = (t67 + 4);
    t88 = *((unsigned int *)t67);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB33;

LAB34:    t92 = *((unsigned int *)t67);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t87) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t67) > 0)
        goto LAB39;

LAB40:    memcpy(t66, t96, 8);

LAB41:    memset(t97, 0, 8);
    xsi_vlog_unsigned_add(t97, 21, t65, 21, t66, 21);
    t98 = (t1 + 7136);
    xsi_vlogvar_assign_value(t98, t97, 0, 0, 21);
    t0 = 0;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB6;

LAB5:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB6;

LAB7:    t28 = ((char*)((ng1)));
    goto LAB8;

LAB9:    t33 = ((char*)((ng2)));
    goto LAB10;

LAB11:    xsi_vlog_unsigned_bit_combine(t3, 21, t28, 21, t33, 21);
    goto LAB15;

LAB13:    memcpy(t3, t28, 8);
    goto LAB15;

LAB16:    *((unsigned int *)t35) = 1;
    goto LAB19;

LAB18:    t54 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB19;

LAB20:    t59 = ((char*)((ng3)));
    goto LAB21;

LAB22:    t64 = ((char*)((ng2)));
    goto LAB23;

LAB24:    xsi_vlog_unsigned_bit_combine(t34, 21, t59, 21, t64, 21);
    goto LAB28;

LAB26:    memcpy(t34, t59, 8);
    goto LAB28;

LAB29:    *((unsigned int *)t67) = 1;
    goto LAB32;

LAB31:    t86 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB32;

LAB33:    t91 = ((char*)((ng4)));
    goto LAB34;

LAB35:    t96 = ((char*)((ng2)));
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t66, 21, t91, 21, t96, 21);
    goto LAB41;

LAB39:    memcpy(t66, t91, 8);
    goto LAB41;

}

static void NetDecl_39_0(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char t17[16];
    char t20[8];
    char t23[8];
    char t32[16];
    char t33[16];
    char t36[8];
    char t39[8];
    char t48[16];
    char t49[16];
    char t52[8];
    char t55[8];
    char t64[16];
    char t65[16];
    char t68[8];
    char t71[8];
    char t80[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
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
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 8216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1936U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 1936U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    xsi_vlog_mul_concat(t5, 3, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 38, 38, 2U, t5, 3, t4, 35);
    t18 = (t0 + 2096U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng5)));
    t21 = (t0 + 2096U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 8);
    t25 = (t22 + 12);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 2);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 2);
    t31 = (t30 & 1);
    *((unsigned int *)t21) = t31;
    xsi_vlog_mul_concat(t20, 3, 1, t18, 1U, t23, 1);
    xsi_vlogtype_concat(t17, 38, 38, 2U, t20, 3, t19, 35);
    xsi_vlog_unsigned_add(t32, 38, t3, 38, t17, 38);
    t34 = (t0 + 2256U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng5)));
    t37 = (t0 + 2256U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t39 + 4);
    t40 = (t38 + 8);
    t41 = (t38 + 12);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 2);
    t44 = (t43 & 1);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 2);
    t47 = (t46 & 1);
    *((unsigned int *)t37) = t47;
    xsi_vlog_mul_concat(t36, 3, 1, t34, 1U, t39, 1);
    xsi_vlogtype_concat(t33, 38, 38, 2U, t36, 3, t35, 35);
    xsi_vlog_unsigned_add(t48, 38, t32, 38, t33, 38);
    t50 = (t0 + 2416U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng5)));
    t53 = (t0 + 2416U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 8);
    t57 = (t54 + 12);
    t58 = *((unsigned int *)t56);
    t59 = (t58 >> 2);
    t60 = (t59 & 1);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 2);
    t63 = (t62 & 1);
    *((unsigned int *)t53) = t63;
    xsi_vlog_mul_concat(t52, 3, 1, t50, 1U, t55, 1);
    xsi_vlogtype_concat(t49, 38, 38, 2U, t52, 3, t51, 35);
    xsi_vlog_unsigned_add(t64, 38, t48, 38, t49, 38);
    t66 = (t0 + 2576U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng5)));
    t69 = (t0 + 2576U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t72 = (t70 + 8);
    t73 = (t70 + 12);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 2);
    t76 = (t75 & 1);
    *((unsigned int *)t71) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 2);
    t79 = (t78 & 1);
    *((unsigned int *)t69) = t79;
    xsi_vlog_mul_concat(t68, 3, 1, t66, 1U, t71, 1);
    xsi_vlogtype_concat(t65, 38, 38, 2U, t68, 3, t67, 35);
    xsi_vlog_unsigned_add(t80, 38, t64, 38, t65, 38);
    t81 = (t0 + 10464);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    xsi_vlog_bit_copy(t85, 0, t80, 0, 38);
    xsi_driver_vfirst_trans(t81, 0, 37U);
    t86 = (t0 + 10272);
    *((int *)t86) = 1;

LAB1:    return;
}

static void NetDecl_46_1(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char t17[16];
    char t20[8];
    char t23[8];
    char t32[16];
    char t33[16];
    char t36[8];
    char t39[8];
    char t48[16];
    char t49[16];
    char t52[8];
    char t55[8];
    char t64[16];
    char t65[16];
    char t68[8];
    char t71[8];
    char t80[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
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
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 8464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2736U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 2736U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    xsi_vlog_mul_concat(t5, 3, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 38, 38, 2U, t5, 3, t4, 35);
    t18 = (t0 + 2896U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng5)));
    t21 = (t0 + 2896U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 8);
    t25 = (t22 + 12);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 2);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 2);
    t31 = (t30 & 1);
    *((unsigned int *)t21) = t31;
    xsi_vlog_mul_concat(t20, 3, 1, t18, 1U, t23, 1);
    xsi_vlogtype_concat(t17, 38, 38, 2U, t20, 3, t19, 35);
    xsi_vlog_unsigned_add(t32, 38, t3, 38, t17, 38);
    t34 = (t0 + 3056U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng5)));
    t37 = (t0 + 3056U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t39 + 4);
    t40 = (t38 + 8);
    t41 = (t38 + 12);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 2);
    t44 = (t43 & 1);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 2);
    t47 = (t46 & 1);
    *((unsigned int *)t37) = t47;
    xsi_vlog_mul_concat(t36, 3, 1, t34, 1U, t39, 1);
    xsi_vlogtype_concat(t33, 38, 38, 2U, t36, 3, t35, 35);
    xsi_vlog_unsigned_add(t48, 38, t32, 38, t33, 38);
    t50 = (t0 + 3216U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng5)));
    t53 = (t0 + 3216U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 8);
    t57 = (t54 + 12);
    t58 = *((unsigned int *)t56);
    t59 = (t58 >> 2);
    t60 = (t59 & 1);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 2);
    t63 = (t62 & 1);
    *((unsigned int *)t53) = t63;
    xsi_vlog_mul_concat(t52, 3, 1, t50, 1U, t55, 1);
    xsi_vlogtype_concat(t49, 38, 38, 2U, t52, 3, t51, 35);
    xsi_vlog_unsigned_add(t64, 38, t48, 38, t49, 38);
    t66 = (t0 + 3376U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng5)));
    t69 = (t0 + 3376U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t72 = (t70 + 8);
    t73 = (t70 + 12);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 2);
    t76 = (t75 & 1);
    *((unsigned int *)t71) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 2);
    t79 = (t78 & 1);
    *((unsigned int *)t69) = t79;
    xsi_vlog_mul_concat(t68, 3, 1, t66, 1U, t71, 1);
    xsi_vlogtype_concat(t65, 38, 38, 2U, t68, 3, t67, 35);
    xsi_vlog_unsigned_add(t80, 38, t64, 38, t65, 38);
    t81 = (t0 + 10528);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    xsi_vlog_bit_copy(t85, 0, t80, 0, 38);
    xsi_driver_vfirst_trans(t81, 0, 37U);
    t86 = (t0 + 10288);
    *((int *)t86) = 1;

LAB1:    return;
}

static void NetDecl_53_2(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char t17[16];
    char t20[8];
    char t23[8];
    char t32[16];
    char t33[16];
    char t36[8];
    char t39[8];
    char t48[16];
    char t49[16];
    char t52[8];
    char t55[8];
    char t64[16];
    char t65[16];
    char t68[8];
    char t71[8];
    char t80[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
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
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 8712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3536U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 3536U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 8);
    t10 = (t7 + 12);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    xsi_vlog_mul_concat(t5, 3, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 38, 38, 2U, t5, 3, t4, 35);
    t18 = (t0 + 3696U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng5)));
    t21 = (t0 + 3696U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 8);
    t25 = (t22 + 12);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 2);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 2);
    t31 = (t30 & 1);
    *((unsigned int *)t21) = t31;
    xsi_vlog_mul_concat(t20, 3, 1, t18, 1U, t23, 1);
    xsi_vlogtype_concat(t17, 38, 38, 2U, t20, 3, t19, 35);
    xsi_vlog_unsigned_add(t32, 38, t3, 38, t17, 38);
    t34 = (t0 + 3856U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng5)));
    t37 = (t0 + 3856U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t39 + 4);
    t40 = (t38 + 8);
    t41 = (t38 + 12);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 2);
    t44 = (t43 & 1);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 2);
    t47 = (t46 & 1);
    *((unsigned int *)t37) = t47;
    xsi_vlog_mul_concat(t36, 3, 1, t34, 1U, t39, 1);
    xsi_vlogtype_concat(t33, 38, 38, 2U, t36, 3, t35, 35);
    xsi_vlog_unsigned_add(t48, 38, t32, 38, t33, 38);
    t50 = (t0 + 4016U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng5)));
    t53 = (t0 + 4016U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 8);
    t57 = (t54 + 12);
    t58 = *((unsigned int *)t56);
    t59 = (t58 >> 2);
    t60 = (t59 & 1);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 2);
    t63 = (t62 & 1);
    *((unsigned int *)t53) = t63;
    xsi_vlog_mul_concat(t52, 3, 1, t50, 1U, t55, 1);
    xsi_vlogtype_concat(t49, 38, 38, 2U, t52, 3, t51, 35);
    xsi_vlog_unsigned_add(t64, 38, t48, 38, t49, 38);
    t66 = (t0 + 4176U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng5)));
    t69 = (t0 + 4176U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t72 = (t70 + 8);
    t73 = (t70 + 12);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 2);
    t76 = (t75 & 1);
    *((unsigned int *)t71) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 2);
    t79 = (t78 & 1);
    *((unsigned int *)t69) = t79;
    xsi_vlog_mul_concat(t68, 3, 1, t66, 1U, t71, 1);
    xsi_vlogtype_concat(t65, 38, 38, 2U, t68, 3, t67, 35);
    xsi_vlog_unsigned_add(t80, 38, t64, 38, t65, 38);
    t81 = (t0 + 10592);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    xsi_vlog_bit_copy(t85, 0, t80, 0, 38);
    xsi_driver_vfirst_trans(t81, 0, 37U);
    t86 = (t0 + 10304);
    *((int *)t86) = 1;

LAB1:    return;
}

static void NetDecl_86_3(char *t0)
{
    char t3[16];
    char t6[16];
    char t9[16];
    char t14[8];
    char t23[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 8960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4816U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 56, 56, 2U, t5, 53, t2, 3);
    t4 = (t0 + 6656);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 6656);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 20);
    t19 = (t18 & 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 20);
    t22 = (t21 & 1);
    *((unsigned int *)t15) = t22;
    xsi_vlog_mul_concat(t9, 35, 1, t10, 1U, t14, 1);
    xsi_vlogtype_concat(t6, 56, 56, 2U, t9, 35, t8, 21);
    xsi_vlog_unsigned_add(t23, 56, t3, 56, t6, 56);
    t24 = (t0 + 10656);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_bit_copy(t28, 0, t23, 0, 56);
    xsi_driver_vfirst_trans(t24, 0, 55U);
    t29 = (t0 + 10320);
    *((int *)t29) = 1;

LAB1:    return;
}

static void NetDecl_89_4(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 9208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    xsi_vlog_signed_add(t4, 56, t3, 56, t2, 56);
    t5 = (t0 + 10720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 56);
    xsi_driver_vfirst_trans(t5, 0, 55U);
    t10 = (t0 + 10336);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_90_5(char *t0)
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

LAB0:    t1 = (t0 + 9456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5136U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 37, t4, 55, 19);
    t2 = (t0 + 10784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t8, 0, t3, 0, 37);
    xsi_driver_vfirst_trans(t2, 0, 36U);
    t9 = (t0 + 10352);
    *((int *)t9) = 1;

LAB1:    return;
}

static void NetDecl_94_6(char *t0)
{
    char t3[16];
    char t4[8];
    char t8[16];
    char t25[16];
    char t26[8];
    char t30[16];
    char t32[16];
    char t44[16];
    char t50[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t33;
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
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 9704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6816);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    xsi_vlog_signed_greater(t8, 37, t6, 37, t7, 37);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 16);

LAB16:    t54 = (t0 + 10848);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_bit_copy(t58, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t54, 0, 34U);
    t59 = (t0 + 10368);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng8)));
    goto LAB9;

LAB10:    t27 = (t0 + 6816);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng9)));
    xsi_vlog_signed_unary_minus(t30, 37, t31, 37);
    xsi_vlog_signed_less(t32, 37, t29, 37, t30, 37);
    memset(t26, 0, 8);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t33) != 0)
        goto LAB19;

LAB20:    t40 = (t26 + 4);
    t41 = *((unsigned int *)t26);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t26);
    t47 = (~(t46));
    t48 = *((unsigned int *)t40);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t40) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t26) > 0)
        goto LAB27;

LAB28:    memcpy(t25, t50, 16);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 35, t20, 35, t25, 35);
    goto LAB16;

LAB14:    memcpy(t3, t20, 16);
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t39 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB20;

LAB21:    t45 = ((char*)((ng9)));
    xsi_vlog_unsigned_unary_minus(t44, 35, t45, 35);
    goto LAB22;

LAB23:    t51 = (t0 + 6816);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_get_part_select_value(t50, 35, t53, 34, 0);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t25, 35, t44, 35, t50, 35);
    goto LAB29;

LAB27:    memcpy(t25, t44, 16);
    goto LAB29;

}

static void Always_103_7(char *t0)
{
    char t4[8];
    char t31[16];
    char t41[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 9952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 10384);
    *((int *)t2) = 1;
    t3 = (t0 + 9984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t5 = (t0 + 1776U);
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

LAB11:    xsi_set_current_line(113, ng0);

LAB14:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng12)));
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

LAB20:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t5, 4, t6, 4);
    t12 = (t0 + 6976);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);

LAB21:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB22:    t6 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t30 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(141, ng0);

LAB52:
LAB39:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(104, ng0);

LAB13:    xsi_set_current_line(105, ng0);
    t19 = ((char*)((ng10)));
    t20 = (t0 + 6976);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 37, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 35, 0LL);
    goto LAB12;

LAB17:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(115, ng0);
    t28 = ((char*)((ng10)));
    t29 = (t0 + 6976);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(120, ng0);

LAB40:    xsi_set_current_line(121, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 6336);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 18, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4336U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t31, 35, t3, 37, 3);
    t2 = (t0 + 6496);
    xsi_vlogvar_wait_assign_value(t2, t31, 0, 0, 35, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4336U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t12 = (t0 + 9760);
    t13 = (t0 + 984);
    t19 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    t20 = (t0 + 7296);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 3);

LAB41:    t28 = (t0 + 9856);
    t29 = *((char **)t28);
    t32 = (t29 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t30 = ((int  (*)(char *, char *))t37)(t0, t29);
    if (t30 != 0)
        goto LAB43;

LAB42:    t29 = (t0 + 9856);
    t38 = *((char **)t29);
    t29 = (t0 + 7136);
    t39 = (t29 + 56U);
    t40 = *((char **)t39);
    memcpy(t41, t40, 8);
    t42 = (t0 + 984);
    t43 = (t0 + 9760);
    t44 = 0;
    xsi_delete_subprogram_invocation(t42, t38, t0, t43, t44);
    t45 = (t0 + 6656);
    xsi_vlogvar_wait_assign_value(t45, t41, 0, 0, 21, 0LL);
    goto LAB39;

LAB25:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 5296U);
    t6 = *((char **)t3);
    t3 = (t0 + 6816);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 37, 0LL);
    goto LAB39;

LAB27:    xsi_set_current_line(126, ng0);

LAB44:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 5456U);
    t6 = *((char **)t3);
    t3 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4496U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t31, 35, t3, 37, 3);
    t2 = (t0 + 6496);
    xsi_vlogvar_wait_assign_value(t2, t31, 0, 0, 35, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4496U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t12 = (t0 + 9760);
    t13 = (t0 + 984);
    t19 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    t20 = (t0 + 7296);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 3);

LAB45:    t28 = (t0 + 9856);
    t29 = *((char **)t28);
    t32 = (t29 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t30 = ((int  (*)(char *, char *))t37)(t0, t29);
    if (t30 != 0)
        goto LAB47;

LAB46:    t29 = (t0 + 9856);
    t38 = *((char **)t29);
    t29 = (t0 + 7136);
    t39 = (t29 + 56U);
    t40 = *((char **)t39);
    memcpy(t41, t40, 8);
    t42 = (t0 + 984);
    t43 = (t0 + 9760);
    t44 = 0;
    xsi_delete_subprogram_invocation(t42, t38, t0, t43, t44);
    t45 = (t0 + 6656);
    xsi_vlogvar_wait_assign_value(t45, t41, 0, 0, 21, 0LL);
    goto LAB39;

LAB29:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 5296U);
    t6 = *((char **)t3);
    t3 = (t0 + 6816);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 37, 0LL);
    goto LAB39;

LAB31:    xsi_set_current_line(133, ng0);

LAB48:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 5456U);
    t6 = *((char **)t3);
    t3 = (t0 + 6016);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 35, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4656U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t31, 35, t3, 37, 3);
    t2 = (t0 + 6496);
    xsi_vlogvar_wait_assign_value(t2, t31, 0, 0, 35, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4656U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t12 = (t0 + 9760);
    t13 = (t0 + 984);
    t19 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    t20 = (t0 + 7296);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 3);

LAB49:    t28 = (t0 + 9856);
    t29 = *((char **)t28);
    t32 = (t29 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t30 = ((int  (*)(char *, char *))t37)(t0, t29);
    if (t30 != 0)
        goto LAB51;

LAB50:    t29 = (t0 + 9856);
    t38 = *((char **)t29);
    t29 = (t0 + 7136);
    t39 = (t29 + 56U);
    t40 = *((char **)t39);
    memcpy(t41, t40, 8);
    t42 = (t0 + 984);
    t43 = (t0 + 9760);
    t44 = 0;
    xsi_delete_subprogram_invocation(t42, t38, t0, t43, t44);
    t45 = (t0 + 6656);
    xsi_vlogvar_wait_assign_value(t45, t41, 0, 0, 21, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 5296U);
    t6 = *((char **)t3);
    t3 = (t0 + 6816);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 37, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 5456U);
    t6 = *((char **)t3);
    t3 = (t0 + 6176);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 35, 0LL);
    goto LAB39;

LAB43:    t28 = (t0 + 9952U);
    *((char **)t28) = &&LAB41;
    goto LAB1;

LAB47:    t28 = (t0 + 9952U);
    *((char **)t28) = &&LAB45;
    goto LAB1;

LAB51:    t28 = (t0 + 9952U);
    *((char **)t28) = &&LAB49;
    goto LAB1;

}


extern void work_m_00000000001650270730_3155786691_init()
{
	static char *pe[] = {(void *)NetDecl_39_0,(void *)NetDecl_46_1,(void *)NetDecl_53_2,(void *)NetDecl_86_3,(void *)NetDecl_89_4,(void *)NetDecl_90_5,(void *)NetDecl_94_6,(void *)Always_103_7};
	static char *se[] = {(void *)sp_remainder_times_q19};
	xsi_register_didat("work_m_00000000001650270730_3155786691", "isim/custom_check.exe.sim/work/m_00000000001650270730_3155786691.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
