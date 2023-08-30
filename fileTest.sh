
echo "Enter filename : "
read filename

if [ -L $filename ]
then
	echo "its a soft link"
elif [ -d $filename ]; then
	echo "its a directory"
elif [ -b $filename ];then
	echo "its a block file"
elif [ -c $filename ];then
	echo "its a serial device"
elif [ -f $filename ];then
	echo "its a regular file"
else
	echo "It doesnt exist"
fi

