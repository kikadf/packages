$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/vaapi/vaapi_wrapper.cc.orig	2024-05-21 22:43:05.021781400 +0000
+++ media/gpu/vaapi/vaapi_wrapper.cc
@@ -70,7 +70,7 @@
 using media_gpu_vaapi::kModuleVa_prot;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "base/files/file_util.h"
 #include "base/strings/string_split.h"
 #endif
