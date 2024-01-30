$NetBSD$

--- base/native_library_unittest.cc.orig	2020-06-25 09:31:18.000000000 +0000
+++ base/native_library_unittest.cc
@@ -121,7 +121,7 @@ TEST(NativeLibraryTest, LoadLibrary) {
 // versions with respect to symbol resolution scope.
 // TSan and MSan error out on RTLD_DEEPBIND, https://crbug.com/705255
 #if !defined(OS_ANDROID) && !defined(THREAD_SANITIZER) && \
-    !defined(MEMORY_SANITIZER)
+    !defined(MEMORY_SANITIZER) && !defined(OS_BSD)
 
 // Verifies that the |prefer_own_symbols| option satisfies its guarantee that
 // a loaded library will always prefer local symbol resolution before
