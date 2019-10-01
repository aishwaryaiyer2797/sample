echo "Enter n:"
read n
table
i=1
table($i){
c= $i++
if [ $i -le 10 ]
then
echo "$n * $i = `expr $n \* $i`"
else
$(table $c)
done


