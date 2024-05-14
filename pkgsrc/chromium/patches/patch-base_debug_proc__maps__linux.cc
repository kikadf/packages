$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/debug/proc_maps_linux.cc.orig	2024-05-09 21:46:25.697196700 +0000
+++ base/debug/proc_maps_linux.cc
@@ -13,7 +13,7 @@
 #include "base/strings/string_split.h"
 #include "build/build_config.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 #include <inttypes.h>
 #endif
 
