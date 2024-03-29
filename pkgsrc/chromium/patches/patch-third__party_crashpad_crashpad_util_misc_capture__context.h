$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/crashpad/crashpad/util/misc/capture_context.h.orig	2024-03-19 22:15:14.189729700 +0000
+++ third_party/crashpad/crashpad/util/misc/capture_context.h
@@ -21,7 +21,8 @@
 #include <mach/mach.h>
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
+      BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_NETBSD)
 #include <ucontext.h>
 #endif  // BUILDFLAG(IS_APPLE)
 
@@ -35,7 +36,8 @@ using NativeCPUContext = arm_unified_thr
 #endif
 #elif BUILDFLAG(IS_WIN)
 using NativeCPUContext = CONTEXT;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
+      BUILDFLAG(IS_BSD)
 using NativeCPUContext = ucontext_t;
 #endif  // BUILDFLAG(IS_APPLE)
 
