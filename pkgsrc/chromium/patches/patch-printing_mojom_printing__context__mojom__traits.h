$NetBSD$

* Part of patchset to build on NetBSD

--- printing/mojom/printing_context_mojom_traits.h.orig	2024-03-06 00:14:57.315398700 +0000
+++ printing/mojom/printing_context_mojom_traits.h
@@ -166,7 +166,7 @@ struct StructTraits<printing::mojom::Pri
     return s.pages_per_sheet();
   }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static const printing::PrintSettings::AdvancedSettings& advanced_settings(
       const printing::PrintSettings& s) {
     return s.advanced_settings();
