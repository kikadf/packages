COMMENT =		CLI and scriptable application to access MEGA

GH_ACCOUNT =		meganz
GH_PROJECT =		MEGAcmd
GH_TAGNAME =		1.7.0_Linux
PKGNAME =		${DISTNAME:S/_Linux//:L}
_SDKV =			4.31.0b

SHARED_LIBS +=		mega                      0.0 # 43000.0

CATEGORIES =		net

MAINTAINER =		kikadf <kikadf.01@gmail.com>

# MEGAcmd: GPLv3, SDK: BSD 2-clause
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} c cares crypto cryptopp curl curses
WANTLIB += ereadline m nghttp2 nghttp3 ngtcp2 ngtcp2_crypto_quictls
WANTLIB += pcre pcrecpp sodium sqlite3 ssl uv z icudata icuuc

SITES.sdk =		https://github.com/meganz/sdk/archive/refs/tags/
DISTFILES.sdk =		meganz-sdk-{}v${_SDKV}${EXTRACT_SUFX}

COMPILER =		base-clang ports-gcc

LIB_DEPENDS =		databases/sqlite3 \
			devel/cryptopp \
			devel/libuv \
			devel/pcre \
			devel/readline \
			net/curl \
			net/libcares \
			security/libsodium \
			textproc/icu4c

TEST_DEPENDS =		devel/gtest

USE_GMAKE=		Yes
CONFIGURE_STYLE =	autoreconf
AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

CONFIGURE_ARGS =	--disable-chat \
			--disable-examples \
			--disable-java \
			--disable-php \
			--disable-python \
			--without-ffmpeg \
			--without-freeimage \
			--without-libmediainfo \
			--without-libraw \
			--without-libzen \
			--without-termcap \
			--enable-gcc-hardening

CPPFLAGS +=		-I${LOCALBASE}/include \
			-I${LOCALBASE}/include/ereadline

CONFIGURE_ENV +=	CPPFLAGS="${CPPFLAGS}" \
			LDFLAGS="-L${LOCALBASE}/lib"

post-extract:
	rm -rf ${WRKSRC}/sdk
	mv ${WRKDIR}/sdk-${_SDKV} ${WRKSRC}/sdk
	mv ${WRKSRC}/src/client/megacmd_completion.sh \
		${WRKSRC}/src/client/megacmd

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mclang}
post-patch:
	sed -i 's,AC_CHECK_LIB(\[stdc++fs\],#AC_CHECK_LIB(\[stdc++fs\],' \
		 ${WRKSRC}/sdk/configure.ac
.endif

pre-configure:
	sed -i 's,/bin/bash,/bin/sh,' ${WRKSRC}/src/client/mega-*

.include <bsd.port.mk>
