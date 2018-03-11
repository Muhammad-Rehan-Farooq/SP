if [ $# -gt 1 -o $# -lt 1 ]
then
    echo "Only one Commmand Line Argument acceptable !"
else
    if [ -s $1 ]
    then
        awk 'NR%2==0' $1 > EvenFile
	awk 'NR%2==1' $1 > OddFile
    else
	echo "File is not proper to proceed..."
    fi
	      
fi
