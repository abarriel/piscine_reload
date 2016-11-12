ifconfig -a | grep -n "ether" | awk '{print $NF}'

