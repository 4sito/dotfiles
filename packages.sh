#! /bin/zsh

pacman -Q | awk '{print $1}' > /home/asito/.config/packages
