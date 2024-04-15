$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/process/kill.h.orig	2024-04-10 21:24:37.220048000 +0000
+++ base/process/kill.h
@@ -121,7 +121,7 @@ BASE_EXPORT TerminationStatus GetTermina
 BASE_EXPORT TerminationStatus GetKnownDeadTerminationStatus(
     ProcessHandle handle, int* exit_code);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // Spawns a thread to wait asynchronously for the child |process| to exit
 // and then reaps it.
 BASE_EXPORT void EnsureProcessGetsReaped(Process process);
