echo "Enter name"
read name
cat a1|cut -d" " -f2,7,8|grep "$name" 
