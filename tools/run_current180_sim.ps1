param([string]$IseRoot='E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference='Stop'
$workspace=(Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$simulation=Join-Path $workspace 'validation\timing180\current_sim'
New-Item -ItemType Directory -Force $simulation | Out-Null
$sources=@('ipcore_dir/mul18x35_1225_BySunY.v','ipcore_dir/mul_inductor_2.v','Inductor.v','Inductor_DE.v','tests/tb_current180.v')
$project=foreach($source in $sources){'verilog work "'+(Join-Path $workspace $source).Replace('\','/')+'"'}
$project | Set-Content -Encoding ascii (Join-Path $simulation 'test.prj')
"run all`nquit" | Set-Content -Encoding ascii (Join-Path $simulation 'run.tcl')
$oldPath=$env:PATH;$oldXilinx=$env:XILINX
try {
 $env:XILINX=$IseRoot;$env:PATH="$IseRoot\lib\nt64;$IseRoot\bin\nt64;$env:PATH"
 Push-Location $simulation
 try {
  & "$IseRoot\bin\nt64\fuse.exe" -intstyle silent -prj test.prj -L unisims_ver -o test.exe work.tb_current180 work.glbl
  if($LASTEXITCODE -ne 0){throw 'Current elaboration failed'}
  & .\test.exe -intstyle silent -tclbatch run.tcl -log test.log
  if($LASTEXITCODE -ne 0){throw 'Current simulation failed'}
  $log=Get-Content -Raw test.log
  if($log -match '\bFAIL:' -or $log -notmatch 'PASS: current180'){throw 'Current regression failed'}
 } finally {Pop-Location}
} finally {$env:PATH=$oldPath;$env:XILINX=$oldXilinx}
