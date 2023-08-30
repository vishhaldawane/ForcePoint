
echo "begin main"

x=1

while [ $x -le 5 ]
do
	echo "x is $x"	
	x=`expr $x + 1`
done

echo "--------"

y=5
until [ $y -eq 0 ]
do
	echo "y is $y"
	y=$((y-1))
done

echo "--------"
for((i=1;i<=5;i++))
do
	echo "i is $i"
done
echo "end main"
