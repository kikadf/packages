$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/apps/platform_apps/platform_app_launch.h.orig	2024-05-09 21:46:34.521779300 +0000
+++ chrome/browser/apps/platform_apps/platform_app_launch.h
@@ -39,7 +39,7 @@ content::WebContents* OpenExtensionAppli
                                                   const std::string& app_id);
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // Opens the deprecated Chrome Apps flow if |app_id| refers to a Chrome App and
 // Chrome Apps are deprecated on the |profile|. Returns true if that was the
 // case, or false otherwise.
