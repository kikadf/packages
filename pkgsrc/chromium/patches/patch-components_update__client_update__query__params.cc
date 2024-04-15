$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/update_client/update_query_params.cc.orig	2024-04-10 21:24:51.345173600 +0000
+++ components/update_client/update_query_params.cc
@@ -42,6 +42,10 @@ const char kOs[] =
     "fuchsia";
 #elif BUILDFLAG(IS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
+#elif defined(OS_NETBSD)
+    "netbsd";
 #else
 #error "unknown os"
 #endif
