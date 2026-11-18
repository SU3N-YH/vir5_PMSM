param(
    [string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE',
    [switch]$Baseline
)
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$variant = if ($Baseline) { 'baseline' } else { 'fixed' }
$build = Join-Path $workspace "validation\timing180\$variant"
New-Item -ItemType Directory -Force $build | Out-Null
$oldPath = $env:PATH
$oldXilinx = $env:XILINX
function Invoke-Ise([string]$Program, [string[]]$Arguments) {
    & (Join-Path $IseRoot "bin\nt64\$Program.exe") @Arguments 2>&1 |
        Out-File -Encoding ascii -Append (Join-Path $build 'build.log')
    if ($LASTEXITCODE -ne 0) { throw "$Program failed; see $build\build.log" }
}
try {
    $env:XILINX = $IseRoot
    $env:PATH = "$IseRoot\lib\nt64;$IseRoot\bin\nt64;$env:PATH"
    if ($Baseline) {
        # Snapshot the existing synthesized design before changing RTL.
        if (!(Test-Path (Join-Path $build 'design.ngc'))) {
            Copy-Item (Join-Path $workspace 'vir5_PMSM.ngc') (Join-Path $build 'design.ngc')
        }
        $ucf = Get-Content -Raw (Join-Path $build 'main.ucf')
        $ucf += "`nNET `"clk_ex`" TNM_NET = `"SYS_CLK20`";`n"
        $ucf += "TIMESPEC `"TS_SYS_CLK20`" = PERIOD `"SYS_CLK20`" 50 ns HIGH 50% INPUT_JITTER 500 ps;`n"
        $ucf | Set-Content -Encoding ascii (Join-Path $build 'timing.ucf')
    } else {
        New-Item -ItemType Directory -Force (Join-Path $build 'xst/projnav.tmp') | Out-Null
        Copy-Item (Join-Path $workspace 'main.ucf') (Join-Path $build 'timing.ucf')
        $project = foreach ($line in (Get-Content (Join-Path $workspace 'vir5_PMSM.prj'))) {
            if ($line -match '^verilog work "(.+)"$') {
                'verilog work "' + (Join-Path $workspace $Matches[1]).Replace('\','/') + '"'
            } else { $line }
        }
        $project | Set-Content -Encoding ascii (Join-Path $build 'design.prj')
        # Match the active ISE project's XST options, including hierarchy
        # flattening and normal effort; only relocate inputs and outputs.
        $xst = Get-Content (Join-Path $workspace 'vir5_PMSM.xst')
        $xst = $xst -replace '^-ifn .+$','-ifn design.prj'
        $xst = $xst -replace '^-ofn .+$','-ofn design'
        $xst = $xst -replace '^-sd .+$',('-sd {"' + $workspace.Replace('\','/') + '/ipcore_dir"}')
        $xst | Set-Content -Encoding ascii (Join-Path $build 'design.xst')
    }
    Push-Location $build
    try {
        '' | Set-Content -Encoding ascii build.log
        if (!$Baseline) { Invoke-Ise 'xst' @('-ifn','design.xst','-ofn','design.syr') }
        # Baseline must resolve the preserved one-stage multiplier, even
        # after ipcore_dir has been updated to the two-stage implementation.
        $coreDirectory = if ($Baseline) { $build } else { "$workspace\ipcore_dir" }
        Invoke-Ise 'ngdbuild' @('-sd',$coreDirectory,'-sd',"$workspace\ipcore_dir",'-uc','timing.ucf','-p','xc6slx25-ftg256-2','design.ngc','design.ngd')
        Invoke-Ise 'map' @('-w','-p','xc6slx25-ftg256-2','-ol','high','-o','design_map.ncd','design.ngd','design.pcf')
        Invoke-Ise 'par' @('-w','-ol','high','design_map.ncd','design.ncd','design.pcf')
        Invoke-Ise 'trce' @('-v','1','-n','20000','-fastpaths','design.ncd','-o','all_endpoints.twr','design.pcf')
    } finally { Pop-Location }
} finally { $env:PATH = $oldPath; $env:XILINX = $oldXilinx }
$report=Get-Content -Raw (Join-Path $build 'all_endpoints.twr')
if ($report -notmatch 'Timing errors:\s+0\s') {
    throw "Top-level timing failed; see $build\all_endpoints.twr"
}
Write-Output "Timing report: $build\all_endpoints.twr"
