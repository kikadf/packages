$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/web_applications/extensions/extension_status_utils.cc.orig	2024-03-19 22:14:34.682205000 +0000
+++ chrome/browser/web_applications/extensions/extension_status_utils.cc
@@ -26,7 +26,7 @@ namespace {
 const char* g_preinstalled_app_for_testing = nullptr;
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // TODO(b/268221237): Remove this allow-list.
 const char kDefaultAllowedExtensionIds[] =
     "alhngdkjgnedakdlnamimgfihgkmenbh,"
@@ -116,7 +116,7 @@ bool ClearExternalExtensionUninstalled(c
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 bool IsExtensionUnsupportedDeprecatedApp(content::BrowserContext* context,
                                          const std::string& extension_id) {
   if (testing::g_enable_chrome_apps_for_testing) {
