$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/trace_event/memory_dump_manager.cc.orig	2024-05-21 22:42:46.864162000 +0000
+++ base/trace_event/memory_dump_manager.cc
@@ -82,7 +82,7 @@ const char* const MemoryDumpManager::kSy
 #if defined(MALLOC_MEMORY_TRACING_SUPPORTED)
     MallocDumpProvider::kAllocatedObjects;
 #else
-    nullptr;
+    "";
 #endif
 
 // static
