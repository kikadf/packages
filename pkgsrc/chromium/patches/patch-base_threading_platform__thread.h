$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/threading/platform_thread.h.orig	2024-05-09 21:46:25.917211000 +0000
+++ base/threading/platform_thread.h
@@ -46,6 +46,8 @@ typedef DWORD PlatformThreadId;
 typedef zx_koid_t PlatformThreadId;
 #elif BUILDFLAG(IS_APPLE)
 typedef mach_port_t PlatformThreadId;
+#elif BUILDFLAG(IS_BSD)
+typedef uint64_t PlatformThreadId;
 #elif BUILDFLAG(IS_POSIX)
 typedef pid_t PlatformThreadId;
 #endif
