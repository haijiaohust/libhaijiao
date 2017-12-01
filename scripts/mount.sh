#/bin/bash
###
#how to use this shell command
#./mount.sh ip_addr
###
mount -t cifs //$1/share share/ -o username=haijiao,password=abcdabcd
