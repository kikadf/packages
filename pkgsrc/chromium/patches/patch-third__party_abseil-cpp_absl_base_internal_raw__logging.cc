$NetBSD$

--- third_party/abseil-cpp/absl/base/internal/raw_logging.cc.orig	2024-03-06 00:14:58.103467000 +0000
+++ third_party/abseil-cpp/absl/base/internal/raw_logging.cc
@@ -44,7 +44,7 @@
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(__hexagon__) || defined(__Fuchsia__) ||                     \
     defined(__native_client__) || defined(__OpenBSD__) ||               \
-    defined(__EMSCRIPTEN__) || defined(__ASYLO__)
+    defined(__EMSCRIPTEN__) || defined(__ASYLO__) || defined(__NetBSD__)
 
 #include <unistd.h>
 
