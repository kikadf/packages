$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/abseil-cpp/absl/base/config.h.orig	2024-03-06 00:14:58.099466800 +0000
+++ third_party/abseil-cpp/absl/base/config.h
@@ -450,7 +450,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #ifdef ABSL_HAVE_SCHED_YIELD
 #error ABSL_HAVE_SCHED_YIELD cannot be directly set
 #elif defined(__linux__) || defined(__ros__) || defined(__native_client__) || \
-    defined(__VXWORKS__)
+    defined(__VXWORKS__) || defined(__OpenBSD__) || defined(__FreeBSD__)
 #define ABSL_HAVE_SCHED_YIELD 1
 #endif
 
@@ -465,7 +465,8 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 // platforms.
 #ifdef ABSL_HAVE_SEMAPHORE_H
 #error ABSL_HAVE_SEMAPHORE_H cannot be directly set
-#elif defined(__linux__) || defined(__ros__) || defined(__VXWORKS__)
+#elif defined(__linux__) || defined(__ros__) || defined(__VXWORKS__) || \
+    defined(__OpenBSD__) || defined(__FreeBSD__)
 #define ABSL_HAVE_SEMAPHORE_H 1
 #endif
 