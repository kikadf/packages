$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/webui/ntp/app_launcher_handler.cc.orig	2024-03-06 00:14:43.834228300 +0000
+++ chrome/browser/ui/webui/ntp/app_launcher_handler.cc
@@ -311,7 +311,7 @@ base::Value::Dict AppLauncherHandler::Cr
   bool is_deprecated_app = false;
   auto* context = extension_service_->GetBrowserContext();
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   is_deprecated_app =
       extensions::IsExtensionUnsupportedDeprecatedApp(context, extension->id());
 #endif
