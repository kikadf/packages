$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/libusb/src/libusb/libusb.h.orig	2024-05-09 21:47:25.873170900 +0000
+++ third_party/libusb/src/libusb/libusb.h
@@ -60,7 +60,7 @@ typedef unsigned __int32  uint32_t;
 #include <sys/types.h>
 #endif
 
-#if defined(__linux) || defined(__APPLE__) || defined(__CYGWIN__)
+#if defined(__linux) || defined(__APPLE__) || defined(__CYGWIN__) || defined(__OpenBSD__) || defined(__FreeBSD__)
 #include <sys/time.h>
 #endif
 
