$NetBSD$

* Part of patchset to build on NetBSD

--- net/filter/zstd_source_stream.cc.orig	2024-03-06 00:14:56.623338700 +0000
+++ net/filter/zstd_source_stream.cc
@@ -7,6 +7,7 @@
 #include <algorithm>
 #include <unordered_map>
 #include <utility>
+#include <unordered_map>
 
 #define ZSTD_STATIC_LINKING_ONLY
 
