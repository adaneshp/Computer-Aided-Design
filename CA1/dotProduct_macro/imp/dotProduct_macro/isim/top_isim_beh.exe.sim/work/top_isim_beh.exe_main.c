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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003218450804_2422063721_init();
    work_m_00000000003266667014_0970567355_init();
    work_m_00000000000362657118_1576793558_init();
    work_m_00000000000978830754_1985558087_init();
    work_m_00000000003133969417_3823007873_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003133969417_3823007873");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
