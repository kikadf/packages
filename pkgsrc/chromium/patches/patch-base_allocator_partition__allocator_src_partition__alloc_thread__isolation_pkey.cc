$NetBSD$

* Part of patchset to build on NetBSD

--- base/allocator/partition_allocator/src/partition_alloc/thread_isolation/pkey.cc.orig	2024-03-06 00:14:36.885625100 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/thread_isolation/pkey.cc
@@ -16,7 +16,7 @@
 #include "partition_alloc/partition_alloc_check.h"
 #include "partition_alloc/thread_isolation/thread_isolation.h"
 
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
 #error "This pkey code is currently only supported on Linux and ChromeOS"
 #endif
 