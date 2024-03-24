$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/vulkan_memory_allocator/include/vk_mem_alloc.h.orig	2024-03-19 22:15:46.436606400 +0000
+++ third_party/vulkan_memory_allocator/include/vk_mem_alloc.h
@@ -2760,7 +2760,7 @@ void* vma_aligned_alloc(size_t alignment
 
     return memalign(alignment, size);
 }
-#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC))
+#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)) || defined(__OpenBSD__) || defined(__FreeBSD__)
 #include <cstdlib>
 
 #if defined(__APPLE__)
