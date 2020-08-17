#!/bin/bash


_get_versions() {
	_AURVER_1=$(lynx -dump -listonly "https://aur.archlinux.org/packages/clipgrab-kde/" | sed -n 's|.*clipgrab-\([0-9].*\)\.tar\.gz.*|\1|p')
	_REALVER_1=$(lynx -dump -listonly "https://clipgrab.org/" | sed -n 's|.*clipgrab-\([0-9].*\)\.tar\.gz.*|\1|p')
	echo "clipgrab-kde=$_AURVER_1=$_REALVER_1"
	_url2="https://manjaro.moson.eu/stable/community/x86_64"
	_AURVER_2=$(lynx -dump -listonly "https://aur.archlinux.org/packages/virtualbox-ext-oracle-manjaro/" | \
					sed -n 's|.*Oracle_VM_VirtualBox_Extension_Pack-\([0-9].*\)\.vbox-extpack.*|\1|p')
	_REALVER_2=$(lynx -dump -listonly $_url2 | sed -n "s|.*$_url2/virtualbox-\([0-9].*\)-[0-9]-x86_64.pkg.tar.zst$|\1|p")
	echo "virtualbox-ext-oracle-manjaro=$_AURVER_2=$_REALVER_2"
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

