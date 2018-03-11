printTable()
{
   var=$1
   start=$2
   end=$3
   r=$4
   if [ $r = "-r" ]
   then
      while [ $end -ge $start ]
      do
         echo "$var * $end = `expr $var \* $end`"
         end=`expr $end - 1`
      done
     
   else
      while [ $start -le $end ]
      do
         echo "$var * $start = `expr $var \* $start`"
         start=`expr $start + 1`
      done
   fi
}

#Main Program

if [ $# -eq 0 ]
then
    echo "No arguments"
elif [ $# -gt 6 ]
then
    echo "No of arguments exceeded !"
else
    if [ $# -eq 1 ]
    then
        printTable $1 1 10 "a"
    elif [ $# -eq 3 -a $2 = "-s" ]
    then
	printTable $1 $3 10 "a"
    elif [ $# -eq 3 -a $2 = "-e" ]
    then
	printTable $1 1 $3 "a"
    elif [ $# -eq 5 ]
    then
	printTable $1 $3 $5 "a"
    elif [ $# -eq 6 ]
    then
	printTable $1 $3 $5 $6
    fi
fi



