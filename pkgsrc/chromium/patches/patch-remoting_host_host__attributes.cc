$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/host/host_attributes.cc.orig	2024-05-21 22:43:07.009958700 +0000
+++ remoting/host/host_attributes.cc
@@ -104,7 +104,7 @@ std::string GetHostAttributes() {
   if (media::InitializeMediaFoundation()) {
     result.push_back("HWEncoder");
   }
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   result.push_back("HWEncoder");
 #endif
 
