RDEPENDS_${PN} = "kexec"
PV = "0.5.9"
PR = "r1+gitr${SRCREV}"

SRC_URI = "git://git.linuxtogo.org/home/groups/kexecboot/kexecboot.git;protocol=git "
SRCREV = "d391c05fe7b9379f62a34e7dd5deb851de2b0a0b"
S = "${WORKDIR}/git"

require kexecboot.inc
