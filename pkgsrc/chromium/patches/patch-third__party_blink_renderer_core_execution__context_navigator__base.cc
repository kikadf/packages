$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/core/execution_context/navigator_base.cc.orig	2024-03-19 22:14:54.355960100 +0000
+++ third_party/blink/renderer/core/execution_context/navigator_base.cc
@@ -31,7 +31,7 @@ String GetReducedNavigatorPlatform() {
   return "Win32";
 #elif BUILDFLAG(IS_FUCHSIA)
   return "";
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return "Linux x86_64";
 #elif BUILDFLAG(IS_IOS)
   return "iPhone";
