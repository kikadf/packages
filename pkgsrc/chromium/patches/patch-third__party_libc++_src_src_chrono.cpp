$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/libc++/src/src/chrono.cpp.orig	2024-03-19 22:15:42.264234300 +0000
+++ third_party/libc++/src/src/chrono.cpp
@@ -31,7 +31,8 @@
 #  include <sys/time.h> // for gettimeofday and timeval
 #endif
 
-#if defined(__APPLE__) || defined(__gnu_hurd__) || (defined(_POSIX_TIMERS) && _POSIX_TIMERS > 0)
+#if defined(__APPLE__) || defined(__gnu_hurd__) || (defined(_POSIX_TIMERS) && _POSIX_TIMERS > 0) || defined(__OpenBSD__) || \
+    defined(__FreeBSD__) || defined(__NetBSD__)
 #  define _LIBCPP_HAS_CLOCK_GETTIME
 #endif
 
