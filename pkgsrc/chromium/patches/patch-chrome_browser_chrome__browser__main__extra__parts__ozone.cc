$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/chrome_browser_main_extra_parts_ozone.cc.orig	2024-03-19 22:14:30.837862000 +0000
+++ chrome/browser/chrome_browser_main_extra_parts_ozone.cc
@@ -31,7 +31,7 @@ void ChromeBrowserMainExtraPartsOzone::P
 }
 
 void ChromeBrowserMainExtraPartsOzone::PostMainMessageLoopRun() {
-#if !BUILDFLAG(IS_CHROMEOS_LACROS) && !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_CHROMEOS_LACROS) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   // Lacros's `PostMainMessageLoopRun` must be called at the very end of
   // `PostMainMessageLoopRun` in
   // `ChromeBrowserMainPartsLacros::PostMainMessageLoopRun`.
