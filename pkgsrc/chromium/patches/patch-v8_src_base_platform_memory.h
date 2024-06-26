$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- v8/src/base/platform/memory.h.orig	2024-06-13 23:30:45.721631500 +0000
+++ v8/src/base/platform/memory.h
@@ -19,11 +19,11 @@
 
 #if V8_OS_DARWIN
 #include <malloc/malloc.h>
-#else  // !V8_OS_DARWIN
+#elif !V8_OS_BSD
 #include <malloc.h>
 #endif  // !V8_OS_DARWIN
 
-#if (V8_OS_POSIX && !V8_OS_AIX && !V8_OS_SOLARIS) || V8_OS_WIN
+#if (V8_OS_POSIX && !V8_OS_AIX && !V8_OS_SOLARIS && !V8_OS_BSD) || V8_OS_WIN
 #define V8_HAS_MALLOC_USABLE_SIZE 1
 #endif  // (V8_OS_POSIX && !V8_OS_AIX && !V8_OS_SOLARIS) || V8_OS_WIN
 
