$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/filter/zstd_source_stream.cc.orig	2024-05-09 21:47:00.415489400 +0000
+++ net/filter/zstd_source_stream.cc
@@ -7,6 +7,7 @@
 #include <algorithm>
 #include <unordered_map>
 #include <utility>
+#include <unordered_map>
 
 #define ZSTD_STATIC_LINKING_ONLY
 
