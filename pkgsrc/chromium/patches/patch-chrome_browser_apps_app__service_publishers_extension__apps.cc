$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/apps/app_service/publishers/extension_apps.cc.orig	2024-03-26 21:36:36.115795100 +0000
+++ chrome/browser/apps/app_service/publishers/extension_apps.cc
@@ -24,7 +24,7 @@ ExtensionApps::~ExtensionApps() = defaul
 
 bool ExtensionApps::Accepts(const extensions::Extension* extension) {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   if (extensions::IsExtensionUnsupportedDeprecatedApp(profile(),
                                                       extension->id())) {
     return false;
