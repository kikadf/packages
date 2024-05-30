$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/threading/platform_thread_internal_posix.cc.orig	2024-05-21 22:42:46.844160300 +0000
+++ base/threading/platform_thread_internal_posix.cc
@@ -42,7 +42,7 @@ ThreadPriorityForTest NiceValueToThreadP
 }
 
 int GetCurrentThreadNiceValue() {
-#if BUILDFLAG(IS_NACL)
+#if BUILDFLAG(IS_NACL) || BUILDFLAG(IS_BSD)
   NOTIMPLEMENTED();
   return 0;
 #else
