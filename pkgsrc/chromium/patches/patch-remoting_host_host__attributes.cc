$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/host_attributes.cc.orig	2024-03-19 22:14:51.659719700 +0000
+++ remoting/host/host_attributes.cc
@@ -104,7 +104,7 @@ std::string GetHostAttributes() {
   if (media::InitializeMediaFoundation()) {
     result.push_back("HWEncoder");
   }
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   result.push_back("HWEncoder");
 #endif
 
