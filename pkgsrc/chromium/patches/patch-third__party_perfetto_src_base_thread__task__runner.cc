$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/perfetto/src/base/thread_task_runner.cc.orig	2024-03-19 22:16:16.579295600 +0000
+++ third_party/perfetto/src/base/thread_task_runner.cc
@@ -27,8 +27,9 @@
 #include "perfetto/ext/base/thread_utils.h"
 #include "perfetto/ext/base/unix_task_runner.h"
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
-    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
+#if (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)) && \
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
 #include <sys/prctl.h>
 #endif
 
