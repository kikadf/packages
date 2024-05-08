$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/vulkan-deps/vulkan-validation-layers/src/layers/external/vma/vk_mem_alloc.h.orig	2024-04-30 23:48:19.324701000 +0000
+++ third_party/vulkan-deps/vulkan-validation-layers/src/layers/external/vma/vk_mem_alloc.h
@@ -2740,7 +2740,7 @@ static void* vma_aligned_alloc(size_t al
 
     return memalign(alignment, size);
 }
-#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC))
+#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)) || defined(__OpenBSD__) || defined(__FreeBSD__)
 #include <cstdlib>
 
 #if defined(__APPLE__)
