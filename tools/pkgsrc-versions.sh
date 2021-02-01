#!/bin/bash

_get_pkgsrcver() {
	lynx -dump "https://raw.githubusercontent.com/NetBSD/pkgsrc-wip/master/$1/Makefile" | sed -n "s|^DISTNAME.*-\([0-9].*\)|\1|p"
}

_get_ever() {
	lynx -dump -listonly "https://enlightenment.org/download" | sed -n "s|.*/$1-\([0-9].*\)\.tar\.xz.*|\1|p"
}

_get_versions() {
	echo "efl=$(_get_pkgsrcver efl)=$(_get_ever efl)"
	echo "enlightenment-current=$(_get_pkgsrcver enlightenment-current)=$(_get_ever enlightenment)"
	echo "terminology=$(_get_pkgsrcver terminology)=$(_get_ever terminology)"
	echo "krusader-kf5=$(_get_pkgsrcver krusader-kf5)=$(lynx -dump "https://download.kde.org/stable/krusader/" | sed -n "s|.*krusader/\([0-9].*\)/|\1|p" | tail -1)"
}

_START=$(date +"%Y-%m-%d/%H:%M:%S")

for i in $(_get_versions); do
	_name=$(echo $i | cut -d = -f 1)
	_pkgsrcver=$(echo $i | cut -d = -f 2)
	_realver=$(echo $i | cut -d = -f 3)
	if [ "$_pkgsrcver" = "$_realver" ]; then
		echo "$_name is up to date"
	else
		echo "$_name: $_pkgsrcver != $_realver"
	fi
done

_STOP=$(date +"%Y-%m-%d/%H:%M:%S")
echo ">>> Version checking time: $(datediff -i "%Y-%m-%d/%H:%M:%S" -f "%Mm %Ss" $_START $_STOP)"

exit 0

