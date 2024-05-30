$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/webui/app_home/app_home_page_handler.cc.orig	2024-05-21 22:42:54.176814300 +0000
+++ chrome/browser/ui/webui/app_home/app_home_page_handler.cc
@@ -376,7 +376,7 @@ app_home::mojom::AppInfoPtr AppHomePageH
   app_info->start_url = start_url;
 
   bool deprecated_app = false;
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   auto* context = extension_system_->extension_service()->GetBrowserContext();
   deprecated_app =
       extensions::IsExtensionUnsupportedDeprecatedApp(context, extension->id());
@@ -439,7 +439,7 @@ void AppHomePageHandler::FillExtensionIn
       continue;
     }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     auto* context = extension_system_->extension_service()->GetBrowserContext();
     const bool is_deprecated_app =
         extensions::IsExtensionUnsupportedDeprecatedApp(context,
