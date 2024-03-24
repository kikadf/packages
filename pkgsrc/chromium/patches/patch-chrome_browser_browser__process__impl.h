$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/browser_process_impl.h.orig	2024-03-19 22:14:30.801859000 +0000
+++ chrome/browser/browser_process_impl.h
@@ -389,7 +389,7 @@ class BrowserProcessImpl : public Browse
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_WIN) || (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+#if BUILDFLAG(IS_WIN) || (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || BUILDFLAG(IS_BSD)
   base::RepeatingTimer autoupdate_timer_;
 
   // Gets called by autoupdate timer to see if browser needs restart and can be
