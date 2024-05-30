$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/media_galleries/media_file_system_registry.cc.orig	2024-05-21 22:42:51.660589700 +0000
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
