param([string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$simulation = Join-Path $workspace 'validation\fsmc\sim'
New-Item -ItemType Directory -Path $simulation -Force | Out-Null
$pci = (Join-Path $workspace 'PCI.v').Replace('\', '/')
$tb = (Join-Path $workspace 'tests\tb_fsmc.v').Replace('\', '/')
@("verilog work `"$pci`"", "verilog work `"$tb`"") | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
$previousPath = $env:PATH
$previousXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = (Join-Path $IseRoot 'lib\nt64') + ';' + (Join-Path $IseRoot 'bin\nt64') + ';' + $env:PATH
    Push-Location $simulation
    try {
        & (Join-Path $IseRoot 'bin\nt64\fuse.exe') -intstyle silent -prj test.prj -o test.exe work.tb_fsmc
        if ($LASTEXITCODE -ne 0) { throw 'FSMC elaboration failed; see fuse.log.' }
        & .\test.exe -intstyle silent -tclbatch run.tcl -log test.log
        if ($LASTEXITCODE -ne 0) { throw 'FSMC simulation failed.' }
        $log = Get-Content -Raw test.log
        if ($log -match '\bFAIL:' -or $log -notmatch 'PASS: FSMC complete') { throw 'FSMC regression failed; see test.log.' }
    } finally { Pop-Location }
} finally { $env:PATH = $previousPath; $env:XILINX = $previousXilinx }
Write-Output "PASS: FSMC regression. Log: $simulation\test.log"
