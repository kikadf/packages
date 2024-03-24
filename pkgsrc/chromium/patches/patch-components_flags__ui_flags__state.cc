$NetBSD$

* Part of patchset to build on NetBSD

--- components/flags_ui/flags_state.cc.orig	2024-03-19 22:14:38.850576900 +0000
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
