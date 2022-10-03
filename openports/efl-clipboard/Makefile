COMMENT =			Clipboard module for Enlightenment window manager
GH_ACCOUNT =		Obsidian-StudiosInc
GH_PROJECT =			clipboard
GH_TAGNAME =		v0.1.0_alpha6
PKGNAME=			efl-${DISTNAME:S/_//}
CATEGORIES =			x11

MAINTAINER =			kikadf <kikadf.01@gmail.com>

# GPLv3
PERMIT_PACKAGE =		Yes

COMPILER =			base-clang ports-gcc base-gcc

WANTLIB =			ecore ecore_evas ecore_file ecore_input edje eet eina
WANTLIB += 			elementary evas

MODULES =			devel/meson
#MODULES +=			textproc/intltool

BUILD_DEPENDS =		devel/gettext,-tools
BUILD_DEPENDS +=	x11/enlightenment-wm

RUN_DEPENDS =		x11/enlightenment-wm
#RUN_DEPENDS =		devel/desktop-file-utils
#RUN_DEPENDS +=		x11/gtk+3,-guic

LIB_DEPENDS =		x11/efl

#CONFIGURE_ARGS =

#CONFIGURE_ENV+=	CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include"
#CONFIGURE_ENV+=	LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib"

.include <bsd.port.mk>
