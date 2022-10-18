COMMENT-main =		system tray monitor for dhcpcd (based on Qt5)
COMMENT-gtk2 =		system tray monitor for dhcpcd (based on Gtk2)
COMMENT-common =	system tray monitor for dhcpcd (common files)

VER =			0.7.8
DISTNAME =		dhcpcd-ui-${VER}
PKGNAME-main =		dhcpcd-ui-qt5-${VER}
PKGNAME-gtk2 =		dhcpcd-ui-gtk2-${VER}
PKGNAME-common =	dhcpcd-ui-common-${VER}

CATEGORIES =		x11

HOMEPAGE =		http://roy.marples.name/projects/dhcpcd-ui/
MASTER_SITES =		https://roy.marples.name/downloads/dhcpcd/
EXTRACT_SUFX =		.tar.xz
MULTI_PACKAGES =	-main -gtk2 -common

MAINTAINER =		kikadf <kikadf.01@gmail.com>

# BSD 3-clauses
# Icons: BSD, GPLv2, GPLv3, LGPLv3
PERMIT_PACKAGE =	Yes

WANTLIB-main += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5Widgets c intl m

WANTLIB-gtk2 += c gdk_pixbuf-2.0 glib-2.0 gobject-2.0 gtk-x11-2.0 intl notify

BUILD_DEPENDS +=	devel/gettext,-tools

RUN_DEPENDS-main =	devel/desktop-file-utils \
			${BASE_PKGPATH},-common=${VER}

RUN_DEPENDS-gtk2 =	devel/desktop-file-utils \
			${BASE_PKGPATH},-common=${VER}

RUN_DEPENDS-common =	x11/gtk+3,-guic

LIB_DEPENDS-main =	${MODQT5_LIB_DEPENDS} \
			devel/gettext,-runtime

LIB_DEPENDS-gtk2 =	x11/gtk+2 \
			devel/gettext,-runtime \
			devel/libnotify

MODULES +=		x11/qt5

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS +=	--with-gtk \
			--with-qt \
			--with-icons \
			--without-curses \
			--without-dhcpcd-online \
			--enable-notification \
			--sysconfdir=${SYSCONFDIR}

# CFLAGS and LFLAGS need to gettext check of configure script
CONFIGURE_ENV +=	QMAKE=${MODQT5_QMAKE} \
			CFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"

FAKE_FLAGS +=		INSTALL_ROOT=${WRKINST}

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/dhcpcd-ui/xdg/autostart
	${INSTALL_DATA} ${WRKINST}/etc/xdg/autostart/dhcpcd-{qt,gtk}.desktop \
			${PREFIX}/share/examples/dhcpcd-ui/xdg/autostart/

.include <bsd.port.mk>
