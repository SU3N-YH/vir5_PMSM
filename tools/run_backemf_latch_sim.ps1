param([string]$IseRoot = 'E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$previousPath = $env:PATH
$previousXilinx = $env:XILINX
try {
    $env:XILINX = $IseRoot
    $env:PATH = (Join-Path $IseRoot 'lib\nt64') + ';' + (Join-Path $IseRoot 'bin\nt64') + ';' + $env:PATH
    foreach ($variant in @('real180', 'real50', 'variable180')) {
        $simulation = Join-Path $workspace "validation\backemf_latch\$variant"
        New-Item -ItemType Directory -Path $simulation -Force | Out-Null
        $cordicSource = if ($variant -eq 'variable180') { 'tests\cordic_variable_latency.v' } else { 'CORDIC_STANDALONE.v' }
        $top = if ($variant -eq 'real50') { 'tb_backemf_latch_50MHz' } else { 'tb_backemf_latch' }
        $sources = @('ipcore_dir\MUL18x18_bEMF.v', $cordicSource, 'BackEMF.v', 'tests\tb_backemf_latch.v')
        $projectLines = foreach ($source in $sources) {
            'verilog work "' + (Join-Path $workspace $source).Replace('\','/') + '"'
        }
        $projectLines | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
        "run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
        Push-Location $simulation
        try {
            & (Join-Path $IseRoot 'bin\nt64\fuse.exe') -intstyle silent -prj test.prj -L unisims_ver -o test.exe "work.$top" work.glbl
            if ($LASTEXITCODE -ne 0) { throw "BackEMF latch $variant elaboration failed; see fuse.log." }
            & .\test.exe -intstyle silent -tclbatch run.tcl -log test.log
            if ($LASTEXITCODE -ne 0) { throw "BackEMF latch $variant simulation failed; see test.log." }
            $log = Get-Content -Raw test.log
            if ($log -match '\bFAIL:' -or $log -notmatch 'PASS: BackEMF latch') {
                throw "BackEMF latch $variant regression failed; see test.log."
            }
            if ($variant -eq 'variable180' -and $log -notmatch 'done_slots=0007fffe') {
                throw 'Variable-latency test did not cover all 18 completion slots.'
            }
        } finally { Pop-Location }
    }
} finally { $env:PATH = $previousPath; $env:XILINX = $previousXilinx }
Write-Output 'PASS: BackEMF latch regressions (real 180/50 MHz and variable latency).'
