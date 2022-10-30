COMMENT =		highly customizable, clear and fast audio player
VER =			1.7.0-stable3
PKGNAME =		sayonara-${VER:S/-//}
DISTNAME =		sayonara-player-${VER}
CATEGORIES =		audio

HOMEPAGE =		https://www.sayonara-player.com/
MASTER_SITES =		https://www.sayonara-player.com/files/source/${VER}/
EXTRACT_SUFX =		.tar.bz2

MAINTAINER =		kikadf <kikadf.01@gmail.com>

# GPLv3
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} Qt5Core Qt5DBus Qt5Gui Qt5Network
WANTLIB += Qt5Sql Qt5Svg Qt5Widgets Qt5Xml c execinfo glib-2.0
WANTLIB += gobject-2.0 gstapp-1.0 gstbase-1.0 gstreamer-1.0 intl
WANTLIB += m tag z

MODULES =		devel/cmake x11/qt5

RUN_DEPENDS =		devel/desktop-file-utils \
			multimedia/gstreamer1/plugins-bad \
			multimedia/gstreamer1/plugins-good \
			multimedia/gstreamer1/plugins-libav \
			x11/gtk+3,-guic

LIB_DEPENDS =		audio/taglib \
			multimedia/gstreamer1/plugins-base \
			x11/qt5/qtsvg

.include <bsd.port.mk>
