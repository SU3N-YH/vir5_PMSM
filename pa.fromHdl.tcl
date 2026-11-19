
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name vir5_PMSM -dir "E:/SUEN27/vir5_PMSM_V/planAhead_run_1" -part xc6slx25ftg256-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "main.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/mul_inductor_2.ngc}]
set hdlfile [add_files [list {ipcore_dir/pll300MHz.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
add_files [list {ipcore_dir/mul18x35_1225_BySunY.ngc}]
add_files [list {ipcore_dir/division5.ngc}]
add_files [list {ipcore_dir/MUL18x18_bEMF.ngc}]
set hdlfile [add_files [list {ipcore_dir/mul_inductor_2.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/mul18x35_1225_BySunY.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/MUL18x18_bEMF.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/division5.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {inv_phi3_HB.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Inductor.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CORDIC_STANDALONE.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Volt_N_calc.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {PWM_Deadzn.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {PCI.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {inv_phi2_HB_DE.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Inductor_DE.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {In2Out.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {clk300MHz.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {BackEMF.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {add5ov5.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {vir5_PMSM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top vir5_PMSM $srcset
add_files [list {main.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/adder1a.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/division5.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ip_mul1.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ip_mul2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ip_mul3.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ip_mul4.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ip_mul5.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ip_mul6.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MTPL_mutual_A.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MTPL_mutual_B.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul18x18_1.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul18x18_2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MUL18x18_bEMF.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul18x35_1225_BySunY.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul18x35_26july_BySunY.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/multi_2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul_18x18_no2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MUL_add3ov3.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul_clarke.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul_for_cpctr.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul_inductor_2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MUL_Mech.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul_park.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/mul_Te.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/Xt_multi.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx25ftg256-2
