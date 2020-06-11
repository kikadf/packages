#!/bin/bash


_get_versions() {
	_PKGSRCVER_1=$(lynx -dump "https://raw.githubusercontent.com/NetBSD/pkgsrc-wip/master/efl-current/Makefile" | sed -n 's|.*efl-\([0-9].*\)|\1|p')
	_REALVER_1=$(lynx -dump -listonly "https://enlightenment.org/download" | sed -n 's|.*/efl-\([0-9].*\)\.tar\.xz.*|\1|p')
	echo "efl-current=$_PKGSRCVER_1=$_REALVER_1"
	_PKGSRCVER_2=$(lynx -dump "https://raw.githubusercontent.com/NetBSD/pkgsrc-wip/master/enlightenment-current/Makefile" | sed -n 's|.*enlightenment-\([0-9].*\)|\1|p')
	_REALVER_2=$(lynx -dump -listonly "https://enlightenment.org/download" | sed -n 's|.*/enlightenment-\([0-9].*\)\.tar\.xz.*|\1|p')
	echo "enlightenment-current=$_PKGSRCVER_2=$_REALVER_2"
	_PKGSRCVER_3=$(lynx -dump "https://raw.githubusercontent.com/NetBSD/pkgsrc-wip/master/terminology/Makefile" | sed -n 's|.*terminology-\([0-9].*\)|\1|p')
	_REALVER_3=$(lynx -dump -listonly "https://enlightenment.org/download" | sed -n 's|.*/terminology-\([0-9].*\)\.tar\.xz.*|\1|p')
	echo "terminology=$_PKGSRCVER_3=$_REALVER_3"
}

_START=$(date +"%Y-%m-%d/%H:%M:%S")

for i in $(_get_versions); do
	_name=$(echo $i | cut -d = -f 1)
	_aurver=$(echo $i | cut -d = -f 2)
	_realver=$(echo $i | cut -d = -f 3)
	if [ "$_aurver" = "$_realver" ]; then
		echo "$_name is up to date"
	else
		echo "$_name: $_aurver != $_realver"
	fi
done

_STOP=$(date +"%Y-%m-%d/%H:%M:%S")
echo ">>> Version checking time: $(datediff -i "%Y-%m-%d/%H:%M:%S" -f "%Mm %Ss" $_START $_STOP)"

exit 0

