$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/chrome_browser_main_linux.h.orig	2024-05-09 21:46:35.445840400 +0000
+++ chrome/browser/chrome_browser_main_linux.h
@@ -30,7 +30,7 @@ class ChromeBrowserMainPartsLinux : publ
 
   // ChromeBrowserMainPartsPosix overrides.
   void PostCreateMainMessageLoop() override;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void PostMainMessageLoopRun() override;
 #endif
   void PreProfileInit() override;
