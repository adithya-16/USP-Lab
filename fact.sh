echo "Enter number: "
read n
f=1
tmp=$n

while [ $n -gt 0 ]
do
    f=`expr $n \* $f`
    n=`expr $n - 1`
done

echo "$tmp! = $f"
