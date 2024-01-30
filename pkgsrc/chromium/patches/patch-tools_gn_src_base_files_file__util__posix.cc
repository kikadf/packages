$NetBSD$

https://gn-review.googlesource.com/c/gn/+/9700

--- tools/gn/src/base/files/file_util_posix.cc.orig	2020-07-15 19:07:32.000000000 +0000
+++ tools/gn/src/base/files/file_util_posix.cc
@@ -210,7 +210,7 @@ bool ReplaceFile(const FilePath& from_pa
 }
 
 bool CreateLocalNonBlockingPipe(int fds[2]) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   return pipe2(fds, O_CLOEXEC | O_NONBLOCK) == 0;
 #else
   int raw_fds[2];
