Is_Lower()
{
   if [ $# -gt 0 ]
   then
      echo -n "After converting string into lower case : "
      echo "$1" | tr '[:upper:]' '[:lower:]'
   else
      echo "No argument !"
   fi
}

Is_Root()
{
   var=`id -u`
   if [ $var -eq 0 ]
   then
       echo "-->Script is executing by Root"
   else
       echo "-->Script is executing by other user"
   fi
}

Is_User_Exist()
{
   declare -i tmp
   tmp=0
   if [ $# -gt 0 ]
   then
      var=(`cat /etc/passwd | grep $1`)
      for i in ${var[*]}
      do
	 IFS=$':'
	 arr=($i)
         if [ ${arr[0]} = $1 ]
	 then
	     echo "User Exists"
	     tmp=$tmp+1
	     break
	 fi
      done
      
      if [ $tmp -eq 0 ]
      then
          echo "User not exist"
      fi

   else
      echo "No argument !"
   fi
}

#Main Program
  
#Calling Is_Root Function()
  Is_Root

#Calling Is_Lower_Function()
  echo ""
  read -p "Enter String : " str
  Is_Lower $str

#Calling Is_User_Exist Function()
  echo ""
  read -p "Enter Username : " user
  Is_User_Exist $user
  

