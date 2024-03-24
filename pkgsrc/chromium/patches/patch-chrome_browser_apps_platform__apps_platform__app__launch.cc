$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/apps/platform_apps/platform_app_launch.cc.orig	2024-03-19 22:14:29.757765800 +0000
+++ chrome/browser/apps/platform_apps/platform_app_launch.cc
@@ -20,7 +20,7 @@
 #include "extensions/common/extension.h"
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/ui/browser.h"
 #include "chrome/browser/ui/browser_navigator.h"
 #include "chrome/browser/ui/browser_window.h"
@@ -138,7 +138,7 @@ bool OpenExtensionApplicationTab(Profile
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 bool OpenDeprecatedApplicationPrompt(Profile* profile,
                                      const std::string& app_id) {
   if (!extensions::IsExtensionUnsupportedDeprecatedApp(profile, app_id))
