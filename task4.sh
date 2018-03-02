var=`cat file`
array=($var)
echo "Content of Array : " 
echo ${array[*]}
echo "Length of Array : " ${#array[*]}
echo "Length of content of 3rd index : " ${#array[3]}
