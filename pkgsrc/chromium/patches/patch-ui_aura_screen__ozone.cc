$NetBSD$

* Part of patchset to build on NetBSD

--- ui/aura/screen_ozone.cc.orig	2024-03-06 00:15:20.253390000 +0000
+++ ui/aura/screen_ozone.cc
@@ -106,7 +106,7 @@ display::Display ScreenOzone::GetPrimary
   return platform_screen_->GetPrimaryDisplay();
 }
 
-#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 ScreenOzone::ScreenSaverSuspenderOzone::ScreenSaverSuspenderOzone(
     std::unique_ptr<ui::PlatformScreen::PlatformScreenSaverSuspender> suspender)
     : suspender_(std::move(suspender)) {}