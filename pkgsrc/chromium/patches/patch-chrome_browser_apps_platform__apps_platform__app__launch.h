$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/apps/platform_apps/platform_app_launch.h.orig	2024-04-10 21:24:40.292292800 +0000
+++ chrome/browser/apps/platform_apps/platform_app_launch.h
@@ -37,7 +37,7 @@ bool OpenExtensionApplicationWindow(Prof
 bool OpenExtensionApplicationTab(Profile* profile, const std::string& app_id);
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // Opens the deprecated Chrome Apps flow if |app_id| refers to a Chrome App and
 // Chrome Apps are deprecated on the |profile|. Returns true if that was the
 // case, or false otherwise.
