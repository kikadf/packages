$NetBSD$

--- chrome/browser/after_startup_task_utils.cc.orig	2024-03-06 00:14:39.649865200 +0000
+++ chrome/browser/after_startup_task_utils.cc
@@ -107,7 +107,7 @@ void SetBrowserStartupIsComplete() {
   TRACE_EVENT0("startup", "SetBrowserStartupIsComplete");
   g_startup_complete_flag.Get().Set();
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Process::Current().CreationTime() is not available on all platforms.
   const base::Time process_creation_time =
       base::Process::Current().CreationTime();
