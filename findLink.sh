echo "Enter filename : "; read filename

if [ -z $filename ] ; then
	echo "Filename cannot be blank"; exit
fi
if [ -f $filename ] # if the file is present
then
	INODE=`ls -il $filename` 

else
	echo "Filename : $filename doesnt exist!!!"; exit 
fi


