$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/enterprise/browser_management/browser_management_service.h.orig	2024-05-09 21:46:35.665855000 +0000
+++ chrome/browser/enterprise/browser_management/browser_management_service.h
@@ -28,7 +28,7 @@ class BrowserManagementMetadata {
 
   const gfx::Image& GetManagementLogo() const;
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
  private:
   void UpdateManagementLogo(Profile* profile);
   void SetManagementLogo(
