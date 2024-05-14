$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/media/webrtc/webrtc_log_uploader.cc.orig	2024-05-09 21:46:36.325898600 +0000
+++ chrome/browser/media/webrtc/webrtc_log_uploader.cc
@@ -100,7 +100,7 @@ std::string GetLogUploadProduct() {
   const char product[] = "Chrome_Mac";
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 #if !defined(ADDRESS_SANITIZER)
   const char product[] = "Chrome_Linux";
 #else
