$NetBSD$

* Part of patchset to build on NetBSD

--- base/trace_event/memory_dump_manager.cc.orig	2024-03-19 22:14:27.297546100 +0000
+++ base/trace_event/memory_dump_manager.cc
@@ -82,7 +82,7 @@ const char* const MemoryDumpManager::kSy
 #if defined(MALLOC_MEMORY_TRACING_SUPPORTED)
     MallocDumpProvider::kAllocatedObjects;
 #else
-    nullptr;
+    "";
 #endif
 
 // static
