project open vir5_PMSM.xise
process run "Synthesize - XST"
set result [process get "Synthesize - XST" status]
puts "PROJECT_SYNTHESIS_STATUS=$result"
project close
if {$result ne "up_to_date" && $result ne "warnings"} {exit 1}
exit 0
