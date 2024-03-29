$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/ime/dummy_text_input_client.h.orig	2024-03-19 22:15:26.958868700 +0000
+++ ui/base/ime/dummy_text_input_client.h
@@ -65,7 +65,7 @@ class DummyTextInputClient : public Text
   ukm::SourceId GetClientSourceForMetrics() const override;
   bool ShouldDoLearning() override;
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   bool SetCompositionFromExistingText(
       const gfx::Range& range,
       const std::vector<ui::ImeTextSpan>& ui_ime_text_spans) override;
