$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/controls/prefix_selector.h.orig	2024-03-19 22:15:27.662931700 +0000
+++ ui/views/controls/prefix_selector.h
@@ -83,7 +83,7 @@ class VIEWS_EXPORT PrefixSelector : publ
   ukm::SourceId GetClientSourceForMetrics() const override;
   bool ShouldDoLearning() override;
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   bool SetCompositionFromExistingText(
       const gfx::Range& range,
       const std::vector<ui::ImeTextSpan>& ui_ime_text_spans) override;
