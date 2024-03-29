$NetBSD$

* Part of patchset to build on NetBSD

--- gpu/command_buffer/service/shared_image/shared_image_manager.cc.orig	2024-03-19 22:14:45.663184600 +0000
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
