$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/background/background_mode_manager.cc.orig	2024-03-19 22:14:30.785857400 +0000
+++ chrome/browser/background/background_mode_manager.cc
@@ -870,7 +870,7 @@ gfx::ImageSkia GetStatusTrayIcon() {
     return gfx::ImageSkia();
 
   return family->CreateExact(size).AsImageSkia();
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return *ui::ResourceBundle::GetSharedInstance().GetImageSkiaNamed(
       IDR_PRODUCT_LOGO_128);
 #elif BUILDFLAG(IS_MAC)
