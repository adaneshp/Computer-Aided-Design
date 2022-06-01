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
static const char *ng0 = "C:/Users/Ali/Desktop/Verill/dotProduct_lut/hdl/xilinx_lut_ram_async.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {0, 0, 0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};



static void Always_26_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
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

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 4168);
    *((int *)t2) = 1;
    t3 = (t0 + 3632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t29 = (t9 ^ t10);
    t32 = (t8 | t29);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t5);
    t39 = (t35 | t36);
    t40 = (~(t39));
    t41 = (t32 & t40);
    if (t41 != 0)
        goto LAB17;

LAB14:    if (t39 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t12 = (t13 + 4);
    t42 = *((unsigned int *)t12);
    t43 = (~(t42));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(28, ng0);

LAB8:    xsi_set_current_line(29, ng0);
    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2680);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB9:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_power(t13, 32, t5, 32, t12, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 32, t13, 32);
    t11 = (t14 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    goto LAB7;

LAB10:    xsi_set_current_line(30, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 2520);
    t19 = (t0 + 2520);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2520);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2680);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB9;

LAB12:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB13;

LAB16:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(34, ng0);
    t15 = (t0 + 1640U);
    t16 = *((char **)t15);
    t15 = (t0 + 2520);
    t19 = (t0 + 2520);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2520);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1800U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t14, t17, t21, t24, 2, 1, t26, 1, 2);
    t25 = (t14 + 4);
    t47 = *((unsigned int *)t25);
    t30 = (!(t47));
    t27 = (t17 + 4);
    t48 = *((unsigned int *)t27);
    t33 = (!(t48));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB21;

LAB22:    goto LAB20;

LAB21:    t49 = *((unsigned int *)t14);
    t50 = *((unsigned int *)t17);
    t37 = (t49 - t50);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, *((unsigned int *)t17), t38, 0LL);
    goto LAB22;

}

static void Cont_38_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2520);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2520);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1800U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 64, t4, t8, t11, 2, 1, t13, 1, 2);
    t12 = (t0 + 4264);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t12, 0, 63);
    t18 = (t0 + 4184);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002691893618_3876008722_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Cont_38_1};
	xsi_register_didat("work_m_00000000002691893618_3876008722", "isim/dotProduct_lut_isim_beh.exe.sim/work/m_00000000002691893618_3876008722.didat");
	xsi_register_executes(pe);
}
