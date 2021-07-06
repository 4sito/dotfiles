#! /bin/zsh

pacman -Q | awk '{print $1}' > packages
