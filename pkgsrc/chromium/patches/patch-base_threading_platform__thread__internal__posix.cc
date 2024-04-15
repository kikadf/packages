$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/threading/platform_thread_internal_posix.cc.orig	2024-04-10 21:24:37.344057800 +0000
+++ base/threading/platform_thread_internal_posix.cc
@@ -42,7 +42,7 @@ ThreadPriorityForTest NiceValueToThreadP
 }
 
 int GetCurrentThreadNiceValue() {
-#if BUILDFLAG(IS_NACL)
+#if BUILDFLAG(IS_NACL) || BUILDFLAG(IS_BSD)
   NOTIMPLEMENTED();
   return 0;
 #else
