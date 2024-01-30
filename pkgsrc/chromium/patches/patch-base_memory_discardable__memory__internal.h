$NetBSD$

--- base/memory/discardable_memory_internal.h.orig	2020-06-25 09:31:18.000000000 +0000
+++ base/memory/discardable_memory_internal.h
@@ -10,7 +10,7 @@
 #include "base/metrics/field_trial_params.h"
 #include "build/build_config.h"
 
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
 
 namespace base {
 
