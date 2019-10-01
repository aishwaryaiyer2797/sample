echo "Enter n:"
read n

for i in `seq 10`
do
echo "$n * $i = `expr $n \* $i`"
done
