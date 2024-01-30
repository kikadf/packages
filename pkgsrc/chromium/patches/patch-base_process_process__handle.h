$NetBSD$

--- base/process/process_handle.h.orig	2020-06-25 09:31:18.000000000 +0000
+++ base/process/process_handle.h
@@ -103,7 +103,7 @@ BASE_EXPORT ProcessId GetCurrentProcId()
 // processes may be reused.
 BASE_EXPORT UniqueProcId GetUniqueIdForProcess();
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 // When a process is started in a different PID namespace from the browser
 // process, this function must be called with the process's PID in the browser's
 // PID namespace in order to initialize its unique ID. Not thread safe.
