
ps -f | grep -q -w -s vi | grep -q  -v  -e  "grep"

if [ $? -ne 0 ]
then
	echo "nothing"
else
	V_PID=`ps -f | grep -w vi | grep -v -e "grep"  | tr -s " "  | cut -d " " -f3`
	V_PPID=`ps -f | grep -w vi | grep -v -e "grep"  | tr -s " "  | cut -d " " -f4`
	echo "vi editor is running in $V_PID and its parent is $V_PPID"
fi

