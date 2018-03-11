pid=`pidof $1`
arry=($pid)
IFS=$'\n'

for i in ${arry[*]}
  do
        file=`cat /proc/$i/status`
	array=($file)      
	echo ${array[5]}
	echo ${array[0]}
	echo ${array[6]}
	echo "State: Running"
	echo ""
done
