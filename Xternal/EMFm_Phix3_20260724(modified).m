function [sys,x0,str,ts] = EMFm_Phix6(t,x,u,flag)
%SFUNTMPL General M-file S-function template
%global DT=2e-4;
switch flag,
  %%%%%%%%%%%%%%%%%%
  % Initialization %
  %%%%%%%%%%%%%%%%%%
  case 0,
    [sys,x0,str,ts]=mdlInitializeSizes;
  %%%%%%%%%%%%%%%
  % Derivatives %
  %%%%%%%%%%%%%%%
  case 1,
    sys=mdlDerivatives(t,x,u);
  %%%%%%%%%%
  % Update %
  %%%%%%%%%%
  case 2,
    sys=mdlUpdate(t,x,u);
  %%%%%%%%%%%
  % Outputs %
  %%%%%%%%%%%
  case 3,
    sys=mdlOutputs(t,x,u);
  %%%%%%%%%%%%%%%%%%%%%%%
  % GetTimeOfNextVarHit %
  %%%%%%%%%%%%%%%%%%%%%%%
  case 4,
    sys=mdlGetTimeOfNextVarHit(t,x,u);
  %%%%%%%%%%%%%
  % Terminate %
  %%%%%%%%%%%%%
  case 9,
    sys=mdlTerminate(t,x,u);

  %%%%%%%%%%%%%%%%%%%%
  % Unexpected flags %
  %%%%%%%%%%%%%%%%%%%%
  otherwise
    DAStudio.error('Simulink:blocks:unhandledFlag', num2str(flag));

end

% end sfuntmpl

%
%=============================================================================
% mdlInitializeSizes
% Return the sizes, initial conditions, and sample times for the S-function.
%=============================================================================
%
function [sys,x0,str,ts]=mdlInitializeSizes

sizes = simsizes;

sizes.NumContStates  = 0;
sizes.NumDiscStates  = 43;
sizes.NumOutputs     = 6;
sizes.NumInputs      = 21;
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 1;   % at least one sample time is needed

sys = simsizes(sizes);

%
% initialize the initial conditions
%
x0  = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];
str = [];
ts  = [-2 0];   % inherited sample time        

% end mdlInitializeSizes

function sys=mdlDerivatives(t,x,u)

sys = [];

% end mdlDerivatives

%=============================================================================
% mdlUpdate
% Handle discrete state updates, sample time hits, and major time step
% requirements.
%=============================================================================
%
function sys=mdlUpdate(t,x,u)
%%%%%%%%%%%%%%%%%%%%%%%%注意DT=1e-7%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  
%%%定义1mH=1024uH
%%%定义凸极率相关参数 1/4096mH<=DifmH_Ldq_S16_Q12<=8mH，即满足8*4096=32768
DifmHOv2_Ldq_S16_Q12    = u(1);   % DifmH_Ldq_S16_Q12 = (Ld - Lq) / 2;  
%%%定义1/2平均电感参数 1/1024mH<=AvgmHOv2_Ldq_S16_Q10<=32mH，即满足32*1024=32768
AvgmHOv2_Ldq_S16_Q10    = u(2);   % AvgmH_Ldq_S16_Q10 = (Ld + Lq) / 2 / 2;  
iA_S18_Q9       = u(3); % 精度1/512，S18_Q9
iB_S18_Q9       = u(4); % 精度1/512，S18_Q9
iC_S18_Q9       = u(5); % 精度1/512，S18_Q9

cos_2xePos              = u(9); % S18_Q17格式
cos_2xePosN120          = u(10);% S18_Q17格式
cos_2xePosN240          = u(11);% S18_Q17格式
RstN                    = u(21);% S18_Q17格式
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%以下内容在FPGA中编程%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%S18*S18，电感矩阵有待重新确认%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Temp1_S35 = cos_2xePos * DifmHOv2_Ldq_S16_Q12;%% 
M11_S35_Q17 =  Temp1_S35 ; %% Temp1_S35 / 4096 20261010
Temp2_S35 = cos_2xePosN120 * DifmHOv2_Ldq_S16_Q12;
M12_S35_Q17 =  Temp2_S35 ; %% Temp2_S35 / 4096 20261010
Temp3_S35 = cos_2xePosN240 * DifmHOv2_Ldq_S16_Q12;
M13_S35_Q17 =  Temp3_S35 ; %% Temp3_S35 / 4096 20261010
%%%%%%%
M21_S35_Q17 = M12_S35_Q17;
M22_S35_Q17 = M13_S35_Q17;
M23_S35_Q17 = M11_S35_Q17;

M31_S35_Q17 = M13_S35_Q17;
M32_S35_Q17 = M11_S35_Q17;
M33_S35_Q17 = M12_S35_Q17;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%计算定子电感%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%
L0Ov2_S35_Q17 = AvgmHOv2_Ldq_S16_Q10*128*4096; %% 131072*AvgmHOv2_Ldq_S16_Q10/1024*4096 20261010
L11_mH=M11_S35_Q17 ;%%
L12_mH=M12_S35_Q17 - L0Ov2_S35_Q17;
L13_mH=M13_S35_Q17 - L0Ov2_S35_Q17;

