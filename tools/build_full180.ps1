param([string]$IseRoot='E:\SUEN27\14.7\ISE_DS\ISE')
$ErrorActionPreference='Stop'
$workspace=(Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$log=Join-Path $workspace 'validation\timing180\root_build.log'
$backup=Join-Path $workspace 'validation\timing180\baseline'
New-Item -ItemType Directory -Force $backup | Out-Null
foreach($file in @('vir5_pmsm.bit','vir5_PMSM.ncd','vir5_PMSM.ngc','vir5_PMSM.pcf')) {
 if((Test-Path (Join-Path $workspace $file)) -and !(Test-Path (Join-Path $backup $file))) {
  Copy-Item (Join-Path $workspace $file) (Join-Path $backup $file)
 }
}
function Invoke-Ise([string]$Program,[string[]]$Arguments) {
 & "$IseRoot\bin\nt64\$Program.exe" @Arguments 2>&1 | Out-File -Encoding ascii -Append $log
 if($LASTEXITCODE -ne 0){throw "$Program failed; see $log"}
}
$oldPath=$env:PATH;$oldXilinx=$env:XILINX
try {
 $env:XILINX=$IseRoot;$env:PATH="$IseRoot\lib\nt64;$IseRoot\bin\nt64;$env:PATH"
 Push-Location $workspace
 try {
  '' | Set-Content -Encoding ascii $log
  Invoke-Ise 'xst' @('-intstyle','ise','-ifn','vir5_PMSM.xst','-ofn','vir5_PMSM.syr')
  Invoke-Ise 'ngdbuild' @('-intstyle','ise','-dd','_ngo','-sd','ipcore_dir','-nt','timestamp','-uc','main.ucf','-p','xc6slx25-ftg256-2','vir5_PMSM.ngc','vir5_PMSM.ngd')
  Invoke-Ise 'map' @('-intstyle','ise','-p','xc6slx25-ftg256-2','-w','-logic_opt','off','-ol','high','-t','1','-xt','0','-register_duplication','off','-r','4','-global_opt','off','-mt','off','-ir','off','-pr','off','-lc','off','-power','off','-o','vir5_PMSM_map.ncd','vir5_PMSM.ngd','vir5_PMSM.pcf')
  Invoke-Ise 'par' @('-w','-intstyle','ise','-ol','high','-mt','off','vir5_PMSM_map.ncd','vir5_PMSM.ncd','vir5_PMSM.pcf')
  Invoke-Ise 'trce' @('-intstyle','ise','-v','12','-s','2','-n','12','-fastpaths','-xml','vir5_PMSM.twx','vir5_PMSM.ncd','-o','vir5_PMSM.twr','vir5_PMSM.pcf')
  $timing=Get-Content -Raw vir5_PMSM.twr
  if($timing -notmatch 'Timing errors:\s+0\s'){throw 'Root implementation failed timing'}
  $map=Get-Content -Raw vir5_PMSM_map.mrp
  $par=Get-Content -Raw vir5_PMSM.par
  if($map -notmatch 'Number of warnings:\s+0' -or $par -notmatch 'Number of warning messages:\s+0') {
   throw 'Review MAP/PAR warnings before generating a bitstream'
  }
  Invoke-Ise 'bitgen' @('-intstyle','ise','-f','vir5_PMSM.ut','vir5_PMSM.ncd')
 } finally {Pop-Location}
} finally {$env:PATH=$oldPath;$env:XILINX=$oldXilinx}
Write-Output 'PASS: Root ISE build, zero MAP/PAR warnings, zero timing errors, bitstream generated.'
