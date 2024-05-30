$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/http/http_auth_gssapi_posix.h.orig	2024-05-21 22:43:06.241890200 +0000
+++ net/http/http_auth_gssapi_posix.h
@@ -21,6 +21,9 @@
 #if BUILDFLAG(IS_APPLE)
 #include <GSS/gssapi.h>
 #elif BUILDFLAG(IS_FREEBSD)
+#ifndef GSS_C_DELEG_POLICY_FLAG
+#define GSS_C_DELEG_POLICY_FLAG 32768
+#endif
 #include <gssapi/gssapi.h>
 #else
 #include <gssapi.h>
