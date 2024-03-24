$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/new_tab_page/new_tab_page_util.cc.orig	2024-03-19 22:14:31.693938500 +0000
+++ chrome/browser/new_tab_page/new_tab_page_util.cc
@@ -20,7 +20,7 @@ bool IsOsSupportedForCart() {
 }
 
 bool IsOsSupportedForDrive() {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
