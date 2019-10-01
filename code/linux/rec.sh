count=1
echo "Enter n:"
read n
recurse()
{
	count=$((count+1))
	if [ $count -lt 10 ]
	then 
		echo "$n * $count = `expr $n /* $count`" 
		recurse 
		
	fi
}
recurse
