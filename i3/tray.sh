#!/bin/bash

pkill -f nm-applet
pkill -f pasystray
pkill -f blueman-applet

pasystray --notify=all &
nm-applet --indicator &
blueman-applet &
