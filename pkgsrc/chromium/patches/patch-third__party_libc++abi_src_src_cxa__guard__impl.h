$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/libc++abi/src/src/cxa_guard_impl.h.orig	2024-04-15 20:34:39.729206300 +0000
+++ third_party/libc++abi/src/src/cxa_guard_impl.h
@@ -411,7 +411,35 @@ private:
 //                         Futex Implementation
 //===----------------------------------------------------------------------===//
 
-#if defined(SYS_futex)
+#ifdef __OpenBSD__
+#include <sys/futex.h>
+
+void PlatformFutexWait(int* addr, int expect) {
+  constexpr int WAIT = 0;
+  futex((volatile uint32_t *)addr, WAIT, expect, NULL, NULL);
+  __tsan_acquire(addr);
+}
+void PlatformFutexWake(int* addr) {
+  constexpr int WAKE = 1;
+  __tsan_release(addr);
+  futex((volatile uint32_t *)addr, WAKE, INT_MAX, NULL, NULL);
+}
+#elif defined(__NetBSD__)
+#include <sys/futex.h>
+
+void PlatformFutexWait(int* addr, int expect) {
+  constexpr int WAIT = 0;
+  register_t retval;
+  do_futex(addr, WAIT, expect, NULL, NULL, 0, 0, &retval);
+  __tsan_acquire(addr);
+}
+void PlatformFutexWake(int* addr) {
+  constexpr int WAKE = 1;
+  register_t retval;
+  __tsan_release(addr);
+  do_futex(addr, WAKE, INT_MAX, NULL, NULL, 0, 0, &retval);
+}
+#elif defined(SYS_futex)
 void PlatformFutexWait(int* addr, int expect) {
   constexpr int WAIT = 0;
   syscall(SYS_futex, addr, WAIT, expect, 0);
