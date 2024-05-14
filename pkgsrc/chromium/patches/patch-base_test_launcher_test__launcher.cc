$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/test/launcher/test_launcher.cc.orig	2024-05-09 21:46:25.885209000 +0000
+++ base/test/launcher/test_launcher.cc
@@ -69,6 +69,7 @@
 #include "testing/gtest/include/gtest/gtest.h"
 
 #if BUILDFLAG(IS_POSIX)
+#include <signal.h>
 #include <fcntl.h>
 
 #include "base/files/file_descriptor_watcher_posix.h"
@@ -1797,6 +1798,10 @@ bool TestLauncher::Init(CommandLine* com
   results_tracker_.AddGlobalTag("OS_OPENBSD");
 #endif
 
+#if BUILDFLAG(IS_NETBSD)
+  results_tracker_.AddGlobalTag("OS_NETBSD");
+#endif
+
 #if BUILDFLAG(IS_POSIX)
   results_tracker_.AddGlobalTag("OS_POSIX");
 #endif
