#Main Program

#Save oldIFS value
oldIFS=$IFS

#Getting All files of any Extension
files=(`ls *.*`)
echo ${files[*]}

#Separate the extension to make the folders of that name
for i in ${files[*]}
do 
   IFS=$'.'
   arr=($i)
   length=${#arr[*]}
   length=`expr $length-1`
   ext+=(${arr[$length]})
   
done

#Getting Unique extensions
id=($(echo "${ext[@]}" | tr ' ' '\n' | sort -u | tr '\n' ' '))
IFS=$' '

#Making Directories
for i in ${id[*]}
do
  mkdir $i
done

#Place files in their proper folders
for i in ${files[*]}
do
   IFS=$'.'
   arr=($i)
   length=${#arr[*]}
   length=`expr $length-1`
   ext=${arr[$length]}
   IFS=$oldIFS
   mv $i $ext
done

