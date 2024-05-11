#!/bin/bash

while :
do
  echo "MENU DRIVEN CALCULATOR"
  echo "----------------------"
  echo "1-Addition"
  echo "2-Subtraction"
  echo "3-Multiplication"
  echo "4-Division"
  echo "5-Modulus"
  echo
  echo "Enter your chocie : "
  read choice
  echo "Enter first number : "
  read num1
  echo "Enter second number : "
  read num2
  case $ choice in
      1)
        result=$((num1+num2));;
      2)
        result=$((num1-num2));;
      3)
        result=$((num1*num2));;
      4)
        result=$((num1/num2));
      5)
        result=$((num1%num2));;
      *)
        echo "Invalid Choice!!!"
        result=0
  esac
  echo "RESULT=$result"
done  
