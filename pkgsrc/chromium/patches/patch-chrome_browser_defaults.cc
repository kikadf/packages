$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/defaults.cc.orig	2024-04-15 20:33:46.825321200 +0000
+++ chrome/browser/defaults.cc
@@ -44,7 +44,7 @@ const bool kShowHelpMenuItemIcon = true;
 const bool kShowHelpMenuItemIcon = false;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const bool kScrollEventChangesTab = true;
 #else
 const bool kScrollEventChangesTab = false;
