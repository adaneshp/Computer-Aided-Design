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
static const char *ng0 = "C:/Users/Ali/Desktop/Verill/dotProduct_lut/hdl/dotProduct_lut.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U, 0U, 0U};
static int ng5[] = {0, 0, 0, 0};
static unsigned int ng6[] = {63U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {7U, 0U};



static void Always_46_0(char *t0)
{
    char t6[8];
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 8256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 9568);
    *((int *)t2) = 1;
    t3 = (t0 + 8288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2776U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5416);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 7016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(48, ng0);

LAB12:    xsi_set_current_line(49, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 7176);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB11;

}

static void Always_68_1(char *t0)
{
    char t9[8];
    char t33[16];
    char t34[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 8504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 9584);
    *((int *)t2) = 1;
    t3 = (t0 + 8536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 7176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 7336);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5256);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5576);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5896);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6696);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 7176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(83, ng0);
    t6 = (t0 + 2296U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t21 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t9) = 1;

LAB29:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB25;

LAB9:    xsi_set_current_line(90, ng0);

LAB34:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 5416);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t34, 63, t6, 63, 1);
    t7 = (t0 + 2136U);
    t10 = *((char **)t7);
    xsi_vlogtype_concat(t33, 64, 64, 2U, t10, 1, t34, 63);
    t7 = (t0 + 5576);
    xsi_vlogvar_assign_value(t7, t33, 0, 0, 64);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t9) = 1;

LAB38:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(98, ng0);

LAB43:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t5, 6, t6, 32);
    t7 = (t0 + 5256);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 6);

LAB41:    goto LAB25;

LAB11:    xsi_set_current_line(105, ng0);

LAB44:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 5736);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t34, 63, t6, 63, 1);
    t7 = (t0 + 2136U);
    t10 = *((char **)t7);
    xsi_vlogtype_concat(t33, 64, 64, 2U, t10, 1, t34, 63);
    t7 = (t0 + 5896);
    xsi_vlogvar_assign_value(t7, t33, 0, 0, 64);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t21 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t9) = 1;

LAB48:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(112, ng0);

LAB53:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t5, 6, t6, 32);
    t7 = (t0 + 5256);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 6);

LAB51:    goto LAB25;

LAB13:    xsi_set_current_line(119, ng0);

LAB54:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6056);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6216);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB15:    xsi_set_current_line(127, ng0);

LAB55:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6056);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5736);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6216);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(135, ng0);

LAB56:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6376);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6696);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 64);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB19:    xsi_set_current_line(142, ng0);

LAB57:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6376);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 7016);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 64);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB21:    xsi_set_current_line(149, ng0);

LAB58:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4936);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB28:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(84, ng0);

LAB33:    xsi_set_current_line(85, ng0);
    t31 = ((char*)((ng6)));
    t32 = (t0 + 5256);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 6);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB32;

LAB37:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(93, ng0);

LAB42:    xsi_set_current_line(94, ng0);
    t25 = ((char*)((ng6)));
    t31 = (t0 + 5256);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 6);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB41;

LAB47:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(108, ng0);

LAB52:    xsi_set_current_line(109, ng0);
    t25 = ((char*)((ng9)));
    t31 = (t0 + 7336);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 3);
    goto LAB51;

}

static void Cont_178_2(char *t0)
{
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

LAB0:    t1 = (t0 + 8752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63);
    t10 = (t0 + 9600);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_179_3(char *t0)
{
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

LAB0:    t1 = (t0 + 9000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 6856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63);
    t10 = (t0 + 9616);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_265_4(char *t0)
{
    char t5[8];
    char t7[8];
    char t9[8];
    char t11[8];
    char t13[8];
    char t15[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t10;
    char *t12;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 9248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 3416U);
    t3 = *((char **)t2);
    t2 = (t0 + 3576U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 19, t3, 16, t4, 16);
    t2 = (t0 + 3736U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 19, t5, 19, t6, 16);
    t2 = (t0 + 3896U);
    t8 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 19, t7, 19, t8, 16);
    t2 = (t0 + 4056U);
    t10 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 19, t9, 19, t10, 16);
    t2 = (t0 + 4216U);
    t12 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 19, t11, 19, t12, 16);
    t2 = (t0 + 4376U);
    t14 = *((char **)t2);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 19, t13, 19, t14, 16);
    t2 = (t0 + 4536U);
    t16 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 19, t15, 19, t16, 16);
    t2 = (t0 + 9840);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 524287U;
    t23 = t22;
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t2, 0, 18);
    t30 = (t0 + 9632);
    *((int *)t30) = 1;

LAB1:    return;
}


extern void work_m_00000000003182453920_3871168950_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Always_68_1,(void *)Cont_178_2,(void *)Cont_179_3,(void *)Cont_265_4};
	xsi_register_didat("work_m_00000000003182453920_3871168950", "isim/dotProduct_lut_isim_beh.exe.sim/work/m_00000000003182453920_3871168950.didat");
	xsi_register_executes(pe);
}
