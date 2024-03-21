$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/headless/ozone_platform_headless.cc.orig	2024-03-06 00:15:20.809438200 +0000
+++ ui/ozone/platform/headless/ozone_platform_headless.cc
@@ -102,7 +102,7 @@ class OzonePlatformHeadless : public Ozo
   }
 
 // Desktop Linux, not CastOS.
-#if BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CASTOS)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && !BUILDFLAG(IS_CASTOS)
   const PlatformProperties& GetPlatformProperties() override {
     static base::NoDestructor<OzonePlatform::PlatformProperties> properties;
     static bool initialized = false;
