$NetBSD$

* Part of patchset to build on NetBSD

--- tools/gn/src/base/files/file_posix.cc.orig	2024-03-19 22:26:10.612289200 +0000
+++ tools/gn/src/base/files/file_posix.cc
@@ -371,7 +371,7 @@ void File::DoInitialize(const FilePath& 
 bool File::Flush() {
   DCHECK(IsValid());
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   return !HANDLE_EINTR(fdatasync(file_.get()));
 #else
   return !HANDLE_EINTR(fsync(file_.get()));
