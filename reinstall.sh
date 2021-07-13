#! /bin/bash

#reinstall packages 

pacman -Syu - < pkgs


# after reinstall add aur helper 'yay'
git clone aur.archlinux.org/yay.git
pushd yay
makepkg -si
popd

# reinstall yay pkgs
yay -S - < forpkgs
