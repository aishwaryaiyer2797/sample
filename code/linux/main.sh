#! /bin/bash
#To store information
#created by abc
#created date 10/01/2019

ans="y"
while [ $ans = "y" ]
do

clear
echo "Enter PS No: "
read psno
echo "Enter name: "
read name
echo "Enter Company: "
read company
echo "Marks 1:"
read m1;
echo "Marks 2:"
read m2;
echo "Marks 3:"
read m3;
c=`expr $m1 + $m2 + $m3`
per=`expr $c / 3`
echo "$psno $name $company $m1 $m2 $m3 $c $per" >>a1

if [ $per -ge 70 ]
then
echo "Distinction"
elif [ $per -ge 60 ]
then
echo "First class"
elif [ $per -ge 40 ]
then
echo "Second class"
else
echo "Fail"
fi

echo "Do you want to continue? "
read ans

done
