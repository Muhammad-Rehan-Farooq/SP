if [ $# -eq 0 ]
then
    echo "No command line argument"
else
    filename=$1
    var2=$2
    owner=`ls -l $filename`
    arr=($owner)
    
    echo "Owner : ${arr[2]}"
    echo "Group : ${arr[3]}"
    echo "Permissions : ${arr[0]}"
    echo "Filename : $filename"    

    if [ ${arr[2]} = $var2 ]
    then
        echo "Cheating = 0"
    else
        echo "Cheating = 1"
    fi
fi
