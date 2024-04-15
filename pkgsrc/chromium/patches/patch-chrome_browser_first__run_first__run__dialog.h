$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/first_run/first_run_dialog.h.orig	2024-04-10 21:24:41.724407000 +0000
+++ chrome/browser/first_run/first_run_dialog.h
@@ -12,7 +12,7 @@
 // Hide this function on platforms where the dialog does not exist.
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_MAC) || (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+#if BUILDFLAG(IS_MAC) || (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || BUILDFLAG(IS_BSD)
 
 namespace first_run {
 
