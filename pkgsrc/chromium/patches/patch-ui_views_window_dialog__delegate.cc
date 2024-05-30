$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/views/window/dialog_delegate.cc.orig	2024-05-21 22:43:36.504589300 +0000
+++ ui/views/window/dialog_delegate.cc
@@ -103,7 +103,7 @@ Widget* DialogDelegate::CreateDialogWidg
 
 // static
 bool DialogDelegate::CanSupportCustomFrame(gfx::NativeView parent) {
-#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) && \
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)) && \
     BUILDFLAG(ENABLE_DESKTOP_AURA)
   // The new style doesn't support unparented dialogs on Linux desktop.
   return parent != nullptr;
