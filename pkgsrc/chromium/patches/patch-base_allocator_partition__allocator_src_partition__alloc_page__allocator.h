$NetBSD$

* Part of patchset to build on NetBSD

--- base/allocator/partition_allocator/src/partition_alloc/page_allocator.h.orig	2024-03-19 22:14:26.953515500 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/page_allocator.h
@@ -256,7 +256,7 @@ bool DecommitAndZeroSystemPages(void* ad
 // recommitted. Do not assume that this will not change over time.
 constexpr PA_COMPONENT_EXPORT(
     PARTITION_ALLOC) bool DecommittedMemoryIsAlwaysZeroed() {
-#if BUILDFLAG(IS_APPLE)
+#if BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_BSD)
   return false;
 #else
   return true;
