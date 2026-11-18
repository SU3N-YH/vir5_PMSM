param([string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$simulation = Join-Path $workspace 'validation\backemf180\port6'
New-Item -ItemType Directory -Force $simulation | Out-Null
$sources = @('ipcore_dir\MUL18x18_bEMF.v','CORDIC_STANDALONE.v',
             'BackEMF.v','PCI.v','tests\tb_backemf_port6.v','tests\tb_cordic180_equivalence.v')
$project = foreach ($source in $sources) {
    'verilog work "' + (Join-Path $workspace $source).Replace('\','/') + '"'
}
$project | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
$oldPath=$env:PATH
$oldXilinx=$env:XILINX
try {
    $env:XILINX=$IseRoot
    $env:PATH="$IseRoot\lib\nt64;$IseRoot\bin\nt64;$env:PATH"
    Push-Location $simulation
    try {
        foreach ($test in @('tb_backemf_port6','tb_cordic180_equivalence')) {
            & "$IseRoot\bin\nt64\fuse.exe" -intstyle silent -prj test.prj -L unisims_ver -o "$test.exe" "work.$test" work.glbl
            if ($LASTEXITCODE -ne 0) { throw "$test elaboration failed" }
            & ".\$test.exe" -intstyle silent -tclbatch run.tcl -log "$test.log"
            if ($LASTEXITCODE -ne 0) { throw "$test simulation failed" }
            $log=Get-Content -Raw "$test.log"
            if ($log -match '\bFAIL:' -or $log -notmatch 'PASS:') {
                throw "$test regression failed; see $test.log"
            }
        }
    } finally { Pop-Location }
} finally { $env:PATH=$oldPath; $env:XILINX=$oldXilinx }
Write-Output "PASS: Port6 and CORDIC equivalence regressions. Logs: $simulation"
