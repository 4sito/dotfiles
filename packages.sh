#! /bin/zsh

pacman -Qeqn | awk '{print $1}' > /home/asito/.config/pkgs
pacman -Qeqm | awk '{print $1}' > /home/asito/.config/forpkgs
