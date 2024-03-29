$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/services/file_util/public/mojom/safe_document_analyzer_mojom_traits.h.orig	2024-03-19 22:14:34.998233300 +0000
+++ chrome/services/file_util/public/mojom/safe_document_analyzer_mojom_traits.h
@@ -16,7 +16,7 @@
 #include "mojo/public/cpp/bindings/struct_traits.h"
 
 #if !BUILDFLAG(FULL_SAFE_BROWSING) || \
-    (!BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_WIN))
+    (!BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_BSD))
 #error FULL_SAFE_BROWSING should be set and either IS_LINUX or IS_WIN set.
 #endif
 
