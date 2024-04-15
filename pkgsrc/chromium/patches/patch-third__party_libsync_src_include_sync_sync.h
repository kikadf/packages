$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/libsync/src/include/sync/sync.h.orig	2024-04-10 21:25:47.381639200 +0000
+++ third_party/libsync/src/include/sync/sync.h
@@ -22,7 +22,9 @@
 #include <sys/cdefs.h>
 #include <stdint.h>
 
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 #include <linux/types.h>
+#endif
 
 __BEGIN_DECLS
 
