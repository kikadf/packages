$NetBSD$

* Part of patchset to build on NetBSD

--- components/sync_device_info/local_device_info_util_linux.cc.orig	2024-03-19 22:14:41.206787000 +0000
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
