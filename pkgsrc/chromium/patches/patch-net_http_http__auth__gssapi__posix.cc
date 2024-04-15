$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/http/http_auth_gssapi_posix.cc.orig	2024-04-10 21:24:57.433658800 +0000
+++ net/http/http_auth_gssapi_posix.cc
@@ -370,8 +370,9 @@ base::NativeLibrary GSSAPISharedLibrary:
     static const char* const kDefaultLibraryNames[] = {
 #if BUILDFLAG(IS_APPLE)
       "/System/Library/Frameworks/GSS.framework/GSS"
-#elif BUILDFLAG(IS_OPENBSD)
-      "libgssapi.so"  // Heimdal - OpenBSD
+#elif BUILDFLAG(IS_BSD)
+      "libgssapi_krb5.so.2",  // MIT Kerberos - FreeBSD
+      "libgssapi.so"          // Heimdal - OpenBSD, FreeBSD
 #else
       "libgssapi_krb5.so.2",  // MIT Kerberos - FC, Suse10, Debian
       "libgssapi.so.4",       // Heimdal - Suse10, MDK
