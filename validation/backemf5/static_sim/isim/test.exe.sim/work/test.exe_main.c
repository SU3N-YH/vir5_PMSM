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
    work_m_00000000000135199609_1771709807_init();
    unisims_ver_m_00000000001508379050_3852734344_init();
    unisims_ver_m_00000000000073490608_0280471132_init();
    unisims_ver_m_00000000000073490608_1977786825_init();
    unisims_ver_m_00000000003317509437_1759035934_init();
    unisims_ver_m_00000000003927721830_1593237687_init();
    work_m_00000000001529559879_0192914177_init();
    work_m_00000000004277221209_1259823480_init();
    work_m_00000000001348617588_3363924094_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001348617588_3363924094");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
