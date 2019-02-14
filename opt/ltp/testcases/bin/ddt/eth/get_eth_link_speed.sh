#! /bin/sh
############################################################################### 
# Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/
#  
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as 
# published by the Free Software Foundation version 2.
# 
# This program is distributed "as is" WITHOUT ANY WARRANTY of any
# kind, whether express or implied; without even the implied warranty
# of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
###############################################################################

# @desc Returns linkspeed for a given ethernet interface
# @params i) eth interface name
# @returns eth interface's link speed with units as reported by ethtool
source "common.sh"  # Import do_cmd(), die() and other functions

############################# Functions #######################################
usage()
{
	echo "get_eth_link_speed.sh -i <eth interface (i.e. eth0)>"
	echo "Returns the link speed for given interface"
	exit 1
}

################################ CLI Params ####################################
# Please use getopts
while getopts  :i:h arg
do case $arg in
        i)      IFACE="$OPTARG";;
        h)      usage;;
        :)      die "$0: Must supply an argument to -$OPTARG.";; 
        \?)     die "Invalid Option -$OPTARG ";;
esac
done
# Define default values if possible
: ${IFACE:='eth0'}

############################ USER-DEFINED Params ###############################
# Try to avoid defining values here, instead see if possible
# to determine the value dynamically. ARCH, DRIVER, SOC and MACHINE are 
# initilized and exported by runltp script based on platform option (-P)
case $ARCH in
esac
case $DRIVER in
esac
case $SOC in
esac
case $MACHINE in
esac
# Define default values for variables being overriden

########################### DYNAMICALLY-DEFINED Params #########################
# Try to use /sys and /proc information to determine values dynamically.
# Alternatively you should check if there is an existing script to get the
# value you want
LINKSPEED=`ethtool $IFACE|grep "Speed:"|awk '/Speed: /{ print $2 }'`

[ -n "$LINKSPEED" ] || die "Could not get link speed from ethtool for Ethernet interface ${IFACE}"
########################### REUSABLE TEST LOGIC ###############################
# DO NOT HARDCODE any value. If you need to use a specific value for your setup
# use USER-DEFINED Params section above.
echo "${LINKSPEED}"
