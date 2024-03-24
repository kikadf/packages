$NetBSD$

* Part of patchset to build on NetBSD

--- ui/aura/screen_ozone.h.orig	2024-03-19 22:15:26.666842700 +0000
+++ ui/aura/screen_ozone.h
@@ -44,7 +44,7 @@ class AURA_EXPORT ScreenOzone : public d
   display::Display GetDisplayMatching(
       const gfx::Rect& match_rect) const override;
   display::Display GetPrimaryDisplay() const override;
-#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::unique_ptr<display::Screen::ScreenSaverSuspender> SuspendScreenSaver()
       override;
 #endif  // BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
@@ -71,7 +71,7 @@ class AURA_EXPORT ScreenOzone : public d
   ui::PlatformScreen* platform_screen() { return platform_screen_.get(); }
 
  private:
-#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   class ScreenSaverSuspenderOzone
       : public display::Screen::ScreenSaverSuspender {
    public:
