#!/bin/sh
#mkdir -p fake
#cp fake.c fake/trial.c
cd ~/Coding/C/fake

a=0
T="$(date +%s)"
up=$(((RANDOM%10)+4))

#upto=shuf -i1-10 -n1

echo $up
while [ $a -lt $upto ]
do
#cp trial.c script_$a.c
echo $T >> $T+$a.c
a=`expr $a + 1`
done

echo reached
cd ~/Coding
git add -A
git commit -m "$T" 
git push
echo 'Write done at' $T >> ~/git_fakepush_log.txt
