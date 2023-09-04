function findUser() {
	username=jack
	echo "Enter username : "; read -t 5 username
	echo "Enter password : "; read -s password
	echo "username : $username"; echo "password : $password"

	cut -d "|" -f1,2 user.list | grep -q -w -n $username

	if [ $? -eq 0 ]
	then
		echo "USER FOUND"
		USERLINE=`cut -d "|" -f1,2 user.list | grep -w -n $username | cut -d ":" -f1`
		echo "USER INFO : $USERLINE"
		USERPASS=`sed -n "$USERLINE"p user.list | cut -d "|" -f3`

		if [ $password = $USERPASS ]; then
			echo "User found..."
		else
			echo "User password didnot  match"
		fi
	else
		echo "USER NOT FOUND"
	fi
}

function findAllUsers() {
	LINES=`wc -l user.list | tr -s " "  | sed 's/^ //' | cut -d " " -f1`
	record=1
	while [ $record -le $LINES ]
	do
		DATA=`sed -n $record"p" user.list | cut -d "|" -f2,4`
		echo $DATA
		record=$((record+1))
		echo "----------"
	done
}
function modifyUser() {

	echo "Enter username : "
	read username

	DATA=`cut -d "|" -f2 user.list | grep -n $username`
	LNO=`echo $DATA | cut -d ":" -f1`
	PASSWD=`sed -n $LNO"p" user.list | cut -d "|" -f3`
	CITY=`sed -n $LNO"p" user.list | cut -d "|" -f4`
	echo "current password : $PASSWD"
	echo "current city     : $CITY"
	echo "Enter new password : "
	read newpasswd
	echo "Enter new city : "
	read newcity
	sed -i .backup $LNO"s/$PASSWD/$newpasswd/" user.list
	sed -i .backup $LNO"s/$CITY/$newcity/" user.list
	echo "RECORD UPDATED"

}
function menu() {
	echo "---------------------------"
	echo "User management menu"
	echo "---------------------------"
	echo "1. add a new user"
	echo "2. find all users"
	echo "3. find user by name"
	echo "4. modify user"
	echo "5. delete user by name"
	echo "---------------------------"
	echo "6. exit"
	echo "---------------------------"
	echo "Enter choice : "
}

choice=0
while [ $choice -ne 6 ]
do
	clear
	menu
	read choice 
	if [ -z $choice  ]
	then
		choice=0
		echo "Choice can not be blank"
	fi
	case $choice in
		1) echo "Creating user" ;;
		2) echo "Showing all users" 
			findAllUsers ;;

		3) echo "Authenticating user" 
		   findUser ;;
		4) echo "Modify a user" 	
		   modifyUser ;;
		5) echo "Deleting a user" ;;
		6) echo "Exiting menu" ;;
		*) echo "Mismatched choice";
	esac
	echo "Press ENTER "; read anykey
done
echo "END"


