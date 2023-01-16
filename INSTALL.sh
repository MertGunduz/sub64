#!/bin/bash

#******************************************
# BUILD DIRECTORY CREATION PART [1]
#******************************************
if [ ! -d "build" ]
then
    mkdir build

    echo "=%= build directory created =%="
fi

#******************************************
# USR/BIN DIRECTORY CONTROL PART [2]
#******************************************
if [ -f "/usr/bin/praiselang" ]
then
    # delete the exe file if it exist in the system
    sudo rm /usr/bin/praiselang

    echo "=%= exe file controlling =%="
    sleep 1
fi

#******************************************
# USR/SHARE/MAN DIRECTORY CONTROL PART [3]
#******************************************
if [ -f "/usr/share/man/man1/praiselang.1.gz" ]
then
    sudo rm /usr/share/man/man1/praiselang.1.gz

    echo "=%= man file controlling =%="
    sleep 1
fi

#******************************************
# COMPILING AND LINKING PART [4]
#******************************************
if [ -d "build" ]
then
    # run cmake and go to build directory then run makefiles
    cmake -S . -B build
    cd build && make

    # man page generation
    cp ../man/praiselang.1 praiselang.1

    echo "=%= compiling and linking the project =%="
    sleep 1
fi

#******************************************
# MOVING THE EXE & MANUAL PAGE PART [5]
#******************************************
if [ ! -f "/usr/bin/praiselang" ] && [ ! -f "/usr/share/man/man1/praiselang.1.gz" ]
then
    # move the praiselang executable to usr/bin and moving man page to usr/share/man
    sudo mv src/app/praiselang /usr/bin
    sudo mv praiselang.1 /usr/share/man/man1
    sudo gzip /usr/share/man/man1/praiselang.1

    echo "=%= moving the executable to usr/bin =%="
    sleep 1
fi

#****************************************
# DELETING THE SOURCE BUILD DIRECTORY [6]
#****************************************
cd .. && rm -r build

echo "=%= removing the build directory =%="
sleep 1

if [ -f "/usr/bin/praiselang" ] && [ -f "/usr/share/man/man1/praiselang.1.gz" ]
then 
    sudo echo "=%= praiselang installation succesful =%="
else
    sudo echo "=%= praiselang installation unsuccesful =%="
fi
