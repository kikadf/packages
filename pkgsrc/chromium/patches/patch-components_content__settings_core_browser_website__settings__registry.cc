$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/content_settings/core/browser/website_settings_registry.cc.orig	2024-05-21 22:42:57.553115400 +0000
+++ components/content_settings/core/browser/website_settings_registry.cc
@@ -67,7 +67,7 @@ const WebsiteSettingsInfo* WebsiteSettin
 #if BUILDFLAG(IS_WIN)
   if (!(platform & PLATFORM_WINDOWS))
     return nullptr;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (!(platform & PLATFORM_LINUX))
     return nullptr;
 #elif BUILDFLAG(IS_MAC)
