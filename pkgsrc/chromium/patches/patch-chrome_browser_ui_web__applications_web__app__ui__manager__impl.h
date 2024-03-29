$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/web_applications/web_app_ui_manager_impl.h.orig	2024-03-19 22:14:34.398179800 +0000
+++ chrome/browser/ui/web_applications/web_app_ui_manager_impl.h
@@ -221,7 +221,7 @@ class WebAppUiManagerImpl : public Brows
       UninstallCompleteCallback uninstall_complete_callback,
       webapps::UninstallResultCode uninstall_code);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void ShowIPHPromoForAppsLaunchedViaLinkCapturing(const Browser* browser,
                                                    const webapps::AppId& app_id,
                                                    bool is_activated);
