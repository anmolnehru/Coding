#!/bin/sh
#mkdir -p fake
#cp fake.c fake/trial.c
cd ~/Coding/C/fake

a=0
T="$(date +%s)"
while [ $a -lt 4 ]
do
#cp trial.c script_$a.c
echo $T >> $T+$a.c
a=`expr $a + 1`
done
cd ..
