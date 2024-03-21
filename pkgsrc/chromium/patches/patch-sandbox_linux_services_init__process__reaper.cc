$NetBSD$

* Part of patchset to build on NetBSD

--- sandbox/linux/services/init_process_reaper.cc.orig	2024-03-06 00:14:57.527417200 +0000
+++ sandbox/linux/services/init_process_reaper.cc
@@ -2,6 +2,7 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#if 0
 #include "sandbox/linux/services/init_process_reaper.h"
 
 #include <signal.h>
@@ -100,3 +101,4 @@ bool CreateInitProcessReaper(base::OnceC
 }
 
 }  // namespace sandbox.
+#endif
