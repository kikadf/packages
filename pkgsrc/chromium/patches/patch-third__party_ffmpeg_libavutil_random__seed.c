$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/ffmpeg/libavutil/random_seed.c.orig	2024-03-19 22:15:58.429676300 +0000
+++ third_party/ffmpeg/libavutil/random_seed.c
@@ -35,6 +35,11 @@
 #elif CONFIG_OPENSSL
 #include <openssl/rand.h>
 #endif
+#if HAVE_ARC4RANDOM_BUF
+#undef __BSD_VISIBLE
+#define __BSD_VISIBLE 1
+#include <stdlib.h>
+#endif
 #include <fcntl.h>
 #include <math.h>
 #include <time.h>
