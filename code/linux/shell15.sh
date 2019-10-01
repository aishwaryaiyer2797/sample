echo "Enter name of person whose marks are to be modified"
read name
echo "Enter marks 1:"
read m1
echo "marks 2:"
read m2
echo "marks 3:"
read m3
c=`expr $m1 + $m2 + $m3`
per=`expr $c / 3`

var1=`cat a1|grep "$name"|cut -d" " -f1`
var2=`cat a1|grep "$name"|cut -d" " -f2`
var3=`cat a1|grep "$name"|cut -d" " -f3`
cat a1|grep -v "$name">a4
mv a4 a1

echo "$var1 $var2 $var3 $m1 $m2 $m3 $c $per">>a1
cat a1|sort -n
