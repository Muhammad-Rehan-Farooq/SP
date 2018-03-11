IFS=$'\n'
showAllOwners()
{
   username=$1
   arry=(`ls -l ~`)
   
   declare -i k=0
   for j in ${arry[*]}
   do
      if [ $k -eq 0 ]
      then
          k=$k+1
          continue
      else
          #echo $j 
          IFS=$' '  
          arr1=($j)
	 
	  arr2=()
	  i=0
	  while [ "$i" -lt "${#arr1[0]}" ]
	  do
	     arr2+=("${arr1[0]:$i:1}")
	     i=$((i+1))
	  done

	  if [ ${arr1[2]} = $username ]
	  then
	      if [ ${arr2[0]} = "d" ]
	      then
	          echo ${arr1[8]} "| Directory | " $username
	      elif [ ${arr2[0]} = "-" ]
	      then
		  echo ${arr1[8]} "| File | " $username
	      else
		  echo ${arr1[8]} "| Other file Type | " $username
	      fi
	  fi

      fi
   done
 
}

#Main Program

if [ $# -eq 0 ]
then
    echo "Invalid Command Line Arguments !"
elif [ $# -gt 1 ]
then
    echo "Invalid Command Line Arguments !"
else
   showAllOwners $1
fi
