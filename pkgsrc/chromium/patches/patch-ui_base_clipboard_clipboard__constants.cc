$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/base/clipboard/clipboard_constants.cc.orig	2024-04-10 21:25:24.663828800 +0000
+++ ui/base/clipboard/clipboard_constants.cc
@@ -25,7 +25,7 @@ const char kMimeTypeOctetStream[] = "app
 // Used for window dragging on some platforms.
 const char kMimeTypeWindowDrag[] = "chromium/x-window-drag";
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 const char kMimeTypeLinuxUtf8String[] = "UTF8_STRING";
 const char kMimeTypeLinuxString[] = "STRING";
 const char kMimeTypeLinuxText[] = "TEXT";
