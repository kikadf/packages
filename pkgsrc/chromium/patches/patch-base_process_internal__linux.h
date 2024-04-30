$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/process/internal_linux.h.orig	2024-04-15 20:33:42.729020400 +0000
+++ base/process/internal_linux.h
@@ -138,6 +138,9 @@ TimeDelta ClockTicksToTimeDelta(int64_t 
 // arguments to the lambda.
 template <typename Lambda>
 void ForEachProcessTask(base::ProcessHandle process, Lambda&& lambda) {
+#if BUILDFLAG(IS_BSD)
+  return;
+#else
   // Iterate through the different threads tracked in /proc/<pid>/task.
   FilePath fd_path = GetProcPidDir(process).Append("task");
 
@@ -157,6 +160,7 @@ void ForEachProcessTask(base::ProcessHan
     FilePath task_path = fd_path.Append(tid_str);
     lambda(tid, task_path);
   }
+#endif
 }
 
 }  // namespace internal
