$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/fontconfig/src/src/fccompat.c.orig	2024-04-15 20:34:39.513190500 +0000
+++ third_party/fontconfig/src/src/fccompat.c
@@ -184,7 +184,9 @@ FcRandom(void)
 {
     int32_t result;
 
-#if HAVE_RANDOM_R
+#if HAVE_ARC4RANDOM
+    result = arc4random() & 0x7fffffff;
+#elif HAVE_RANDOM_R
     static struct random_data fcrandbuf;
     static char statebuf[256];
     static FcBool initialized = FcFalse;
