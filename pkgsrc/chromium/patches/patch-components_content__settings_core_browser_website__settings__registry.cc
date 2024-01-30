$NetBSD$

--- components/content_settings/core/browser/website_settings_registry.cc.orig	2020-07-08 21:40:39.000000000 +0000
+++ components/content_settings/core/browser/website_settings_registry.cc
@@ -66,7 +66,7 @@ const WebsiteSettingsInfo* WebsiteSettin
 #if defined(OS_WIN)
   if (!(platform & PLATFORM_WINDOWS))
     return nullptr;
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   if (!(platform & PLATFORM_LINUX))
     return nullptr;
 #elif defined(OS_MACOSX) && !defined(OS_IOS)
