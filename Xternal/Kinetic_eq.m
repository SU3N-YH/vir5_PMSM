function [sys,x0,str,ts] = Kinetic_eq(t,x,u,flag)
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
sizes.NumDiscStates  = 6;
sizes.NumOutputs     = 2;
sizes.NumInputs      = 8;
sizes.DirFeedthrough = 0;
sizes.NumSampleTimes = 1;   % at least one sample time is needed

sys = simsizes(sizes);

%
% initialize the initial conditions
%
x0  = [0 0 0 0 0 0];
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
%%%%%%%%%%%%%%注意Ts=1e-6%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%        

%J_f1e-2至1e3 一下内容DSP中运算
% J_f = 0.01;
% if 0.004096<J_f<=0.1
%    Freq_Division_S16=1; %%即Ts=1e-6
% %  TsOverJ_S16_Q27=1024*131072*1e-6/J; 范围
%    TsOverJ_S16_Q27=134.217728/J_f; %%范围(1.3~13)*1024 = 1331.2 ~ 13312
%    Ts_Over_2pi_S16_Q27 = 21;%%1024*131072*1e-6/2pi
% end
% if 0.1<J_f<=1
%    Freq_Division_S16=10; %%即Ts=1e-5
%    TsOverJ_S16_Q27=1342.17728/J_f;%%范围(1.3~13)*1024
%    Ts_Over_2pi_S16_Q27 = 214;%%1024*131072*1e-5/2pi
% end
% if 1<J_f<=10
%    Freq_Division_S16=100; %%即Ts=1e-4
%    TsOverJ_S16_Q27=13421.7728/J_f;%%范围(1.3~13)*1024ss
%    Ts_Over_2pi_S16_Q27 = 2136;%%1024*131072*1e-4/2pi
% end
% if 10<J_f<=409.6
%    Freq_Division_S16=1000; %%即Ts=1e-3
%    TsOverJ_S16_Q27=134217.728/J_f;%%范围(1.3~13)*1024
%    Ts_Over_2pi_S16_Q27 = 21361;%%1024*131072*1e-3/2pi
% end
Freq_Division_S16               = u(1); % 额定范围1,10,100,1000, 用于变步长计算
TsOverJ_S16_Q27               = u(2); %即Ts/J*131072*1024,当Ts=1e-7，J=1式，TsOverJ_S16_Q27=13
Te_S35_Q17                       = u(3); %精度为1/32，即小数点占5位，其余全部是整数位
TL_S35_Q17                       = u(4); %%最大值1024,精度1/32=0.03125
TsOver2pi_S16_Q34           = u(5); %即Ts/2PI*131072*131072,当Ts=1e-7，J=100式，Ts_Over_2pi_S16_Q27=769
B_S16_Q11                       = u(6); %%最大值16,精度1/2048
PolePair                    = u(7); %%最大值16,精度1
RstN=u(8);  %  有符号18位,对状态量进行复位
if RstN==0
                    x(1)=0; %%%x状态变量定义为18位有符号数
                    x(2)=0;
                    x(3)=0;
                    x(4)=0;
                    x(5)=0;
                    x(6)=0;
else
                    x(1) = x(1) + 1;  %%% x(1)表示18位有符号数
                    if x(1) >= Freq_Division_S16
                            x(1) = 0;     
% OMG = OMG + Ts/J(Te-TL-B*OMG);
%Q17精度表示：131072*OMG = 131072*OMG + 131072*Ts/J*(Te-TL-B*OMG);
%定义x(2)=OMG_S35_Q17=131072*OMG，简化为OMG_S35_Q17 = OMG_S35_Q17 + Ts/J*(Te_S35_Q17-TL_S35_Q17-B*OMG_S35_Q17);
%定义DTorq_S35_Q17，进一步简化为         OMG_S35_Q17 = OMG_S35_Q17 + Ts/J*DTorq_S35_Q17;
                            Temp1_S53 = B_S16_Q11*x(2);     
                            Temp1_S35_Q17 = Temp1_S53/2048; %%%B*OMG_S35_Q17=(B_S16_Q11/2048)*OMG_S35_Q17
                            DTorq_S35_Q17 = Te_S35_Q17-TL_S35_Q17-Temp1_S35_Q17;%精度为1/32，即小数点占5位
% 计算Ts/J，用Q27表示，即扩大1024*131072倍
% Ts/J*DTorq_S35_Q17 变为 1024*131072*Ts/J*DTorq_S35_Q17/1024/131072 
                            Temp2_S53     = TsOverJ_S16_Q27*DTorq_S35_Q17; 
                            DOMG_S35_Q17 = Temp2_S53/1024/13107; %%使用移位实现
%计算 OMG_S35_Q17 = OMG_S35_Q17 + DOMG_S35_Q17
                            x(2) = x(2) + DOMG_S35_Q17;%% x(3)为36位数据类型，有符号
                            eOmg_S53 = PolePair*x(2);%%转换为电转速，保留精度
                            eOmg_S35_Q17 = eOmg_S53;%%将乘法之后的54位变为36位，取符号位和低35位即可
 %%%           Theta = Theta + Ts*eOmg
%%%角度标幺化  Theta/2pi = Theta/2pi + Ts*eOmg/2pi
%%%转换符号    Theta_pu =  Theta_pu + Ts/2pi*eOmg
%%% 变成131072*131072范围 131072*131072*Theta_pu = 131072*131072*Theta_pu + 131072*131072*Ts/2pi*eOmg
%%% 定义Q34变量  Theta_pu_S35_Q34  =  Theta_pu_S35_Q34 + TsOver2pi_S16_Q34*eOmg
%%% 继续改写     Theta_pu_S35_Q34  =  Theta_pu_S35_Q34 + TsOver2pi_S16_Q34*eOmg_S35_Q17/131072
%%% TsOver2pi_S16_Q34=131072*131072*1e-6/2/3.1415926=2734.261148947193
                            Temp3_S53 = TsOver2pi_S16_Q34 * eOmg_S35_Q17;
                            DPos_S35_Q27 = Temp3_S53/131072;
                            x(3) = x(3) + DPos_S35_Q27;%% x(4)=Theta_pu_S35_Q34，有符号
%                                 if x(3)>=131072*131072
%                                     x(3)=x(3) - 131072*131072;
%                                 end
%                                 if x(3)<=-131072*131072
%                                    x(3) =x(3) + 131072*131072;
%                                 end
                            x(4) =  32*eOmg_S35_Q17/131072; %%输出x(4)电转速为S18_Q4格式，降低精度为-8191.0625 +8191.0625
                            x(5) = x(3)/131072;%%输出x(5)电角度为18位数据类型，降低精度为-131072是-360,131072是360

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
sys=[x(5) x(6)]; %%输出电角度和电转速，有符号18位
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
sys = t + 1e-6;
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
