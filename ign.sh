#!/bin/zsh

#handy file to add something to your .gitignore without having to open the file itself
#just launch the file and add one argument, that file while be appended to .gitignore
sed -i "1a $1" .gitignore
