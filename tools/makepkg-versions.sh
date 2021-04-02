#!/bin/bash

#echo "mantisbt=$(lynx -dump -listonly "https://aur.archlinux.org/packages/mantisbt/" | sed -n 's|.*mantisbt-\([0-9].*\).tar.gz|\1|p')"
#echo "linux-armv7-lts=$(lynx -dump -listonly "https://www.kernel.org/" | sed -n 's|.*linux-\(4\.9\.[0-9]*\).tar.xz|\1|p')"
echo "uboot-opipc=$(lynx -dump "https://www.denx.de/wiki/U-Boot/ReleaseCycle" | sed -n 's:.*U-Boot v\([0-9].*\) was.*:\1:p' | head -1)"
#echo "mega-sdk=$(lynx -dump -listonly "https://github.com/meganz/sdk/tags" | sed -n 's:.*v\([0-9].*\)\.tar\.gz:\1:p' | head -1)"
echo "mega-cmd=$(lynx -dump -listonly "https://github.com/meganz/MEGAcmd/tags" | sed -n 's:.*tags.\(.*[0-9]\)_Linux.*\.tar\.gz:\1:p' | head -1)"
#echo "powerpanel=$(lynx -dump "https://www.cyberpowersystems.com/product/software/powerpanel-for-linux/" | sed -n 's|.*Current version: \(.*\)|\1|p')"
#_WATCH_7a=$(lynx -dump -listonly "https://github.com/networkupstools/nut/tags" | sed -n 's:.*v\([0-9].*\)\.tar\.gz:\1:p' | head -1)
#_WATCH_7b=$(lynx -dump "https://github.com/networkupstools/nut" | sed -n 's:.*\[[0-9]*\]\([0-9].*\),\([0-9]*\) commits.*:\1\2:p')
#echo "network-ups-tools=$_WATCH_7a.$_WATCH_7b"
#echo "plex-media-server=$(lynx -dump -listonly "https://aur.archlinux.org/packages/plex-media-server/" | sed -n 's|.*plexmediaserver-\([0-9].*\)-.*.rpm.*|\1|p')"
echo "sfeed=$(lynx -dump -nolist "https://codemadness.org/releases/sfeed/" | sed -n "s|sfeed-\(.*\).tar.gz .*|\1|p" | sort -V | tail -1)"

exit 0

