$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/chrome_views_delegate_linux.cc.orig	2024-05-21 22:42:53.904790000 +0000
+++ chrome/browser/ui/views/chrome_views_delegate_linux.cc
@@ -26,7 +26,7 @@ bool IsDesktopEnvironmentUnity() {
   return desktop_env == base::nix::DESKTOP_ENVIRONMENT_UNITY;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 int GetWindowIconResourceId() {
 #if BUILDFLAG(GOOGLE_CHROME_BRANDING)
   switch (chrome::GetChannel()) {
@@ -80,7 +80,7 @@ views::NativeWidget* ChromeViewsDelegate
                               delegate);
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 gfx::ImageSkia* ChromeViewsDelegate::GetDefaultWindowIcon() const {
   ui::ResourceBundle& rb = ui::ResourceBundle::GetSharedInstance();
   return rb.GetImageSkiaNamed(GetWindowIconResourceId());
