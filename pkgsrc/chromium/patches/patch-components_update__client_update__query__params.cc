$NetBSD$

--- components/update_client/update_query_params.cc.orig	2024-03-06 00:14:50.110773300 +0000
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
