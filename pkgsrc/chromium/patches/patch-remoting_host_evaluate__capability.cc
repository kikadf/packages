$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/evaluate_capability.cc.orig	2024-03-06 00:14:57.379404300 +0000
+++ remoting/host/evaluate_capability.cc
@@ -55,7 +55,7 @@ base::FilePath BuildHostBinaryPath() {
   }
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (path.BaseName().value() ==
       FILE_PATH_LITERAL("chrome-remote-desktop-host")) {
     return path;
