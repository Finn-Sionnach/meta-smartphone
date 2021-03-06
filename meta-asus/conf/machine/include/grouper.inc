#-----------------------------------------------------------------------------
#@TYPE: Machine
#@NAME: Asus Grouper (also known as Google Nexus 7)
#@DESCRIPTION: Machine configuration for the Asus Grouper
#-----------------------------------------------------------------------------

TARGET_ARCH = "arm"

MACHINE_CLASS = "grouper"

PREFERRED_PROVIDER_virtual/kernel ?= "linux-asus-grouper"
MACHINE_KERNEL_PR = "r1"

MACHINE_FEATURES = "kernel26 apm alsa bluetooth gps usbgadget usbhost wifi vfat ext2"
MACHINE_DISPLAY_WIDTH_PIXELS = "800"
MACHINE_DISPLAY_HEIGHT_PIXELS = "1280"
MACHINE_DISPLAY_ORIENTATION = "0"
MACHINE_DISPLAY_PPI = "233"

MACHINE_EXTRA_RDEPENDS = "asus-grouper-firmware"

PREFERRED_PROVIDER_virtual/egl ?= "libhybris"
PREFERRED_PROVIDER_virtual/libgles1 ?= "libhybris"
PREFERRED_PROVIDER_virtual/libgles2 ?= "libhybris"
VIRTUAL-RUNTIME_android-system-image ?= "android-system-image-grouper"

PREFERRED_PROVIDER_virtual/xserver = "xserver-xorg"
XSERVER = " \
    xserver-xorg \
    xf86-input-evdev \
"

KERNEL_IMAGETYPE = "zImage"
IMAGE_FSTYPES += "tar.gz ext2 ext4"
IMAGE_ROOTFS_EXTRA_SPACE = "200000"

require conf/machine/include/tune-cortexa8.inc
