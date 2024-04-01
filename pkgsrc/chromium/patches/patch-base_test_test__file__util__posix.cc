$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/test/test_file_util_posix.cc.orig	2024-03-26 21:36:30.355270600 +0000
+++ base/test/test_file_util_posix.cc
@@ -89,7 +89,7 @@ void SyncPageCacheToDisk() {
 }
 
 #if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_APPLE) && \
-    !BUILDFLAG(IS_ANDROID)
+    !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_BSD)
 bool EvictFileFromSystemCache(const FilePath& file) {
   // There doesn't seem to be a POSIX way to cool the disk cache.
   NOTIMPLEMENTED();
