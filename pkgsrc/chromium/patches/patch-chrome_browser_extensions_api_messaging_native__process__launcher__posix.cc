$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/extensions/api/messaging/native_process_launcher_posix.cc.orig	2024-03-06 00:14:40.965979300 +0000
+++ chrome/browser/extensions/api/messaging/native_process_launcher_posix.cc
@@ -84,7 +84,7 @@ bool NativeProcessLauncher::LaunchNative
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   // Don't use no_new_privs mode, e.g. in case the host needs to use sudo.
   options.allow_new_privs = true;
 #endif
