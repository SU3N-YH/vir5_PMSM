param([string]$IseRoot = $env:XILINX)

$ErrorActionPreference = 'Stop'
if (-not $IseRoot) { $IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE' }
$fuse = Join-Path $IseRoot 'bin\nt64\fuse.exe'
if (-not (Test-Path -LiteralPath $fuse)) {
    throw 'Supply -IseRoot with the ISE 14.7 ISE directory, or run from an ISE command prompt.'
}
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
# [2026-11-10 15:58 CST] Keep the native-five-phase simulation path as a comment.
# $simulation = Join-Path $workspace 'validation\inductor_update\sim'
$simulation = Join-Path $workspace 'validation\three_plus_two\sim'
New-Item -ItemType Directory -Path $simulation -Force | Out-Null
$projectLines = foreach ($line in Get-Content (Join-Path $workspace 'vir5_PMSM.prj')) {
    if ($line -notmatch '^verilog work "([^"]+)"$') { throw "Unexpected source entry: $line" }
    $sourcePath = (Join-Path $workspace $Matches[1]).Replace('\', '/')
    'verilog work "' + $sourcePath + '"'
}
# [2026-11-10 15:58 CST] Use the A/B/C + D/E testbench; old model test remains on disk.
# $testbenchPath = (Join-Path $workspace 'tests\tb_inductor_update.v').Replace('\', '/')
$testbenchPath = (Join-Path $workspace 'tests\tb_3plus2.v').Replace('\', '/')
$projectLines += 'verilog work "' + $testbenchPath + '"'
$projectLines | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')

$previousPath = $env:PATH
$previousXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = (Join-Path $IseRoot 'lib\nt64') + ';' + (Join-Path $IseRoot 'bin\nt64') + ';' + $env:PATH
    Push-Location $simulation
    try {
        # [2026-11-10 15:58 CST] Replace obsolete native-five-phase elaboration target.
        # & $fuse -intstyle silent -prj test.prj -L unisims_ver -o test.exe work.tb_inductor_update work.glbl
        & $fuse -intstyle silent -prj test.prj -L unisims_ver -o test.exe work.tb_3plus2 work.glbl
        if ($LASTEXITCODE -ne 0) { throw 'ISim elaboration failed; see fuse.log.' }
        & .\test.exe -intstyle silent -tclbatch run.tcl -log test.log
        if ($LASTEXITCODE -ne 0) { throw 'ISim execution failed; see test.log.' }
        $log = Get-Content -Raw test.log
        # [2026-11-10 15:58 CST] Expect the new 3+2 regression result.
        # if ($log -match '\bFAIL:' -or $log -notmatch 'PASS: multiplier latency, five-phase TDM, PWM and STM32 integration') {
        if ($log -match '\bFAIL:' -or $log -notmatch 'PASS: 3\+2 equivalence, multiplier latency, slopes, PWM, dead time, reset and STM32 integration') {
            throw 'Inductor regression failed; see test.log.'
        }
    } finally {
        Pop-Location
    }
} finally {
    $env:PATH = $previousPath
    $env:XILINX = $previousXilinx
}
Write-Output "PASS: structural-IP regression. Log: $simulation\test.log"
