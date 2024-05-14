$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/tab_search_bubble_host.cc.orig	2024-05-09 21:46:39.410102400 +0000
+++ chrome/browser/ui/views/tab_search_bubble_host.cc
@@ -263,7 +263,7 @@ bool TabSearchBubbleHost::ShouldTabSearc
 // Mac should have tabsearch on the right side. Windows >= Win10 has the
 // Tab Search button as a FrameCaptionButton, but it still needs to be on the
 // left if it exists.
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   return features::IsChromeRefresh2023();
 #else
   return false;
