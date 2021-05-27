#!/bin/bash

NAME=${1?Error: no name given}
mkdir $NAME
NEW1="  ifstream fin (\"${NAME}.in\");" 
NEW2="  ofstream fout (\"${NAME}.out\");"
NEWTITLE="TASK: ${NAME}"

cd $NAME
sed '32s,.*,'"$NEW1"',' ../header.cpp > "${NAME}.cpp"
sed -i '33s,.*,'"$NEW2"',' "${NAME}.cpp"
sed -i '3s,.*,'"$NEWTITLE"',' "${NAME}.cpp"
touch "${NAME}.in"