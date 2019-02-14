#! /bin/bash
config_file="/var/lib/connman/ac_wifi.config"
> $config_file
connmanctl disable ethernet
connmanctl tether wifi on $1 $2
