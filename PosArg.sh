
if test $# -eq 2
then
	echo "Two positional parameters supplied: $1 and $2"
elif test $# -lt 2
then
	echo "Too few parameters supplied. Only received $# instead of 2."
else
	echo "Too many parameters supplied. Only accepting $1 and $2 out of $# parameters."
fi
