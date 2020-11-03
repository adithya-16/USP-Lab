echo "Enter n: "
read n
a=0
b=1
i=2
echo "Fibonacci up to $n terms: "
echo "0\n1"
f=`expr $a + $b`
while [ $i -lt $n ]
do
	f=`expr $a + $b`
	a=$b
	b=$f
	echo "$f "
	i=`expr $i + 1`
done
