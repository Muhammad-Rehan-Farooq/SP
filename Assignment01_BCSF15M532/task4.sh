#Main Program

if [ $# -gt 1 -o $# -lt 1 ]
then
    echo "Invalid Arguments"
else
    if [ -s $1 ]
    then
        cat $1 | sort | uniq 1>outputFile
        echo "Output Save to file..."
    else
        echo "File is not proper"
    fi
fi
