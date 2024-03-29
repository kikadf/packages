$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/startup/bad_flags_prompt.cc.orig	2024-03-19 22:14:33.998144000 +0000
+++ chrome/browser/ui/startup/bad_flags_prompt.cc
@@ -104,7 +104,7 @@ const char* const kBadFlags[] = {
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
     // Speech dispatcher is buggy, it can crash and it can make Chrome freeze.
     // http://crbug.com/327295
     switches::kEnableSpeechDispatcher,
