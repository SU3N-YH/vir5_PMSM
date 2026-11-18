param([string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$simulation = Join-Path $workspace 'validation\fsmc_port1\sim'
New-Item -ItemType Directory -Path $simulation -Force | Out-Null
$pci = (Join-Path $workspace 'PCI.v').Replace('\', '/')
$tb = (Join-Path $workspace 'tests\tb_fsmc_port1.v').Replace('\', '/')
@("verilog work `"$pci`"", "verilog work `"$tb`"") | Set-Content -Encoding ascii (Join-Path $simulation 'port1.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
$previousPath = $env:PATH
$previousXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = (Join-Path $IseRoot 'lib\nt64') + ';' + (Join-Path $IseRoot 'bin\nt64') + ';' + $env:PATH
    Push-Location $simulation
    try {
        & (Join-Path $IseRoot 'bin\nt64\fuse.exe') -intstyle silent -prj port1.prj -o port1.exe work.tb_fsmc_port1
        if ($LASTEXITCODE -ne 0) { throw 'FSMC port1 elaboration failed; see fuse.log.' }
        & .\port1.exe -intstyle silent -tclbatch run.tcl -log port1.log
        if ($LASTEXITCODE -ne 0) { throw 'FSMC port1 simulation failed.' }
        $log = Get-Content -Raw port1.log
        if ($log -match '\bFAIL:' -or $log -notmatch 'PASS: FSMC port1 loopback') { throw 'FSMC port1 regression failed; see port1.log.' }
    } finally { Pop-Location }
} finally { $env:PATH = $previousPath; $env:XILINX = $previousXilinx }
Write-Output "PASS: FSMC port1 regression. Log: $simulation\port1.log"
