#!/bin/sh
#mkdir -p fake
#cp fake.c fake/trial.c
cd ~/Coding/C/fake

a=0
T="$(date +%s)"
up=$(( ( RANDOM % 10 )  + 1 ));
while [ $a -lt $up ]
do
#cp trial.c script_$a.c
echo $T >> $T+$a.c
a=`expr $a + 1`
done
cd ~/Coding
git add -A
git commit -m "$T" 
git push
echo 'Write done at' $T >> ~/git_fakepush_log.txt
