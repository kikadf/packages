$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/allocator/partition_allocator/src/partition_alloc/partition_alloc_constants.h.orig	2024-04-30 23:46:40.782060400 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/partition_alloc_constants.h
@@ -313,7 +313,7 @@ constexpr size_t kNumPools = kMaxPoolHan
 // 8GB for each of the glued pools).
 #if BUILDFLAG(HAS_64_BIT_POINTERS)
 #if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS) || \
-    BUILDFLAG(ENABLE_POINTER_COMPRESSION)
+    BUILDFLAG(ENABLE_POINTER_COMPRESSION) || BUILDFLAG(IS_BSD)
 constexpr size_t kPoolMaxSize = 8 * kGiB;
 #else
 constexpr size_t kPoolMaxSize = 16 * kGiB;
