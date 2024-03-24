$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/controls/prefix_selector.cc.orig	2024-03-19 22:15:27.662931700 +0000
+++ ui/views/controls/prefix_selector.cc
@@ -174,7 +174,7 @@ bool PrefixSelector::ShouldDoLearning() 
   return false;
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 bool PrefixSelector::SetCompositionFromExistingText(
     const gfx::Range& range,
     const std::vector<ui::ImeTextSpan>& ui_ime_text_spans) {
