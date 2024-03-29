$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/leveldatabase/env_chromium.cc.orig	2024-03-19 22:15:15.045806000 +0000
+++ third_party/leveldatabase/env_chromium.cc
@@ -326,7 +326,8 @@ ChromiumWritableFile::ChromiumWritableFi
 
 Status ChromiumWritableFile::SyncParent() {
   TRACE_EVENT0("leveldb", "SyncParent");
-#if defined(OS_POSIX) || defined(OS_FUCHSIA)
+// pledge violation (directory passed as fd)
+#if (defined(OS_POSIX) || defined(OS_FUCHSIA)) && !defined(OS_OPENBSD)
   FilePath path = FilePath::FromUTF8Unsafe(parent_dir_);
   FileErrorOr<base::File> result = filesystem_->OpenFile(
       path, base::File::FLAG_OPEN | base::File::FLAG_READ);
