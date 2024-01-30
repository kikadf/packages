$NetBSD$

--- third_party/angle/third_party/vulkan-loader/src/loader/loader.c.orig	2020-07-15 19:01:42.000000000 +0000
+++ third_party/angle/third_party/vulkan-loader/src/loader/loader.c
@@ -246,7 +246,7 @@ void *loader_device_heap_realloc(const s
 }
 
 // Environment variables
-#if defined(__linux__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
 
 static inline bool IsHighIntegrity() {
     return geteuid() != getuid() || getegid() != getgid();
