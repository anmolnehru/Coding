#!/bin/sh
mkdir -p fake
cp fake.c fake/trial.c
cd fake
a=1

while [ $a -lt 20 ]
do
cp trial.c script_$a.c
a=`expr $a + 1`
done
cd ..
