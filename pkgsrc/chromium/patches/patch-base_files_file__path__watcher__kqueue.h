$NetBSD$

* Part of patchset to build on NetBSD

--- base/files/file_path_watcher_kqueue.h.orig	2024-03-06 00:14:36.949630700 +0000
+++ base/files/file_path_watcher_kqueue.h
@@ -5,6 +5,7 @@
 #ifndef BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 #define BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 
+#include <sys/time.h>
 #include <sys/event.h>
 
 #include <memory>
