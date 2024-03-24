$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/file_system_access/file_system_access_local_path_watcher.cc.orig	2024-03-19 22:14:42.542906300 +0000
+++ content/browser/file_system_access/file_system_access_local_path_watcher.cc
@@ -63,7 +63,7 @@ void FileSystemAccessLocalPathWatcher::I
   base::FilePathWatcher::WatchOptions watch_options {
     .type = scope().IsRecursive() ? base::FilePathWatcher::Type::kRecursive
                                   : base::FilePathWatcher::Type::kNonRecursive,
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // Note: `report_modified_path` is also present on Android
     // and Fuchsia. Update this switch if support for watching
     // the local file system is added on those platforms.
