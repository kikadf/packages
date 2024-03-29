$NetBSD$

* Part of patchset to build on NetBSD

--- base/allocator/partition_allocator/src/partition_alloc/partition_address_space.cc.orig	2024-03-19 22:14:26.953515500 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/partition_address_space.cc
@@ -421,7 +421,7 @@ void PartitionAddressSpace::UninitThread
 }
 #endif
 
-#if (BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX)) && defined(ARCH_CPU_ARM64)
+#if (BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && defined(ARCH_CPU_ARM64)
 
 PageCharacteristics page_characteristics;
 
