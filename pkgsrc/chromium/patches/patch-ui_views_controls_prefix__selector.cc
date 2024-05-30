$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/views/controls/prefix_selector.cc.orig	2024-05-21 22:43:36.424582200 +0000
+++ ui/views/controls/prefix_selector.cc
@@ -174,7 +174,7 @@ bool PrefixSelector::ShouldDoLearning() 
   return false;
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 bool PrefixSelector::SetCompositionFromExistingText(
     const gfx::Range& range,
     const std::vector<ui::ImeTextSpan>& ui_ime_text_spans) {
