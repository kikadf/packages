$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/child_thread_type_switcher_linux.cc.orig	2024-05-21 22:43:00.825407300 +0000
+++ content/browser/child_thread_type_switcher_linux.cc
@@ -20,6 +20,9 @@ void SetThreadTypeOnLauncherThread(base:
                                    base::ThreadType thread_type) {
   DCHECK(CurrentlyOnProcessLauncherTaskRunner());
 
+#if BUILDFLAG(IS_BSD)
+  NOTIMPLEMENTED();
+#else
   bool ns_pid_supported = false;
   pid_t peer_tid = base::FindThreadID(peer_pid, ns_tid, &ns_pid_supported);
   if (peer_tid == -1) {
@@ -38,6 +41,7 @@ void SetThreadTypeOnLauncherThread(base:
 
   base::PlatformThread::SetThreadType(peer_pid, peer_tid, thread_type,
                                       base::IsViaIPC(true));
+#endif
 }
 
 }  // namespace
