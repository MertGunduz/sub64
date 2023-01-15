#!/bin/bash

#******************************************
# BUILD DIRECTORY CREATION PART [1]
#******************************************
if [ ! -d "build" ]
then
    mkdir build
fi

echo "=%= build directory created =%="

#******************************************
# USR-DIRECTORY CONTROL PART [2]
#******************************************
if [ -f "/usr/bin/praiselang" ] 
then
    # delete the files if they are exist in the system
    sudo rm /usr/bin/praiselang
fi

echo "=%= file structure controlling =%="
sleep 1

#******************************************
# COMPILING AND LINKING PART [3]
#******************************************
if [ -d "build" ]
then
    # run cmake and go to build directory then run makefiles
    cmake -S . -B build
    cd build && make
fi

echo "=%= compiling and linking the project =%="
sleep 1

#******************************************
# MOVING THE EXECUTABLE TO USR/BIN PART [4]
#******************************************
if [ ! -f "/usr/bin/praiselang" ]
then
    # move the praiselang executable to usr/bin (exexcutable place)
    sudo mv src/app/praiselang /usr/bin
fi

echo "=%= moving the executable to usr/bin =%="
sleep 1

#****************************************
# DELETING THE SOURCE BUILD DIRECTORY [5]
#****************************************
cd .. && rm -r build

echo "=%= removing the build directory =%="
sleep 1

if [ -f "/usr/bin/praiselang" ]
then 
    sudo echo "=%= praiselang installation succesful =%="
else
    sudo echo "=%= praiselang installation unsuccesful =%="
fi
