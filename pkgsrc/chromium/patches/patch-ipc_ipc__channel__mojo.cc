$NetBSD$

* Part of patchset to build on NetBSD

--- ipc/ipc_channel_mojo.cc.orig	2024-03-19 22:14:48.903473900 +0000
+++ ipc/ipc_channel_mojo.cc
@@ -105,7 +105,7 @@ class ThreadSafeChannelProxy : public mo
 };
 
 base::ProcessId GetSelfPID() {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (int global_pid = Channel::GetGlobalPid())
     return global_pid;
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
