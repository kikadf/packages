$NetBSD$

--- base/process/process_iterator.h.orig	2020-06-25 09:31:18.000000000 +0000
+++ base/process/process_iterator.h
@@ -24,7 +24,7 @@
 #if defined(OS_WIN)
 #include <windows.h>
 #include <tlhelp32.h>
-#elif defined(OS_MACOSX) || defined(OS_OPENBSD)
+#elif defined(OS_MACOSX) || defined(OS_OPENBSD) || defined(OS_NETBSD)
 #include <sys/sysctl.h>
 #elif defined(OS_FREEBSD)
 #include <sys/user.h>
@@ -111,9 +111,12 @@ class BASE_EXPORT ProcessIterator {
 #if defined(OS_WIN)
   HANDLE snapshot_;
   bool started_iteration_;
-#elif defined(OS_MACOSX) || defined(OS_BSD)
+#elif defined(OS_MACOSX) || defined(OS_FREEBSD)
   std::vector<kinfo_proc> kinfo_procs_;
   size_t index_of_kinfo_proc_;
+#elif defined(OS_NETBSD)
+  std::vector<kinfo_proc2> kinfo_procs_;
+  size_t index_of_kinfo_proc_;
 #elif defined(OS_POSIX) || defined(OS_FUCHSIA)
   DIR* procfs_dir_;
 #endif
