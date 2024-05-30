$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/include/v8config.h.orig	2024-05-21 22:47:35.241868700 +0000
+++ v8/include/v8config.h
@@ -185,6 +185,9 @@ path. Add it with -I<path> to the comman
   && !defined(V8_TARGET_OS_FUCHSIA) \
   && !defined(V8_TARGET_OS_IOS) \
   && !defined(V8_TARGET_OS_LINUX) \
+  && !defined(V8_TARGET_OS_OPENBSD) \
+  && !defined(V8_TARGET_OS_FREEBSD) \
+  && !defined(V8_TARGET_OS_NETBSD) \
   && !defined(V8_TARGET_OS_MACOS) \
   && !defined(V8_TARGET_OS_WIN) \
   && !defined(V8_TARGET_OS_CHROMEOS)
@@ -197,6 +200,9 @@ path. Add it with -I<path> to the comman
   || defined(V8_TARGET_OS_FUCHSIA) \
   || defined(V8_TARGET_OS_IOS) \
   || defined(V8_TARGET_OS_LINUX) \
+  || defined(V8_TARGET_OS_OPENBSD) \
+  || defined(V8_TARGET_OS_FREEBSD) \
+  || defined(V8_TARGET_OS_NETBSD) \
   || defined(V8_TARGET_OS_MACOS) \
   || defined(V8_TARGET_OS_WIN) \
   || defined(V8_TARGET_OS_CHROMEOS)
@@ -220,6 +226,21 @@ path. Add it with -I<path> to the comman
 # define V8_TARGET_OS_LINUX
 #endif
 
+#ifdef V8_OS_OPENBSD
+# define V8_TARGET_OS_OPENBSD
+# define V8_TARGET_OS_BSD
+#endif
+
+#ifdef V8_OS_FREEBSD
+# define V8_TARGET_OS_OPENBSD
+# define V8_TARGET_OS_BSD
+#endif
+
+#ifdef V8_OS_NETBSD
+# define V8_TARGET_OS_NETBSD
+# define V8_TARGET_OS_BSD
+#endif
+
 #ifdef V8_OS_MACOS
 # define V8_TARGET_OS_MACOS
 #endif
