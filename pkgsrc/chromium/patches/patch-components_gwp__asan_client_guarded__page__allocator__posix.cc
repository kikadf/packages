$NetBSD$

* Part of patchset to build on NetBSD

--- components/gwp_asan/client/guarded_page_allocator_posix.cc.orig	2024-03-19 22:14:38.886580200 +0000
+++ components/gwp_asan/client/guarded_page_allocator_posix.cc
@@ -35,8 +35,9 @@ void GuardedPageAllocator::MarkPageInacc
   // mmap() a PROT_NONE page over the address to release it to the system, if
   // we used mprotect() here the system would count pages in the quarantine
   // against the RSS.
+  // MAP_ANONYMOUS requires the fd to be -1 on !linux
   void* err = mmap(ptr, state_.page_size, PROT_NONE,
-                   MAP_FIXED | MAP_ANONYMOUS | MAP_PRIVATE, 0, 0);
+                   MAP_FIXED | MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
   PCHECK(err == ptr) << "mmap";
 }
 
