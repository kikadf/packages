$NetBSD$

* Part of patchset to build on NetBSD

--- base/test/test_file_util_linux.cc.orig	2024-03-19 22:14:27.257542600 +0000
+++ base/test/test_file_util_linux.cc
@@ -54,8 +54,10 @@ bool EvictFileFromSystemCache(const File
     return false;
   if (fdatasync(fd.get()) != 0)
     return false;
+#if !BUILDFLAG(IS_BSD)
   if (posix_fadvise(fd.get(), 0, 0, POSIX_FADV_DONTNEED) != 0)
     return false;
+#endif
   return true;
 }
 
