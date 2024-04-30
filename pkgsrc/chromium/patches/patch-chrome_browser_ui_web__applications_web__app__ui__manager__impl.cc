$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/web_applications/web_app_ui_manager_impl.cc.orig	2024-04-15 20:33:49.893546600 +0000
+++ chrome/browser/ui/web_applications/web_app_ui_manager_impl.cc
@@ -586,7 +586,7 @@ void WebAppUiManagerImpl::MaybeShowIPHPr
     content::WebContents* web_contents,
     Profile* profile,
     const std::string& app_id) {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   WebAppProvider* provider = WebAppProvider::GetForWebApps(profile);
   CHECK(provider);
 
@@ -806,7 +806,7 @@ void WebAppUiManagerImpl::ClearWebAppSit
   }
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void WebAppUiManagerImpl::ShowIPHPromoForAppsLaunchedViaLinkCapturing(
     const Browser* browser,
     const webapps::AppId& app_id,
