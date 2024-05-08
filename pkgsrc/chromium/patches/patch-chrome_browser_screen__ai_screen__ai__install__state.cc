$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/screen_ai/screen_ai_install_state.cc.orig	2024-04-30 23:46:47.158749000 +0000
+++ chrome/browser/screen_ai/screen_ai_install_state.cc
@@ -23,7 +23,7 @@
 #include "services/screen_ai/public/cpp/utilities.h"
 #include "ui/accessibility/accessibility_features.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "base/cpu.h"
 #include "base/files/file_util.h"
 #endif
@@ -35,7 +35,7 @@ const char kMinExpectedVersion[] = "123.
 bool IsDeviceCompatible() {
   // Check if the CPU has the required instruction set to run the Screen AI
   // library.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (!base::CPU().has_sse41()) {
     return false;
   }
