$NetBSD$

* Part of patchset to build on NetBSD

--- skia/ext/SkMemory_new_handler.cpp.orig	2024-03-19 22:14:52.219769700 +0000
+++ skia/ext/SkMemory_new_handler.cpp
@@ -86,7 +86,7 @@ static void* malloc_nothrow(size_t size)
   // TODO(b.kelemen): we should always use UncheckedMalloc but currently it
   // doesn't work as intended everywhere.
   void* result;
-#if BUILDFLAG(IS_IOS)
+#if BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
   result = malloc(size);
 #else
   // It's the responsibility of the caller to check the return value.
