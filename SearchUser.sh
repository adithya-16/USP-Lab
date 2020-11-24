echo "List of home directories: "
for loc in `grep -o "/.\+:" /etc/passwd`
do
    echo "$loc\n"
done