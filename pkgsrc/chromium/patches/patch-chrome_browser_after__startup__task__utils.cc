$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/after_startup_task_utils.cc.orig	2024-05-09 21:46:34.329766800 +0000
+++ chrome/browser/after_startup_task_utils.cc
@@ -115,7 +115,7 @@ void SetBrowserStartupIsComplete() {
                        TRACE_EVENT_SCOPE_GLOBAL, "BrowserCount", browser_count);
   GetStartupCompleteFlag().Set();
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Process::Current().CreationTime() is not available on all platforms.
   const base::Time process_creation_time =
       base::Process::Current().CreationTime();
