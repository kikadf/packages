COMMENT =		CLI and scriptable application to access MEGA
GH_ACCOUNT =		meganz
GH_PROJECT =		MEGAcmd
GH_TAGNAME =		1.6.3_Linux
PKGNAME =		${DISTNAME:S/_Linux//:L}
CATEGORIES =		net
DISTFILES =		${DISTNAME}${EXTRACT_SUFX}

MAINTAINER =		kikadf <kikadf.01@gmail.com>

MASTER_SITES0 =		https://github.com/meganz/sdk/archive/refs/tags/
_SDKV =			4.17.1d
DISTFILES +=		v${_SDKV}${EXTRACT_SUFX}:0

# MEGAcmd: GPLv3, SDK: BSD 2-clause
PERMIT_PACKAGE =	Yes

COMPILER =		base-clang ports-gcc

WANTLIB += ${COMPILER_LIBCXX} c cares crypto cryptopp curl curses
WANTLIB += ereadline m nghttp2 nghttp3 ngtcp2 ngtcp2_crypto_openssl
WANTLIB += pcre pcrecpp sodium sqlite3 ssl uv z

LIB_DEPENDS =		databases/sqlite3 \
			devel/cryptopp \
			devel/libuv \
			devel/pcre \
			devel/readline \
			net/curl \
			net/libcares \
			security/libsodium

CONFIGURE_STYLE =	autoreconf
AUTORECONF =		${WRKSRC}/autogen.sh
AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

CONFIGURE_ARGS =	--disable-examples --disable-java --disable-php \
			--disable-python --disable-chat --without-freeimage \
			--without-termcap --without-ffmpeg --without-libraw \
			--without-libzen --without-libmediainfo \
			--enable-gcc-hardening --enable-static

CONFIGURE_ENV +=	CPPFLAGS="-I${LOCALBASE}/include \
				  -I${LOCALBASE}/include/ereadline" \
			LDFLAGS="-L${LOCALBASE}/lib"

FAKE_FLAGS= 		sysconfdir=${PREFIX}/share/examples/megacmd/

post-extract:
	rm -rf ${WRKSRC}/sdk
	mv ${WRKDIR}/sdk-${_SDKV} ${WRKSRC}/sdk

pre-configure:
	sed -i 's,/bin/bash,/bin/sh,' ${WRKSRC}/src/client/mega-*

.include <bsd.port.mk>
