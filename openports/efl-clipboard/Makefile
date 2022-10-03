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

BUILD_DEPENDS =		devel/gettext,-tools
BUILD_DEPENDS +=	x11/enlightenment-wm

RUN_DEPENDS =		x11/enlightenment-wm

LIB_DEPENDS =		x11/efl

.include <bsd.port.mk>
