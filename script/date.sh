 #! /bin/bash 

dte="$(date +"%A, %d %m %y %l:%M%p:%S"| sed 's/  / /g')"
echo "$dte"

