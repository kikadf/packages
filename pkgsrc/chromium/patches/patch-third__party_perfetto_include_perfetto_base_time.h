$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/perfetto/include/perfetto/base/time.h.orig	2024-03-06 00:16:01.044931200 +0000
+++ third_party/perfetto/include/perfetto/base/time.h
@@ -193,6 +193,9 @@ inline TimeNanos GetTimeInternalNs(clock
 // Return ns from boot. Conversely to GetWallTimeNs, this clock counts also time
 // during suspend (when supported).
 inline TimeNanos GetBootTimeNs() {
+#if defined(__FreeBSD__) || defined(__NetBSD__)
+  return GetTimeInternalNs(kWallTimeClockSource);
+#else
   // Determine if CLOCK_BOOTTIME is available on the first call.
   static const clockid_t kBootTimeClockSource = [] {
     struct timespec ts = {};
@@ -200,6 +203,7 @@ inline TimeNanos GetBootTimeNs() {
     return res == 0 ? CLOCK_BOOTTIME : kWallTimeClockSource;
   }();
   return GetTimeInternalNs(kBootTimeClockSource);
+#endif
 }
 
 inline TimeNanos GetWallTimeNs() {
@@ -207,7 +211,13 @@ inline TimeNanos GetWallTimeNs() {
 }
 
 inline TimeNanos GetWallTimeRawNs() {
+#if defined(__OpenBSD__) || defined(__NetBSD__)
+  return GetTimeInternalNs(CLOCK_MONOTONIC);
+#elif defined(__FreeBSD__)
+  return GetTimeInternalNs(CLOCK_MONOTONIC_FAST);
+#else
   return GetTimeInternalNs(CLOCK_MONOTONIC_RAW);
+#endif
 }
 
 inline TimeNanos GetThreadCPUTimeNs() {