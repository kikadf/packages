$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/perfetto/src/base/event_fd.cc.orig	2024-03-19 22:16:16.571294800 +0000
+++ third_party/perfetto/src/base/event_fd.cc
@@ -22,7 +22,8 @@
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
 #include <Windows.h>
 #include <synchapi.h>
-#elif PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+#elif (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) && \
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
 #include <sys/eventfd.h>
 #include <unistd.h>
@@ -57,7 +58,8 @@ void EventFd::Clear() {
     PERFETTO_DFATAL("EventFd::Clear()");
 }
 
-#elif PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+#elif (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) && \
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
 
 EventFd::EventFd() {
