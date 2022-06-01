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
    work_m_00000000002691893618_3876008722_init();
    work_m_00000000001850080374_2086079824_init();
    work_m_00000000003182453920_3871168950_init();
    work_m_00000000000978830754_1985558087_init();
    work_m_00000000004259601932_3823007873_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004259601932_3823007873");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
