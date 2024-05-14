$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- tools/memory/partition_allocator/inspect_utils.h.orig	2024-05-09 21:47:29.945439800 +0000
+++ tools/memory/partition_allocator/inspect_utils.h
@@ -61,7 +61,7 @@ class RemoteProcessMemoryReader {
   const pid_t pid_;
   bool is_valid_;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   base::ScopedFD mem_fd_;
 #elif BUILDFLAG(IS_MAC)
   task_t task_;