L21_mH=M21_S35_Q17 - L0Ov2_S35_Q17;
L22_mH=M22_S35_Q17  ;%%
L23_mH=M23_S35_Q17 - L0Ov2_S35_Q17;

L31_mH=M31_S35_Q17 - L0Ov2_S35_Q17;
L32_mH=M32_S35_Q17 - L0Ov2_S35_Q17;
L33_mH=M33_S35_Q17  ;%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%计算定子时变电感产生的磁链,S35*S18，共9次乘法运算%%%%%%%%%%%%%%%%%%%%%%%%
Phi1_mWb_S53 = L11_mH*iA_S18_Q9 + L12_mH*iB_S18_Q9 + L13_mH*iC_S18_Q9;
Phi2_mWb_S53 = L21_mH*iA_S18_Q9 + L22_mH*iB_S18_Q9 + L23_mH*iC_S18_Q9 ;
Phi3_mWb_S53 = L31_mH*iA_S18_Q9 + L32_mH*iB_S18_Q9 + L33_mH*iC_S18_Q9 ;

%% Phi_real=L_real*I_real=L_real*I_S18_Q9/512
%% Phi_real_mWb=LmH_Q17/131072*I_S18_Q9/512
%% 定义Phi_mWb_Q17=LmH_Q17*I_S18_Q9/512

Phi1_Wb_S35_Q17 = Phi1_mWb_S53/512/1024/4096; %%考虑到电感是用mH表示，且定义了1H=1024mH, 20261010
Phi2_Wb_S35_Q17 = Phi2_mWb_S53/512/1024/4096; %%, 20261010
Phi3_Wb_S35_Q17 = Phi3_mWb_S53/512/1024/4096; %%, 20261010

if RstN==0
        x(1) = 0;
        x(2) = 0;
        x(3) = 0;
        x(4) = 0;
        x(5) = 0;
        x(6) = 0;
        x(7) = 0;
        x(8) = 0;
        x(9) = 0;
        x(10) = 0;
        x(11) = 0;
        x(12) = 0;
        x(13) = 0;
        x(14) = 0;
        x(15) = 0;        

else
        x(1) = x(1) + Phi1_Wb_S35_Q17 - x(4); %%x(1)、x(7)为35位有符号数
        x(2) = x(2) + Phi2_Wb_S35_Q17 - x(5); %%x(2)、x(8)为35位有符号数
        x(3) = x(3) + Phi3_Wb_S35_Q17 - x(6); %%x(3)、x(9)为35位有符号数
        
        x(4)  = x(1)/32; %%初步拟定滤波深度为32,可通过右移        
        x(5)  = x(2)/32; %%初步拟定滤波深度为32,可通过右移              
        x(6)  = x(3)/32; %%初步拟定滤波深度为32,可通过右移                  
        
%%%%%%%%%%%%%一下内容计算滤波后磁链的微分        
                x(15) = x(15) + 1;
        if x(15)>=76   %%76分频10MHz时钟，达到131072Hz
                x(15)=0;
                 DPhi1_Wb_S18_Q17 = x(4) - x(7); %%注意，x(4) 和 x(7) 是35位，结果是18位
                 DPhi2_Wb_S18_Q17 = x(5) - x(8);
                 DPhi3_Wb_S18_Q17 = x(6) - x(9);
                 x(7) = x(4);
                 x(8) = x(5);
                 x(9) = x(6);

                x(10) = DPhi1_Wb_S18_Q17*131072; %%移位实现，结果为互感电压，格式为S35_Q17
                x(11) = DPhi2_Wb_S18_Q17*131072; 
                x(12) = DPhi3_Wb_S18_Q17*131072;

        end
end

sys =x;            %返回当前状态变量值

% end mdlUpdate

%=============================================================================
% mdlOutputs
% Return the block outputs.
%=============================================================================
%
function sys=mdlOutputs(t,x,u)
% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
sys=[x(19) x(20) x(21) x(22) x(23) x(24)];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%=============================================================================
% mdlGetTimeOfNextVarHit
% Return the time of the next hit for this block.  Note that the result is
% absolute time.  Note that this function is only used when you specify a
% variable discrete-time sample time [-2 0] in the sample time array in
% mdlInitializeSizes.
%=============================================================================
%
function sys=mdlGetTimeOfNextVarHit(t,x,u)
%sampleTime = DT;%0.00001;%  Example, set the next hit to be one second later.
sys = t + 1e-7;
% sys = [];
% end mdlGetTimeOfNextVarHit

%=============================================================================
% mdlTerminate
% Perform any end of simulation tasks.
%=============================================================================
%
function sys=mdlTerminate(t,x,u)

sys = [];

% end mdlTerminate
