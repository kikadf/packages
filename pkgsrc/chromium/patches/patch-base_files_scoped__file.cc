$NetBSD$

--- base/files/scoped_file.cc.orig	2020-06-25 09:31:18.000000000 +0000
+++ base/files/scoped_file.cc
@@ -31,7 +31,7 @@ void ScopedFDCloseTraits::Free(int fd) {
   int ret = IGNORE_EINTR(close(fd));
 
 #if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_FUCHSIA) || \
-    defined(OS_ANDROID)
+    defined(OS_ANDROID) || defined(OS_BSD)
   // NB: Some file descriptors can return errors from close() e.g. network
   // filesystems such as NFS and Linux input devices. On Linux, macOS, and
   // Fuchsia's POSIX layer, errors from close other than EBADF do not indicate
