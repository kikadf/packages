$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/memory/discardable_memory_internal.h.orig	2024-05-21 22:42:46.676145300 +0000
+++ base/memory/discardable_memory_internal.h
@@ -10,7 +10,7 @@
 #include "base/metrics/field_trial_params.h"
 #include "build/build_config.h"
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 
 namespace base {
 
