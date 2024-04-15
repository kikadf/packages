$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/perfetto/include/perfetto/ext/base/event_fd.h.orig	2024-04-10 21:26:07.023204600 +0000
+++ third_party/perfetto/include/perfetto/ext/base/event_fd.h
@@ -55,6 +55,8 @@ class EventFd {
   // On Mac and other non-Linux UNIX platforms a pipe-based fallback is used.
   // The write end of the wakeup pipe.
   ScopedFile write_fd_;
+#else
+  ScopedFile write_fd_;
 #endif
 };
 
