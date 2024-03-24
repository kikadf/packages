$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/webrtc/rtc_base/net_test_helpers.cc.orig	2024-03-19 22:16:26.624191800 +0000
+++ third_party/webrtc/rtc_base/net_test_helpers.cc
@@ -21,6 +21,7 @@
 #endif
 #if defined(WEBRTC_POSIX) && !defined(__native_client__)
 #include <arpa/inet.h>
+#include <sys/socket.h>
 #if defined(WEBRTC_ANDROID)
 #include "rtc_base/ifaddrs_android.h"
 #else
