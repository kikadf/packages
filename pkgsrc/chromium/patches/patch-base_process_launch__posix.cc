$NetBSD$

* Part of patchset to build on NetBSD

--- base/process/launch_posix.cc.orig	2024-03-06 00:14:37.021637000 +0000
+++ base/process/launch_posix.cc
@@ -61,6 +61,9 @@
 #error "macOS should use launch_mac.cc"
 #endif
 
+#if defined(OS_FREEBSD)
+#pragma weak environ
+#endif
 extern char** environ;
 
 namespace base {
@@ -205,6 +208,8 @@ static const char kFDDir[] = "/dev/fd";
 static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_OPENBSD)
 static const char kFDDir[] = "/dev/fd";
+#elif BUILDFLAG(IS_NETBSD)
+static const char kFDDir[] = "/dev/fd";
 #elif BUILDFLAG(IS_ANDROID)
 static const char kFDDir[] = "/proc/self/fd";
 #endif
