$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/skia/src/base/SkContainers.cpp.orig	2024-04-10 21:25:42.861279000 +0000
+++ third_party/skia/src/base/SkContainers.cpp
@@ -14,7 +14,8 @@
 
 #if defined(SK_BUILD_FOR_MAC) || defined(SK_BUILD_FOR_IOS)
 #include <malloc/malloc.h>
-#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX)
+#elif defined(SK_BUILD_FOR_ANDROID) || defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__) && \
+    !defined(__NetBSD__)
 #include <malloc.h>
 #elif defined(SK_BUILD_FOR_WIN)
 #include <malloc.h>
@@ -38,7 +39,7 @@ SkSpan<std::byte> complete_size(void* pt
     #elif defined(SK_BUILD_FOR_ANDROID) && __ANDROID_API__ >= 17
         completeSize = malloc_usable_size(ptr);
         SkASSERT(completeSize >= size);
-    #elif defined(SK_BUILD_FOR_UNIX)
+    #elif defined(SK_BUILD_FOR_UNIX) && !defined(__OpenBSD__) && !defined(__NetBSD__)
         completeSize = malloc_usable_size(ptr);
         SkASSERT(completeSize >= size);
     #elif defined(SK_BUILD_FOR_WIN)
