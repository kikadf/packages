$NetBSD$

* Part of patchset to build on NetBSD

--- media/gpu/vaapi/vaapi_wrapper.cc.orig	2024-03-06 00:14:55.031200400 +0000
+++ media/gpu/vaapi/vaapi_wrapper.cc
@@ -66,7 +66,7 @@
 using media_gpu_vaapi::kModuleVa_prot;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "base/files/file_util.h"
 #include "base/strings/string_split.h"
 #endif
