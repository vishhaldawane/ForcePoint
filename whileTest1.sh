echo "begin mainn"


while [ ! -f invoice.lst ]
do
	echo "Waiting for invoice.lst to recieve"
	sleep 1
done

echo "Invoice recieved.."
echo "Processing the payment..."

echo "end mainn"

