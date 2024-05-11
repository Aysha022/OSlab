#!/bin/bash

if [ $# -ne 2 ]
then
    echo "Usage : $0 <num1><num2> "
    exit
fi
fnum=$1
snum=$2

for((n=fnum;n<=snum;n++))
do
  rev=0
  value=$n
  while [ $value -gt 0 ]
  do
    rem=$((value%10))
    rev=$((rev*10 + rem))
    value=$((value/10))
  done
  if [ $n -eq $rev ]
  then
      echo "$n"
  fi
done  
