#! /bin/bash
echo 22 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio22/direction
