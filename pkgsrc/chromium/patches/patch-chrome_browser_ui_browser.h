$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/browser.h.orig	2024-05-21 22:42:53.664768500 +0000
+++ chrome/browser/ui/browser.h
@@ -327,7 +327,7 @@ class Browser : public TabStripModelObse
     std::optional<int64_t> display_id;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // When the browser window is shown, the desktop environment is notified
     // using this ID.  In response, the desktop will stop playing the "waiting
     // for startup" animation (if any).
