$NetBSD$

* Part of patchset to build on NetBSD

--- base/allocator/partition_allocator/src/partition_alloc/partition_alloc_constants.h.orig	2024-03-19 22:14:26.973517400 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/partition_alloc_constants.h
@@ -112,7 +112,7 @@ PartitionPageShift() {
 }
 #elif (BUILDFLAG(IS_APPLE) && defined(ARCH_CPU_64_BITS)) || \
     (BUILDFLAG(IS_ANDROID) && defined(ARCH_CPU_ARM64)) ||   \
-    (BUILDFLAG(IS_LINUX) && defined(ARCH_CPU_ARM64))
+    ((BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && defined(ARCH_CPU_ARM64))
 PA_ALWAYS_INLINE PAGE_ALLOCATOR_CONSTANTS_DECLARE_CONSTEXPR size_t
 PartitionPageShift() {
   return PageAllocationGranularityShift() + 2;
@@ -314,7 +314,8 @@ constexpr size_t kNumPools = kMaxPoolHan
 // 8GB for each of the glued pools).
 #if BUILDFLAG(HAS_64_BIT_POINTERS)
 #if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS) || \
-    BUILDFLAG(ENABLE_POINTER_COMPRESSION)
+    BUILDFLAG(ENABLE_POINTER_COMPRESSION) || \
+    BUILDFLAG(IS_BSD)
 constexpr size_t kPoolMaxSize = 8 * kGiB;
 #else
 constexpr size_t kPoolMaxSize = 16 * kGiB;
