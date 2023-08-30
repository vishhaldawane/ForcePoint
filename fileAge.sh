echo "Enter filename1 : "; read filename1
echo "Enter filename2 : "; read filename2

if [ -z $filename1 ] ; then
	echo "Filename1 cannot be blank"; exit
fi

if [ -z $filename2 ] ; then
	echo "Filename2 cannot be blank"; exit
fi

if [ $filename1 -ot $filename2 ]
then
	echo "$filename1 is older than $filename2"
else
	if [ $filename1 -nt $filename2 ]
	then
		echo "$filename1 is newer  than $filename2"
	else
		echo "Both the files, $filename and $filename2 are of same age"
	fi
fi

