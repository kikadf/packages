COMMENT =		EFL based terminal emulator
VER =			1.12.1
DISTNAME =		terminology-${VER}
CATEGORIES =		x11
HOMEPAGE =		https://www.enlightenment.org/
MASTER_SITES =		https://download.enlightenment.org/rel/apps/terminology/
EXTRACT_SUFX =		.tar.xz

MAINTAINER =		kikadf <kikadf.01@gmail.com>

# BSD
PERMIT_PACKAGE =	Yes

COMPILER =		base-clang ports-gcc base-gcc

WANTLIB += c ecore ecore_con ecore_evas ecore_file ecore_imf ecore_imf_evas
WANTLIB += ecore_input ecore_ipc edje eet efreet eina elementary
WANTLIB += emotion ethumb_client evas intl m pthread

MODULES =		devel/meson textproc/intltool

RUN_DEPENDS =		x11/gtk+3,-guic \
			devel/desktop-file-utils

LIB_DEPENDS =		x11/efl

CONFIGURE_ENV+=		CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib "

.include <bsd.port.mk>
