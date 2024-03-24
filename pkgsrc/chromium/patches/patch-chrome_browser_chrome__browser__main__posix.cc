$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/chrome_browser_main_posix.cc.orig	2024-03-19 22:14:30.841862400 +0000
+++ chrome/browser/chrome_browser_main_posix.cc
@@ -79,7 +79,7 @@ void ExitHandler::ExitWhenPossibleOnUITh
   } else {
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
     switch (signal) {
       case SIGINT:
       case SIGHUP:
