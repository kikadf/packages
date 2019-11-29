#!/bin/bash

#_WATCH_1=$(lynx -dump -listonly "https://aur.archlinux.org/packages/mantisbt/" | sed -n 's|.*mantisbt-\([0-9].*\).tar.gz|\1|p')
#_WATCH_2=$(lynx -dump -listonly "https://www.kernel.org/" | sed -n 's|.*linux-\(4\.9\.[0-9]*\).tar.xz|\1|p')
_WATCH_3=$(lynx -dump "https://www.denx.de/wiki/U-Boot/ReleaseCycle" | sed -n 's:.*U-Boot v\([0-9].*\) was.*:\1:p' | head -1)
#_WATCH_4=$(lynx -dump -listonly "https://github.com/meganz/sdk/tags" | sed -n 's:.*v\([0-9].*\)\.tar\.gz:\1:p' | head -1)
_WATCH_5=$(lynx -dump -listonly "https://github.com/meganz/MEGAcmd/tags" | sed -n 's:.*archive.\(.*[0-9]\).*\.tar\.gz:\1:p' | head -1)
#_WATCH_6=$(lynx -dump "https://www.cyberpowersystems.com/product/software/powerpanel-for-linux/" | sed -n 's|.*Current version: \(.*\)|\1|p')
_WATCH_7a=$(lynx -dump -listonly "https://github.com/networkupstools/nut/tags" | sed -n 's:.*v\([0-9].*\)\.tar\.gz:\1:p' | head -1)
_WATCH_7b=$(lynx -dump "https://github.com/networkupstools/nut" | sed -n 's:.*\[[0-9]*\]\([0-9].*\),\([0-9]*\) commits.*:\1\2:p')
_WATCH_8=$(lynx -dump -listonly "https://aur.archlinux.org/packages/plex-media-server/" | sed -n 's|.*plexmediaserver-\([0-9].*\)-.*.rpm.*|\1|p')


#echo "mantisbt=$_WATCH_1"
#echo "linux-armv7-lts=$_WATCH_2"
echo "uboot-opipc=$_WATCH_3"
#echo "mega-sdk=$_WATCH_4"
echo "mega-cmd=$_WATCH_5"
#echo "powerpanel=$_WATCH_6"
echo "network-ups-tools=$_WATCH_7a.$_WATCH_7b"
echo "plex-media-server=$_WATCH_8"

exit 0

