$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/files/file_path_watcher_kqueue.h.orig	2024-04-10 21:24:37.144041800 +0000
+++ base/files/file_path_watcher_kqueue.h
@@ -5,6 +5,7 @@
 #ifndef BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 #define BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 
+#include <sys/time.h>
 #include <sys/event.h>
 
 #include <memory>
