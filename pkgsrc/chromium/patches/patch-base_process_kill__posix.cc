$NetBSD$

--- base/process/kill_posix.cc.orig	2024-03-06 00:14:37.021637000 +0000
+++ base/process/kill_posix.cc
@@ -157,7 +157,7 @@ void EnsureProcessTerminated(Process pro
       0, new BackgroundReaper(std::move(process), Seconds(2)));
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 void EnsureProcessGetsReaped(Process process) {
   DCHECK(!process.is_current());
 
