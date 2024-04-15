$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/webui/app_home/app_home_page_handler.cc.orig	2024-04-10 21:24:44.452624300 +0000
+++ chrome/browser/ui/webui/app_home/app_home_page_handler.cc
@@ -392,7 +392,7 @@ app_home::mojom::AppInfoPtr AppHomePageH
 
   bool deprecated_app = false;
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   auto* context = extension_system_->extension_service()->GetBrowserContext();
   deprecated_app =
       extensions::IsExtensionUnsupportedDeprecatedApp(context, extension->id());
@@ -456,7 +456,7 @@ void AppHomePageHandler::FillExtensionIn
     }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
     auto* context = extension_system_->extension_service()->GetBrowserContext();
     const bool is_deprecated_app =
         extensions::IsExtensionUnsupportedDeprecatedApp(context,
