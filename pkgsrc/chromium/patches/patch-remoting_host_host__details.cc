$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/host_details.cc.orig	2024-03-19 22:14:51.659719700 +0000
+++ remoting/host/host_details.cc
@@ -23,7 +23,7 @@ std::string GetHostOperatingSystemName()
   return "Mac";
 #elif BUILDFLAG(IS_CHROMEOS_ASH)
   return "ChromeOS";
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   return "Linux";
 #elif BUILDFLAG(IS_ANDROID)
   return "Android";
