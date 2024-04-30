$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/blink/public/common/renderer_preferences/renderer_preferences.h.orig	2024-04-15 20:34:05.134665700 +0000
+++ third_party/blink/public/common/renderer_preferences/renderer_preferences.h
@@ -65,7 +65,7 @@ struct BLINK_COMMON_EXPORT RendererPrefe
   UserAgentOverride user_agent_override;
   std::string accept_languages;
   bool send_subresource_notification{false};
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   std::string system_font_family_name;
 #endif
 #if BUILDFLAG(IS_WIN)
