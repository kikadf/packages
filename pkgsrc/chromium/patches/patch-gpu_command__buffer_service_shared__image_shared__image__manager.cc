$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- gpu/command_buffer/service/shared_image/shared_image_manager.cc.orig	2024-04-10 21:24:54.133395700 +0000
+++ gpu/command_buffer/service/shared_image/shared_image_manager.cc
@@ -568,7 +568,7 @@ bool SharedImageManager::SupportsScanout
   return true;
 #elif BUILDFLAG(IS_ANDROID)
   return base::AndroidHardwareBufferCompat::IsSupportAvailable();
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   return ui::OzonePlatform::GetInstance()
       ->GetPlatformRuntimeProperties()
       .supports_native_pixmaps;
