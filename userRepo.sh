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
	case $choice in
		1) echo "Creating user" ;;
		2) echo "Showing all users" ;;
		3) echo "Authenticating user" 
		   findUser ;;
		4) echo "Modify a user" ;;
		5) echo "Deleting a user" ;;
		6) echo "Exiting menu" ;;
		*) echo "Mismatched choice";
	esac
	echo "Press ENTER "; read anykey
done
echo "END"


