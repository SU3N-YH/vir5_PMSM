param(
    [string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE',
    [switch]$FullTop
)
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$variant = if ($FullTop) { 'build' } else { 'module_build' }
$build = Join-Path $workspace "validation\pwm_deadzn\$variant"
New-Item -ItemType Directory -Force (Join-Path $build 'xst\projnav.tmp') | Out-Null
$project = foreach ($line in (Get-Content (Join-Path $workspace 'vir5_PMSM.prj'))) {
    if ($line -notmatch '^verilog work "(.+)"$') { throw 'Unexpected project entry' }
    'verilog work "' + (Join-Path $workspace $Matches[1]).Replace('\', '/') + '"'
}
if (!$FullTop) { $project = 'verilog work "' + (Join-Path $workspace 'PWM_Deadzn.v').Replace('\', '/') + '"' }
$project | Set-Content -Encoding ascii (Join-Path $build 'design.prj')
$xst = Get-Content (Join-Path $workspace 'vir5_PMSM.xst')
$xst = $xst -replace '^-ifn .+$', '-ifn design.prj'
$xst = $xst -replace '^-ofn .+$', '-ofn design'
$xst = $xst -replace '^-sd .+$', ('-sd {"' + $workspace.Replace('\', '/') + '/ipcore_dir"}')
if (!$FullTop) { $xst = $xst -replace '^-top .+$', '-top PWM_Deadzn' }
$xst | Set-Content -Encoding ascii (Join-Path $build 'design.xst')
Copy-Item -LiteralPath (Join-Path $workspace 'main.ucf') -Destination (Join-Path $build 'timing.ucf')
if (!$FullTop) {
    @('NET "clk_50MHz" TNM_NET = "PWM_CLK50";',
      'TIMESPEC "TS_PWM_CLK50" = PERIOD "PWM_CLK50" 20 ns HIGH 50%;') |
        Set-Content -Encoding ascii (Join-Path $build 'timing.ucf')
}
function Invoke-Ise([string]$Program, [string[]]$Arguments) {
    & "$IseRoot\bin\nt64\$Program.exe" @Arguments 2>&1 |
        Out-File -Encoding ascii -Append (Join-Path $build 'build.log')
    if ($LASTEXITCODE -ne 0) { throw "$Program failed; see $build\build.log" }
}
$oldPath = $env:PATH
$oldXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = "$IseRoot\lib\nt64;$IseRoot\bin\nt64;$env:PATH"
    Push-Location $build
    try {
        '' | Set-Content -Encoding ascii build.log
        Invoke-Ise 'xst' @('-ifn', 'design.xst', '-ofn', 'design.syr')
        Invoke-Ise 'ngdbuild' @('-sd', "$workspace\ipcore_dir", '-uc', 'timing.ucf', '-p', 'xc6slx25-ftg256-2', 'design.ngc', 'design.ngd')
        Invoke-Ise 'map' @('-w', '-p', 'xc6slx25-ftg256-2', '-logic_opt', 'off', '-ol', 'high', '-t', '1', '-xt', '0', '-register_duplication', 'off', '-r', '4', '-global_opt', 'off', '-mt', 'off', '-ir', 'off', '-pr', 'off', '-lc', 'off', '-power', 'off', '-o', 'design_map.ncd', 'design.ngd', 'design.pcf')
        Invoke-Ise 'par' @('-w', '-ol', 'high', 'design_map.ncd', 'design.ncd', 'design.pcf')
        Invoke-Ise 'trce' @('-v', '12', '-n', '12', '-fastpaths', 'design.ncd', '-o', 'design.twr', 'design.pcf')
        $timing = Get-Content -Raw design.twr
        if ($timing -notmatch 'Timing errors:\s+0\s') { throw 'Timing check failed; see design.twr' }
        if ($FullTop) { Invoke-Ise 'bitgen' @('-w', '-f', "$workspace\vir5_PMSM.ut", 'design.ncd') }
    } finally { Pop-Location }
} finally { $env:PATH = $oldPath; $env:XILINX = $oldXilinx }
Write-Output "PASS: $variant build, zero timing errors. Timing report: $build\design.twr"
