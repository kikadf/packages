$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/flags_ui/flags_state.cc.orig	2024-04-10 21:24:48.692962200 +0000
+++ components/flags_ui/flags_state.cc
@@ -741,7 +741,7 @@ unsigned short FlagsState::GetCurrentPla
   return kOsCrOS;
 #elif BUILDFLAG(IS_CHROMEOS_LACROS)
   return kOsLacros;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_OPENBSD)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return kOsLinux;
 #elif BUILDFLAG(IS_ANDROID)
   return kOsAndroid;
