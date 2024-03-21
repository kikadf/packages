$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/sharing/sharing_device_registration.cc.orig	2024-03-06 00:14:42.498112400 +0000
+++ chrome/browser/sharing/sharing_device_registration.cc
@@ -328,7 +328,7 @@ bool SharingDeviceRegistration::IsSmsFet
 
 bool SharingDeviceRegistration::IsRemoteCopySupported() const {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
