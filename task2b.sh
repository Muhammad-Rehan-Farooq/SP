if [ $# -eq 0 ]
then
    echo "No command line arguments"
else
    filename1=$1
    username1=$2
    filename2=$3
    username2=$4
    
    if [ $username1 = $username2 ]
    then
        echo "Cheating = 1"
    else
        des=`ls -l $filename1`
        arr=($des)
        echo "File1 info:"
        echo "Owner : ${arr[2]}"
        echo "Group : ${arr[3]}"
        echo "Permissions : ${arr[0]}"
        echo "Filename : $filename1"
        
	echo ""
	des1=`ls -l $filename2`
        arr1=($des1)
        echo "File2 info:"
        echo "Owner : ${arr1[2]}"
        echo "Group : ${arr1[3]}"
        echo "Permissions : ${arr1[0]}"
        echo "Filename : $filename2"
	echo ""

        diff $filename1 $filename2
	
        if [ $? -eq 1 ]
        then
            echo "Cheating = 1"
        else
            echo "Cheating = 0"
        fi
    fi
        
fi
