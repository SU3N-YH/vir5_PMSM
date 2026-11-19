param([string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$simulation = Join-Path $workspace 'validation\pwm_deadzn\sim'
New-Item -ItemType Directory -Path $simulation -Force | Out-Null
$project = foreach ($line in (Get-Content (Join-Path $workspace 'vir5_PMSM.prj'))) {
    if ($line -notmatch '^verilog work "(.+)"$') { throw 'Unexpected project entry' }
    'verilog work "' + (Join-Path $workspace $Matches[1]).Replace('\', '/') + '"'
}
$project += 'verilog work "' + (Join-Path $workspace 'tests\tb_pwm_deadzn.v').Replace('\', '/') + '"'
$project += 'verilog work "' + (Join-Path $workspace 'tests\tb_pwm_deadzn_top.v').Replace('\', '/') + '"'
$project | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
$oldPath = $env:PATH
$oldXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = "$IseRoot\lib\nt64;$IseRoot\bin\nt64;$env:PATH"
    Push-Location $simulation
    try {
        foreach ($test in @('tb_pwm_deadzn', 'tb_pwm_deadzn_top')) {
            & "$IseRoot\bin\nt64\fuse.exe" -intstyle silent -prj test.prj -L unisims_ver -o "$test.exe" "work.$test" work.glbl
            if ($LASTEXITCODE -ne 0) { throw "$test elaboration failed; see fuse.log" }
            & ".\$test.exe" -intstyle silent -tclbatch run.tcl -log "$test.log"
            if ($LASTEXITCODE -ne 0) { throw "$test simulation failed" }
            $log = Get-Content -Raw "$test.log"
            if ($log -match '\bFAIL:' -or $log -notmatch 'PASS:') { throw "$test regression failed; see $test.log" }
        }
    } finally { Pop-Location }
} finally { $env:PATH = $oldPath; $env:XILINX = $oldXilinx }
Write-Output "PASS: PWM deadtime regressions. Logs: $simulation"
