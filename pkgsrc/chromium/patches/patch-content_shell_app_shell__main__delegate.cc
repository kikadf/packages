$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/shell/app/shell_main_delegate.cc.orig	2024-05-21 22:43:01.561473000 +0000
+++ content/shell/app/shell_main_delegate.cc
@@ -281,7 +281,7 @@ void ShellMainDelegate::PreSandboxStartu
     // Reporting for sub-processes will be initialized in ZygoteForked.
     if (process_type != switches::kZygoteProcess) {
       crash_reporter::InitializeCrashpad(process_type.empty(), process_type);
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
       crash_reporter::SetFirstChanceExceptionHandler(
           v8::TryHandleWebAssemblyTrapPosix);
 #endif
