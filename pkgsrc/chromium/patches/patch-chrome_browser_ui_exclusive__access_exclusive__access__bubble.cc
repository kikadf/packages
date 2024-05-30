$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/exclusive_access/exclusive_access_bubble.cc.orig	2024-05-21 22:42:53.712772800 +0000
+++ chrome/browser/ui/exclusive_access/exclusive_access_bubble.cc
@@ -19,7 +19,7 @@
 
 // NOTE(koz): Linux doesn't use the thick shadowed border, so we add padding
 // here.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 const int ExclusiveAccessBubble::kPaddingPx = 8;
 #else
 const int ExclusiveAccessBubble::kPaddingPx = 15;
