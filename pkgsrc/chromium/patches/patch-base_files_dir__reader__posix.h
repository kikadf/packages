$NetBSD$

* Part of patchset to build on NetBSD

--- base/files/dir_reader_posix.h.orig	2024-03-06 00:14:36.945630300 +0000
+++ base/files/dir_reader_posix.h
@@ -17,7 +17,7 @@
 // seems worse than falling back to enumerating all file descriptors so we will
 // probably never implement this on the Mac.
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 #include "base/files/dir_reader_linux.h"
 #else
 #include "base/files/dir_reader_fallback.h"
@@ -25,7 +25,7 @@
 
 namespace base {
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 typedef DirReaderLinux DirReaderPosix;
 #else
 typedef DirReaderFallback DirReaderPosix;