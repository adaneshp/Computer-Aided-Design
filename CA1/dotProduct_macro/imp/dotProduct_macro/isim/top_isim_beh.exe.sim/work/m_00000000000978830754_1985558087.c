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
static const char *ng0 = "C:/Users/Ali/Desktop/Verill/dotProduct_macro/hdl/test.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2596069104U, 0U, 305419896U, 0U};
static unsigned int ng4[] = {1985229328U, 0U, 4275878552U, 0U};
static int ng5[] = {1, 0};



static void Initial_21_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 2408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_28_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_38_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 21000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Cont_49_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 64);
    xsi_driver_vfirst_trans(t3, 0, 63);

LAB1:    return;
}

static void Cont_50_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 64);
    xsi_driver_vfirst_trans(t3, 0, 63);

LAB1:    return;
}

static void Cont_52_5(char *t0)
{
    char t3[32];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 128, 128, 2U, t5, 64, t4, 64);
    t2 = (t0 + 5944);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 128);
    xsi_driver_vfirst_trans(t2, 0, 127);
    t10 = (t0 + 5704);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_55_6(char *t0)
{
    char t8[8];
    char t32[32];
    char t33[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t17;
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
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    t3 = (t0 + 5168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB8;

LAB5:    if (t20 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB8:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_get_part_select_value(t33, 127, t4, 127, 1);
    t5 = ((char*)((ng2)));
    xsi_vlogtype_concat(t32, 128, 128, 2U, t5, 1, t33, 127);
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t32, 0, 0, 128, 0LL);

LAB11:    goto LAB2;

LAB7:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(57, ng0);
    t30 = (t0 + 1848U);
    t31 = *((char **)t30);
    t30 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 128, 0LL);
    goto LAB11;

}

static void Cont_62_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 6008);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5736);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000000978830754_1985558087_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Initial_28_1,(void *)Initial_38_2,(void *)Cont_49_3,(void *)Cont_50_4,(void *)Cont_52_5,(void *)Always_55_6,(void *)Cont_62_7};
	xsi_register_didat("work_m_00000000000978830754_1985558087", "isim/top_isim_beh.exe.sim/work/m_00000000000978830754_1985558087.didat");
	xsi_register_executes(pe);
}
