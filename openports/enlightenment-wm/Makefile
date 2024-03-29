COMMENT =		Enlightenment window manager
VER =			0.25.4
DISTNAME =		enlightenment-${VER}
PKGNAME=		enlightenment-wm-${VER}
CATEGORIES =		x11
HOMEPAGE =		https://www.enlightenment.org/
MASTER_SITES =		https://download.enlightenment.org/rel/apps/enlightenment/
EXTRACT_SUFX =		.tar.xz

MAINTAINER =		kikadf <kikadf.01@gmail.com>

# BSD
PERMIT_PACKAGE =	Yes

COMPILER =		base-clang ports-gcc base-gcc

WANTLIB += c ecore ecore_con ecore_evas ecore_file ecore_input
WANTLIB += ecore_input_evas ecore_ipc ecore_x edje eet efreet
WANTLIB += eina eio eldbus elementary emotion eo evas exif intl
WANTLIB += kvm m pthread pulse

MODULES =		devel/meson textproc/intltool

RUN_DEPENDS =		devel/desktop-file-utils \
			x11/gtk+3,-guic

LIB_DEPENDS =		audio/pulseaudio \
			devel/gettext,-runtime \
			graphics/libexif \
			x11/efl

CONFIGURE_ARGS =	-Ddevice-udev=false \
			-Dsystemd=false \
			-Delput=false \
			-Dgesture-recognition=false

CONFIGURE_ENV+=		CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib "

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/enlightenment-wm
	${INSTALL_DATA} ${WRKINST}/etc/enlightenment/sysactions.conf \
			${PREFIX}/share/examples/enlightenment-wm/
	${INSTALL_DATA} ${WRKINST}/etc/enlightenment/system.conf \
			${PREFIX}/share/examples/enlightenment-wm/
	${INSTALL_DATA} ${WRKINST}/etc/xdg/menus/e-applications.menu \
			${PREFIX}/share/examples/enlightenment-wm/

.include <bsd.port.mk>
