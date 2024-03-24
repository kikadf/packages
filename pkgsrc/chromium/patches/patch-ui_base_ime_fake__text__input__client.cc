$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/ime/fake_text_input_client.cc.orig	2024-03-19 22:15:26.958868700 +0000
+++ ui/base/ime/fake_text_input_client.cc
@@ -205,7 +205,7 @@ bool FakeTextInputClient::ShouldDoLearni
   return false;
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 bool FakeTextInputClient::SetCompositionFromExistingText(
     const gfx::Range& range,
     const std::vector<ui::ImeTextSpan>& ui_ime_text_spans) {
