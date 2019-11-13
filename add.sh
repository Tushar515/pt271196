#!/bin/bash

#Addition of two numbers

clear

echo -n "Enter the num1: "
read num1

echo -n "Enter the num2: "
read num2

sum=`expr $num1 + $num2`

echo "sum = $sum"
exit


