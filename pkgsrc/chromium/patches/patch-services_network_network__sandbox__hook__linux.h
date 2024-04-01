$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- services/network/network_sandbox_hook_linux.h.orig	2024-03-26 21:37:08.666758500 +0000
+++ services/network/network_sandbox_hook_linux.h
@@ -6,7 +6,11 @@
 #define SERVICES_NETWORK_NETWORK_SANDBOX_HOOK_LINUX_H_
 
 #include "base/component_export.h"
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#include "sandbox/policy/sandbox.h"
+#else
 #include "sandbox/policy/linux/sandbox_linux.h"
+#endif
 
 namespace network {
 
