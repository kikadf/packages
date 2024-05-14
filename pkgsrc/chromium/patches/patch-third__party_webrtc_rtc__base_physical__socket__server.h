$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/webrtc/rtc_base/physical_socket_server.h.orig	2024-05-09 21:48:20.844801200 +0000
+++ third_party/webrtc/rtc_base/physical_socket_server.h
@@ -18,7 +18,7 @@
 #include "rtc_base/third_party/sigslot/sigslot.h"
 
 #if defined(WEBRTC_POSIX)
-#if defined(WEBRTC_LINUX)
+#if defined(WEBRTC_LINUX) && !defined(WEBRTC_BSD)
 // On Linux, use epoll.
 #include <sys/epoll.h>
 
