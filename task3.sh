UNIX=('Debian' 'Red Hat' 'Ubuntu' 'Suse' 'Fedora')
echo "Print whole Array : "
echo ${UNIX[*]}
echo "Length of Array =  ${#UNIX[*]}"
echo "Length of 2nd Element =  ${#UNIX[2]}"
echo "Extract Two Elements : ${UNIX[*] : 2 : 2}"
echo "Searching : ${UNIX[*]/Ubuntu/'SCO Unix'}"
UNIX=(${UNIX[@]} 'AIX' 'HP-UX')
echo "After Appending :"
echo ${UNIX[*]}
unset UNIX[2]
echo "After Removing 3rd Element :"
echo ${UNIX[@]}

LINUX=(${UNIX[*]})
echo "Showing content of LINUX Array : "
echo ${LINUX[*]}

BASH=(${UNIX[*]} ${LINUX[*]})
echo "Showing content of BASH Array : "
echo ${BASH[*]}

echo "Deleting LINUX and UNIX Arrays...."
unset UNIX[*]
unset LINUX[*]
echo "Arrays Deleted !"
echo "Now Showing Arrays UNIX and LINUX : "
echo ${UNIX[*]}
echo ${LINUX[*]}

