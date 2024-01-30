$NetBSD$

--- base/process/process_metrics_posix.cc.orig	2020-06-25 09:31:18.000000000 +0000
+++ base/process/process_metrics_posix.cc
@@ -20,6 +20,7 @@
 
 #if defined(OS_MACOSX)
 #include <malloc/malloc.h>
+#elif defined(OS_FREEBSD) || defined(OS_NETBSD)
 #else
 #include <malloc.h>
 #endif
@@ -126,7 +127,7 @@ size_t ProcessMetrics::GetMallocUsage() 
 #else
   return minfo.hblkhd + minfo.arena;
 #endif
-#elif defined(OS_FUCHSIA)
+#elif defined(OS_FUCHSIA) || defined(OS_BSD)
   // TODO(fuchsia): Not currently exposed. https://crbug.com/735087.
   return 0;
 #endif
