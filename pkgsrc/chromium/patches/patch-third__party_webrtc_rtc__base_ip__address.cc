$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/webrtc/rtc_base/ip_address.cc.orig	2024-03-19 22:16:26.620191300 +0000
+++ third_party/webrtc/rtc_base/ip_address.cc
@@ -13,7 +13,8 @@
 #include <sys/socket.h>
 
 #include "absl/strings/string_view.h"
-#ifdef OPENBSD
+#if defined(WEBRTC_BSD)
+#include <sys/types.h>
 #include <netinet/in_systm.h>
 #endif
 #ifndef __native_client__
