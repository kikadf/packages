$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/clipboard/clipboard_constants.cc.orig	2024-03-06 00:15:20.265391000 +0000
+++ ui/base/clipboard/clipboard_constants.cc
@@ -25,7 +25,7 @@ const char kMimeTypeOctetStream[] = "app
 // Used for window dragging on some platforms.
 const char kMimeTypeWindowDrag[] = "chromium/x-window-drag";
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 const char kMimeTypeLinuxUtf8String[] = "UTF8_STRING";
 const char kMimeTypeLinuxString[] = "STRING";
 const char kMimeTypeLinuxText[] = "TEXT";