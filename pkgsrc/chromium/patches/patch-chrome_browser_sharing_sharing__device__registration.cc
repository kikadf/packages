$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/sharing/sharing_device_registration.cc.orig	2024-04-15 20:33:48.641454500 +0000
+++ chrome/browser/sharing/sharing_device_registration.cc
@@ -328,7 +328,7 @@ bool SharingDeviceRegistration::IsSmsFet
 
 bool SharingDeviceRegistration::IsRemoteCopySupported() const {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
