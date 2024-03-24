$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/common/renderer_preferences/renderer_preferences_mojom_traits.cc.orig	2024-03-19 22:14:52.959835500 +0000
+++ third_party/blink/common/renderer_preferences/renderer_preferences_mojom_traits.cc
@@ -63,7 +63,7 @@ bool StructTraits<blink::mojom::Renderer
 
   out->send_subresource_notification = data.send_subresource_notification();
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (!data.ReadSystemFontFamilyName(&out->system_font_family_name))
     return false;
 #endif
