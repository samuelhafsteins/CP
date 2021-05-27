#!/bin/bash

#FILE=${1?Error: no name given}
NAME=${1?Error: no name given}
#mkdir $FILE

#cd $FILE
cat ../header.cpp > "${NAME}.cpp"
touch "${NAME}.in"