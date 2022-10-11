COMMENT-main =		Distributed IRC client (monolithic client)
COMMENT-client =		Distributed IRC client (client)
COMMENT-common =	Distributed IRC client (common files)
COMMENT-core =		Distributed IRC client (core)

VER =				0.14.0
DISTNAME =			quassel-${VER}
PKGNAME-main =		quassel-monolithic-${VER}
PKGNAME-client =		quassel-client-${VER}
PKGNAME-common =	quassel-common-${VER}
PKGNAME-core =		quassel-core-${VER}

CATEGORIES =			net

HOMEPAGE =			https://quassel-irc.org/
MASTER_SITES =		https://quassel-irc.org/pub/
EXTRACT_SUFX =		.tar.bz2
MULTI_PACKAGES =		-main -client -common -core

MAINTAINER =			kikadf <kikadf.01@gmail.com>

# GPLv2/GPLv3
PERMIT_PACKAGE =		Yes

WANTLIB-main += ${COMPILER_LIBCXX} Qt5Core Qt5DBus Qt5Gui Qt5Multimedia
WANTLIB-main += Qt5Network Qt5Sql Qt5WebEngineWidgets Qt5Widgets c
WANTLIB-main += dbusmenu-qt5 execinfo ldap m qca-qt5 z

WANTLIB-client += ${COMPILER_LIBCXX} Qt5Core Qt5DBus Qt5Gui Qt5Multimedia
WANTLIB-client += Qt5Network Qt5WebEngineWidgets Qt5Widgets c dbusmenu-qt5
WANTLIB-client += execinfo m z

WANTLIB-core += ${COMPILER_LIBCXX} Qt5Core Qt5Network Qt5Sql c execinfo
WANTLIB-core += ldap m qca-qt5 z

MODULES =			devel/cmake x11/qt5

BUILD_DEPENDS +=	devel/boost
BUILD_DEPENDS +=	devel/gettext,-tools

RUN_DEPENDS-main +=		devel/desktop-file-utils
RUN_DEPENDS-main +=		${BASE_PKGPATH},-common=${VER}

RUN_DEPENDS-client +=		devel/desktop-file-utils
RUN_DEPENDS-client +=		${BASE_PKGPATH},-common=${VER}

RUN_DEPENDS-common +=	x11/gtk+3,-guic

LIB_DEPENDS-main +=	databases/openldap,-main
LIB_DEPENDS-main +=	security/qca-qt5
LIB_DEPENDS-main +=	x11/dbusmenu-qt
LIB_DEPENDS-main +=	x11/qt5/qtmultimedia
LIB_DEPENDS-main +=	x11/qt5/qtwebengine

LIB_DEPENDS-client +=	x11/dbusmenu-qt
LIB_DEPENDS-client +=	x11/qt5/qtmultimedia
LIB_DEPENDS-client +=	x11/qt5/qtwebengine

LIB_DEPENDS-core +=	databases/openldap,-main
LIB_DEPENDS-core +=	security/qca-qt5

CONFIGURE_ARGS +=	-DENABLE_SHARED=OFF

NO_TEST =			Yes

.include <bsd.port.mk>
