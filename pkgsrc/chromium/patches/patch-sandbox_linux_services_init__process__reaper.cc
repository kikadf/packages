$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- sandbox/linux/services/init_process_reaper.cc.orig	2024-05-21 22:43:07.161972300 +0000
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
