ifconfig | awk -F " " '/ether / {print $2}'
