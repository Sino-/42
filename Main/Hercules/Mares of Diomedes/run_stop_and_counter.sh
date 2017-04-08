#!/bin/sh
chmod +x manger
chmod +x uncage.sh
ulimit -u 110
tame()
{
K=$!
kill -9 $K
rm -f *.poo
}
./manger & tame
./uncage.sh
