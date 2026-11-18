$ErrorActionPreference='Stop'
$ise='E:\SUEN27\14.7\ISE_DS\ISE'
$env:XILINX=$ise
$env:PATH="$ise\lib\nt64;$ise\bin\nt64;$env:PATH"
Set-Location $PSScriptRoot
& "$ise\bin\nt64\fuse.exe" -intstyle silent -mt off -prj test.prj -L unisims_ver -o custom_check.exe work.tb_custom work.glbl
if($LASTEXITCODE -ne 0){throw 'fuse failed'}
& .\custom_check.exe -intstyle silent -tclbatch run.tcl -log custom_check.log
Get-Content custom_check.log
