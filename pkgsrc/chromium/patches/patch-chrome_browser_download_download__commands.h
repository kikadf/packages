$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/download/download_commands.h.orig	2024-05-21 22:42:51.068537000 +0000
+++ chrome/browser/download/download_commands.h
@@ -66,7 +66,7 @@ class DownloadCommands {
   void ExecuteCommand(Command command);
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   bool IsDownloadPdf() const;
   bool CanOpenPdfInSystemViewer() const;
   Browser* GetBrowser() const;
