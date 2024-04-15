$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/sync_device_info/local_device_info_util_linux.cc.orig	2024-04-10 21:24:50.653118400 +0000
+++ components/sync_device_info/local_device_info_util_linux.cc
@@ -9,6 +9,11 @@
 
 #include "base/linux_util.h"
 
+#if defined(__FreeBSD__) || defined(__NetBSD__)
+#include <sys/param.h>
+#define HOST_NAME_MAX MAXHOSTNAMELEN
+#endif
+
 namespace syncer {
 
 std::string GetPersonalizableDeviceNameInternal() {
