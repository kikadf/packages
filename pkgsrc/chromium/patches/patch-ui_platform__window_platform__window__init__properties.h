$NetBSD$

* Part of patchset to build on NetBSD

--- ui/platform_window/platform_window_init_properties.h.orig	2024-03-06 00:15:20.857442400 +0000
+++ ui/platform_window/platform_window_init_properties.h
@@ -56,7 +56,7 @@ class WorkspaceExtensionDelegate;
 class ScenicWindowDelegate;
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 class X11ExtensionDelegate;
 #endif
 
@@ -118,7 +118,7 @@ struct COMPONENT_EXPORT(PLATFORM_WINDOW)
 
   PlatformWindowShadowType shadow_type = PlatformWindowShadowType::kDefault;
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   bool prefer_dark_theme = false;
   raw_ptr<gfx::ImageSkia> icon = nullptr;
   absl::optional<SkColor> background_color;