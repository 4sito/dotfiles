#! /bin/bash

#reinstall packages 

# make sure to uncomment the 'multilib' repo from pacaman config file in /etc/pacman.conf

pacman -Syu - < pkgs


#make sure to run this NOT as root
# after reinstall add aur helper 'yay'
git clone https://aur.archlinux.org/yay.git
pushd yay
makepkg -si
popd

# reinstall yay pkgs
yay -S - < forpkgs
