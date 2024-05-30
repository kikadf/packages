$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/web_applications/web_app_ui_manager_impl.cc.orig	2024-05-21 22:42:54.172814000 +0000
+++ chrome/browser/ui/web_applications/web_app_ui_manager_impl.cc
@@ -578,7 +578,7 @@ void WebAppUiManagerImpl::MaybeShowIPHPr
     content::WebContents* web_contents,
     Profile* profile,
     const std::string& app_id) {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   WebAppProvider* provider = WebAppProvider::GetForWebApps(profile);
   CHECK(provider);
 
@@ -798,7 +798,7 @@ void WebAppUiManagerImpl::ClearWebAppSit
   }
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void WebAppUiManagerImpl::ShowIPHPromoForAppsLaunchedViaLinkCapturing(
     const Browser* browser,
     const webapps::AppId& app_id,
