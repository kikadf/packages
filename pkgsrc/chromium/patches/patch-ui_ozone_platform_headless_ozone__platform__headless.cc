$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/ozone/platform/headless/ozone_platform_headless.cc.orig	2024-05-21 22:43:36.260567700 +0000
+++ ui/ozone/platform/headless/ozone_platform_headless.cc
@@ -103,7 +103,7 @@ class OzonePlatformHeadless : public Ozo
   }
 
 // Desktop Linux, not CastOS.
-#if BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CASTOS)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && !BUILDFLAG(IS_CASTOS)
   const PlatformProperties& GetPlatformProperties() override {
     static base::NoDestructor<OzonePlatform::PlatformProperties> properties;
     static bool initialized = false;
