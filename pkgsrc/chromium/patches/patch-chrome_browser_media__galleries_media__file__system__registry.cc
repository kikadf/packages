$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/media_galleries/media_file_system_registry.cc.orig	2024-03-19 22:14:31.577928000 +0000
+++ chrome/browser/media_galleries/media_file_system_registry.cc
@@ -584,7 +584,12 @@ class MediaFileSystemRegistry::MediaFile
 // Constructor in 'private' section because depends on private class definition.
 MediaFileSystemRegistry::MediaFileSystemRegistry()
     : file_system_context_(new MediaFileSystemContextImpl) {
-  StorageMonitor::GetInstance()->AddObserver(this);
+  /*
+   * This conditional is needed for shutdown.  Destructors
+   * try to get the media file system registry.
+   */
+  if (StorageMonitor::GetInstance())
+    StorageMonitor::GetInstance()->AddObserver(this);
 }
 
 MediaFileSystemRegistry::~MediaFileSystemRegistry() {
