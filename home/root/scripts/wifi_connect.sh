#! /bin/bash
config_file="/var/lib/connman/ac_wifi.config"
> $config_file
echo "[service_ac_wifi]" >> $config_file
echo "Type = wifi" >> $config_file
#echo "Security = wpa2" >> $config_file
echo "Name = $1" >> $config_file
echo "Passphrase = $2" >> $config_file
