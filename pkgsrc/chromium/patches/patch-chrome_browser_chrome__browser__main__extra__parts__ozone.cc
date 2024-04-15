$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/chrome_browser_main_extra_parts_ozone.cc.orig	2024-04-10 21:24:41.160362000 +0000
+++ chrome/browser/chrome_browser_main_extra_parts_ozone.cc
@@ -31,7 +31,7 @@ void ChromeBrowserMainExtraPartsOzone::P
 }
 
 void ChromeBrowserMainExtraPartsOzone::PostMainMessageLoopRun() {
-#if !BUILDFLAG(IS_CHROMEOS_LACROS) && !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_CHROMEOS_LACROS) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   // Lacros's `PostMainMessageLoopRun` must be called at the very end of
   // `PostMainMessageLoopRun` in
   // `ChromeBrowserMainPartsLacros::PostMainMessageLoopRun`.
