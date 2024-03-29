$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h.orig	2024-03-19 22:14:52.663809300 +0000
+++ third_party/abseil-cpp/absl/debugging/internal/elf_mem_image.h
@@ -34,7 +34,8 @@
 #if defined(__ELF__) && !defined(__OpenBSD__) && !defined(__QNX__) && \
     !defined(__native_client__) && !defined(__asmjs__) &&             \
     !defined(__wasm__) && !defined(__HAIKU__) && !defined(__sun) &&   \
-    !defined(__VXWORKS__) && !defined(__hexagon__)
+    !defined(__VXWORKS__) && !defined(__hexagon__) && !defined(__FreeBSD__) && \
+    !defined(__NetBSD__)
 #define ABSL_HAVE_ELF_MEM_IMAGE 1
 #endif
 
