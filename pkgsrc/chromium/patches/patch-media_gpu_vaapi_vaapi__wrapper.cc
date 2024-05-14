$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/vaapi/vaapi_wrapper.cc.orig	2024-05-09 21:46:58.523364500 +0000
+++ media/gpu/vaapi/vaapi_wrapper.cc
@@ -67,7 +67,7 @@
 using media_gpu_vaapi::kModuleVa_prot;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "base/files/file_util.h"
 #include "base/strings/string_split.h"
 #endif
