#while loop in action
count=1
while [ $count -le 10 ]
do
	if [ $count -eq 4 ]
	then
		break
	fi
	echo $count
	count=`expr $count +1`
done


