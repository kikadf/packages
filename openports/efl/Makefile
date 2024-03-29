COMMENT =		Enlightenment Foundation Libraries
VER =			1.26.3
DISTNAME =		efl-${VER}
CATEGORIES =		x11
HOMEPAGE =		https://www.enlightenment.org/
MASTER_SITES =		https://download.enlightenment.org/rel/libs/efl/
EXTRACT_SUFX =		.tar.xz

MAINTAINER =		kikadf <kikadf.01@gmail.com>

# LibreSSL fix, remove after 1.27.x release
MASTER_SITES0 =		https://git.enlightenment.org/enlightenment/efl/commit/
PATCHFILES =		libresslv1{bdd5b244e6a6161228f4a98210cefd9ef8a12e85}.patch:0
PATCHFILES +=		libresslv2{0e22417f4579333a967fb5ce65ab339dfc066753}.patch:0
PATCHFILES +=		libresslv3{faf9745538c18f9c93b211597c60a0f99342c091}.patch:0
PATCH_DIST_STRIP =	-p1

# LGPL
PERMIT_PACKAGE =	Yes

COMPILER =		base-clang ports-gcc base-gcc

SHARED_LIBS +=		ecore			0.0 # 1.26.3
SHARED_LIBS +=		ecore_audio		0.0 # 1.26.3
SHARED_LIBS +=		ecore_con		0.0 # 1.26.3
SHARED_LIBS +=		ecore_evas		0.0 # 1.26.3
SHARED_LIBS +=		ecore_file		0.0 # 1.26.3
SHARED_LIBS +=		ecore_imf		0.0 # 1.26.3
SHARED_LIBS +=		ecore_imf_evas		0.0 # 1.26.3
SHARED_LIBS +=		ecore_input		0.0 # 1.26.3
SHARED_LIBS +=		ecore_input_evas	0.0 # 1.26.3
SHARED_LIBS +=		ecore_ipc		0.0 # 1.26.3
SHARED_LIBS +=		ecore_x			0.0 # 1.26.3
SHARED_LIBS +=		ector			0.0 # 1.26.3
SHARED_LIBS +=		edje			0.0 # 1.26.3
SHARED_LIBS +=		eet			0.0 # 1.26.3
SHARED_LIBS +=		efl			0.0 # 1.26.3
SHARED_LIBS +=		efreet			0.0 # 1.26.3
SHARED_LIBS +=		efreet_mime		0.0 # 1.26.3
SHARED_LIBS +=		efreet_trash		0.0 # 1.26.3
SHARED_LIBS +=		eina			0.0 # 1.26.3
SHARED_LIBS +=		eio			0.0 # 1.26.3
SHARED_LIBS +=		eldbus			0.0 # 1.26.3
SHARED_LIBS +=		elementary		0.0 # 1.26.3
SHARED_LIBS +=		embryo			0.0 # 1.26.3
SHARED_LIBS +=		emile			0.0 # 1.26.3
SHARED_LIBS +=		emotion			0.0 # 1.26.3
SHARED_LIBS +=		eo			0.0 # 1.26.3
SHARED_LIBS +=		eo_dbg			0.0 # 1.26.3
SHARED_LIBS +=		eolian			0.0 # 1.26.3
SHARED_LIBS +=		ephysics		0.0 # 1.26.3
SHARED_LIBS +=		ethumb			0.0 # 1.26.3
SHARED_LIBS +=		ethumb_client		0.0 # 1.26.3
SHARED_LIBS +=		evas			0.0 # 1.26.3
SHARED_LIBS +=		exactness_play		0.0 # 1.26.3
SHARED_LIBS +=		exactness_record	0.0 # 1.26.3

WANTLIB += ${COMPILER_LIBCXX} BulletCollision BulletDynamics BulletSoftBody
WANTLIB += EGL GLESv2 LinearMath X11 X11-xcb Xcomposite Xcursor
WANTLIB += Xdamage Xext Xfixes Xi Xinerama Xrandr Xrender Xss
WANTLIB += Xtst c cairo crypto dbus-1 execinfo fontconfig freetype
WANTLIB += fribidi gif glib-2.0 gobject-2.0 gstbase-1.0 gstpbutils-1.0
WANTLIB += gstreamer-1.0 gstvideo-1.0 harfbuzz iconv intl jpeg
WANTLIB += luajit-5.1 m openjp2 png poppler-cpp raw rsvg-2 scim-1.0
WANTLIB += spectre ssl tiff webp webpdemux z

MODULES =		devel/meson lang/python textproc/intltool

BUILD_DEPENDS +=	audio/pulseaudio \
			net/curl

RUN_DEPENDS =		devel/desktop-file-utils \
			misc/shared-mime-info \
			x11/gtk+3,-guic

LIB_DEPENDS +=		converters/libiconv \
			devel/fribidi \
			devel/bullet \
			devel/gettext,-runtime \
			graphics/libwebp \
			graphics/libraw \
			inputmethods/scim \
			lang/luajit \
			multimedia/gstreamer1/plugins-base \
			print/poppler \
			print/libspectre \
			x11/gnome/librsvg

CONFIGURE_ARGS =	-Dsystemd=false \
			-Deeze=false \
			-Dbuild-examples=false \
			-Dinput=false \
			-Dphysics=true \
			-Dbuild-tests=false

CONFIGURE_ENV+=		CPPFLAGS="-I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib -L${X11BASE}/lib "


.include <bsd.port.mk>
