$NetBSD$

--- net/http/http_auth_gssapi_posix.h.orig	2020-07-15 18:56:00.000000000 +0000
+++ net/http/http_auth_gssapi_posix.h
@@ -25,6 +25,10 @@
 #include <gssapi.h>
 #endif
 
+#ifndef GSS_C_DELEG_POLICY_FLAG
+#define GSS_C_DELEG_POLICY_FLAG 32768
+#endif
+
 namespace net {
 
 class HttpAuthChallengeTokenizer;
