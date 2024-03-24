$NetBSD$

* Part of patchset to build on NetBSD

--- base/memory/discardable_memory_internal.h.orig	2024-03-19 22:14:27.097528500 +0000
+++ base/memory/discardable_memory_internal.h
@@ -10,7 +10,7 @@
 #include "base/metrics/field_trial_params.h"
 #include "build/build_config.h"
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 
 namespace base {
 
