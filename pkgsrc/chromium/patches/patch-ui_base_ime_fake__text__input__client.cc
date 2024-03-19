$NetBSD$

--- ui/base/ime/fake_text_input_client.cc.orig	2024-03-06 00:15:20.293393400 +0000
+++ ui/base/ime/fake_text_input_client.cc
@@ -171,7 +171,7 @@ bool FakeTextInputClient::ShouldDoLearni
   return false;
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 bool FakeTextInputClient::SetCompositionFromExistingText(
     const gfx::Range& range,
     const std::vector<ui::ImeTextSpan>& ui_ime_text_spans) {
