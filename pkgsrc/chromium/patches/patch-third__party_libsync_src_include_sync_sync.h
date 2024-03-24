$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/libsync/src/include/sync/sync.h.orig	2024-03-19 22:15:44.932472200 +0000
+++ third_party/libsync/src/include/sync/sync.h
@@ -22,7 +22,9 @@
 #include <sys/cdefs.h>
 #include <stdint.h>
 
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 #include <linux/types.h>
+#endif
 
 __BEGIN_DECLS
 
