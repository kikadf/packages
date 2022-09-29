Orange Pi PC

Install to a micro SD card:

Replace sdX in the following instructions with the device name for the SD card as it appears on your computer.

1. Zero the beginning of the SD card:
	"dd if=/dev/zero of=/dev/sdX bs=1M count=8"

2. Start fdisk to partition the SD card:
	"fdisk /dev/sdX"

3. At the fdisk prompt, delete old partitions and create a new one:
	a. Type o. This will clear out any partitions on the drive.
	b. Type p to list partitions. There should be no partitions left.
	c. Now type n, then p for primary, 1 for the first partition on the drive, 2048 for the first sector, and then press ENTER to accept the default last sector.
	d. Write the partition table and exit by typing w.

4. Create the ext4 filesystem:
	"mkfs.ext4 /dev/sdX1"

5. Mount the filesystem:
	"mkdir mnt"
	"mount /dev/sdX1 mnt"

6. Download and extract the root filesystem:
        "wget http://downloads.sourceforge.net/project/opipc/image/ArchLinuxARM-orangepipc-latest.tar.gz"
        "bsdtar -xpf ArchLinuxARM-orangepipc-latest.tar.gz -C mnt"
        "sync"

7. Install the U-Boot bootloader:
	"wget http://downloads.sourceforge.net/project/opipc/boot/u-boot-sunxi-with-spl.bin"
	"dd if=u-boot-sunxi-with-spl.bin of=/dev/sdX bs=1024 seek=8"
	"wget http://downloads.sourceforge.net/project/opipc/boot/boot.scr -O mnt/boot/boot.scr"
	"umount mnt"
	"sync"

8. Insert the micro SD card into the Orange Pi PC, connect ethernet, and apply 5V power.

9. Use the serial console or SSH to the IP address given to the board by your router.
	Login as the default user alarm with the password alarm.
	The default root password is root.



Install the U-Boot package

1. In order to receive updates to the U-Boot bootloader, after logging into the system type:
	"pacman -Syu uboot-opipc"

2. When prompted, press y and hit enter to flash the bootloader to the SD card.

3. Merge any pacnew files created by the package overwriting the manually installed bootloader files.

