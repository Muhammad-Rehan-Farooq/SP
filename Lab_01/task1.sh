var1=0 var2=0
if [ $# -le 1 ]
then
    read -p "Enter Two Numbers : " var1 var2
else
    var1=$1
    var2=$2
fi

if [ -z $var2 ]
then
    echo "Complete values not given"
else
	echo "First Value : $var1"
	echo "2nd Value : $var2"

	echo "Sum = " `expr $var1 + $var2`
	echo "Difference = " `expr $var1 - $var2`
	echo "Multiplication = " `expr $var1 \* $var2`
	echo "Division = " `expr $var1 / $var2`
	echo "Mod = " `expr $var1 % $var2`
fi
