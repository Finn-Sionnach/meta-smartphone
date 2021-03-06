require cornucopia-base.inc

inherit fso-plugin

inherit update-rc.d

INITSCRIPT_NAME = "${PN}"
INITSCRIPT_PARAMS = "start 39 S ."

inherit systemd
SYSTEMD_SERVICE_${PN} = "${PN}.service"
RPROVIDES_${PN} += "${PN}-systemd"
RREPLACES_${PN} += "${PN}-systemd"
RCONFLICTS_${PN} += "${PN}-systemd"

SRC_URI_append = " file://${PN}"

do_install_append() {
    install -d ${D}${sysconfdir}/init.d/
    install -m 0755 ${WORKDIR}/${PN} ${D}${sysconfdir}/init.d/
    install -d ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/data/${PN}.service ${D}${systemd_unitdir}/system/${PN}.service
}
