echo "Enter value of number1"
read a
echo "Enter value of number2"
read b
ans="y"
while [ $ans = "y" ]
do
clear
echo "1) ADD 2) SUB 3) MUL 4) DIV"
echo "Enter your choice"
read choice
case $choice in
1) echo "Sum of $a and $b is `expr $a + $b`";;
2) echo "Difference between $a and $b is `expr $a - $b`";;
3) echo "Product of $a and $b is `expr $a \* $b`";;
4) echo "Quotient of $a and $b is `expr $a / $b`";;
esac

echo "Do you want to continue? "
read ans

done
