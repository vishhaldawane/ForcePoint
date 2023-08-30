echo "Enter pattern to search : "; read pattern
if [ -z $pattern ] # check if the string is zero length, ie blank string
then
	echo "Pattern cannot be blank"; exit
fi
echo "In which file?"; read filename

if [ -z $filename ] ; then
	echo "Filename cannot be blank"; exit
fi
if [ -f $filename ] # if the file is present
then
	grep $pattern $filename --color
	if [ $? -eq 0 ] ; then
		echo "Pattern : $pattern FOUND in $filename"
	else
		echo "Pattern : $pattern not found in $filename"; exit
	fi
else
	echo "Filename : $filename doesnt exist!!!"; exit 
fi


