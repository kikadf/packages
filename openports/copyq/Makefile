COMMENT =			Qt5 based clipboard manager
GH_ACCOUNT =		hluk
GH_PROJECT =			CopyQ
GH_TAGNAME =		v6.3.2
PKGNAME =			${DISTNAME:L}
CATEGORIES =			x11
EXTRACT_SUFX =		.tar.gz

MAINTAINER =			kikadf <kikadf.01@gmail.com>

# GPLv3
PERMIT_PACKAGE =		Yes

COMPILER =			base-clang ports-gcc base-gcc

WANTLIB += ${COMPILER_LIBCXX} ICE KF5Notifications Qt5Core Qt5DBus
WANTLIB += Qt5Gui Qt5Network Qt5Qml Qt5Svg Qt5WaylandClient Qt5Widgets
WANTLIB += Qt5X11Extras Qt5Xml SM X11 Xext Xfixes Xtst c m wayland-client

MODULES =			devel/kf5

RUN_DEPENDS =		devel/desktop-file-utils
RUN_DEPENDS +=		x11/gtk+3,-guic

LIB_DEPENDS =		devel/kf5/knotifications
LIB_DEPENDS +=		x11/qt5/qtsvg
LIB_DEPENDS +=		x11/qt5/qtwayland

.include <bsd.port.mk>
