param([string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$simulation = Join-Path $workspace 'validation\neutral5\sim'
New-Item -ItemType Directory -Path $simulation -Force | Out-Null
$sourceFiles = @('ipcore_dir\division5.v', 'add5ov5.v', 'Volt_N_calc.v', 'tests\tb_neutral5.v')
$projectLines = foreach ($source in $sourceFiles) {
    'verilog work "' + (Join-Path $workspace $source).Replace('\','/') + '"'
}
$projectLines | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
$previousPath = $env:PATH
$previousXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = (Join-Path $IseRoot 'lib\nt64') + ';' + (Join-Path $IseRoot 'bin\nt64') + ';' + $env:PATH
    Push-Location $simulation
    try {
        & (Join-Path $IseRoot 'bin\nt64\fuse.exe') -intstyle silent -mt off -prj test.prj -L unisims_ver -o test.exe work.tb_neutral5 work.glbl
        if ($LASTEXITCODE -ne 0) { throw 'Neutral5 elaboration failed; see fuse.log.' }
        & .\test.exe -intstyle silent -tclbatch run.tcl -log test.log
        if ($LASTEXITCODE -ne 0) { throw 'Neutral5 simulation failed; see test.log.' }
        $log = Get-Content -Raw test.log
        if ($log -match '\bFAIL:' -or $log -notmatch 'PASS: five-phase averages') {
            throw 'Neutral5 regression failed; see test.log.'
        }
    } finally { Pop-Location }
} finally { $env:PATH = $previousPath; $env:XILINX = $previousXilinx }
Write-Output "PASS: Neutral5 regression. Log: $simulation\test.log"
