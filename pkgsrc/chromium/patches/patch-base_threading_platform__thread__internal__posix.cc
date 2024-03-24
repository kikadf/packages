$NetBSD$

* Part of patchset to build on NetBSD

--- base/threading/platform_thread_internal_posix.cc.orig	2024-03-19 22:14:27.277544500 +0000
+++ base/threading/platform_thread_internal_posix.cc
@@ -42,7 +42,7 @@ ThreadPriorityForTest NiceValueToThreadP
 }
 
 int GetCurrentThreadNiceValue() {
-#if BUILDFLAG(IS_NACL)
+#if BUILDFLAG(IS_NACL) || BUILDFLAG(IS_BSD)
   NOTIMPLEMENTED();
   return 0;
 #else
