#!/bin/bash

echo "Enter the value of n(nth term of Fibonacci Series) : "
read n

a=0
b=1
echo "The Fibonacci series with $n terms are : "

echo $a
echo $b

for((i=2;i<n;i++))
do
  fib=$((a+b))
  a=$b
  b=$fib
  echo $fib
done
