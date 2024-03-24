$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/clipboard/clipboard_non_backed.cc.orig	2024-03-19 22:15:26.930866200 +0000
+++ ui/base/clipboard/clipboard_non_backed.cc
@@ -460,7 +460,7 @@ ClipboardNonBacked::ClipboardNonBacked()
   // so create internal clipboards for platform supported clipboard buffers.
   constexpr ClipboardBuffer kClipboardBuffers[] = {
     ClipboardBuffer::kCopyPaste,
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
     ClipboardBuffer::kSelection,
 #endif
 #if BUILDFLAG(IS_MAC)
