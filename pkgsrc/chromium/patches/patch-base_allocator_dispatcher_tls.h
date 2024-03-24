$NetBSD$

* Part of patchset to build on NetBSD

--- base/allocator/dispatcher/tls.h.orig	2024-03-19 22:14:26.945515000 +0000
+++ base/allocator/dispatcher/tls.h
@@ -74,7 +74,7 @@ struct BASE_EXPORT MMapAllocator {
       partition_alloc::PartitionPageSize();
 #elif BUILDFLAG(IS_APPLE)
   constexpr static size_t AllocationChunkSize = 16384;
-#elif BUILDFLAG(IS_LINUX) && defined(ARCH_CPU_ARM64)
+#elif (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && defined(ARCH_CPU_ARM64)
   constexpr static size_t AllocationChunkSize = 16384;
 #else
   constexpr static size_t AllocationChunkSize = 4096;
