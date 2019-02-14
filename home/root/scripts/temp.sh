#! /bin/sh
watch -n0.5 'cat /sys/class/thermal/thermal_zone0/temp;cat /sys/class/thermal/thermal_zone1/temp;cat /sys/class/thermal/thermal_zone2/temp;cat /sys/class/thermal/thermal_zone3/temp;'
