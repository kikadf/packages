$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/sync/sync_service_util.cc.orig	2024-05-21 22:42:53.000709300 +0000
+++ chrome/browser/sync/sync_service_util.cc
@@ -9,7 +9,7 @@
 #include "components/sync/base/features.h"
 
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 #include "components/variations/service/variations_service.h"
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) ||
         // BUILDFLAG(IS_WIN)
@@ -21,7 +21,7 @@ bool IsDesktopEnUSLocaleOnlySyncPollFeat
   }
 
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   std::string country_code;
   auto* variations_service = g_browser_process->variations_service();
   if (variations_service) {
