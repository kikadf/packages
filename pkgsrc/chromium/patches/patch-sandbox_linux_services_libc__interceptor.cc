$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- sandbox/linux/services/libc_interceptor.cc.orig	2024-03-26 21:37:08.014699200 +0000
+++ sandbox/linux/services/libc_interceptor.cc
@@ -12,7 +12,9 @@
 #include <stddef.h>
 #include <stdint.h>
 #include <string.h>
+#if !BUILDFLAG(IS_BSD)
 #include <sys/prctl.h>
+#endif
 #include <sys/socket.h>
 #include <sys/types.h>
 #include <time.h>
@@ -167,7 +169,7 @@ bool ReadTimeStruct(base::PickleIterator
   } else {
     base::AutoLock lock(g_timezones_lock.Get());
     auto ret_pair = g_timezones.Get().insert(timezone);
-    output->tm_zone = ret_pair.first->c_str();
+    output->tm_zone = (char *)ret_pair.first->c_str();
   }
 
   return true;
