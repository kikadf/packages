$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/chrome_content_browser_client.h.orig	2024-03-06 00:14:40.637951000 +0000
+++ chrome/browser/chrome_content_browser_client.h
@@ -489,7 +489,7 @@ class ChromeContentBrowserClient : publi
   bool IsPluginAllowedToUseDevChannelAPIs(
       content::BrowserContext* browser_context,
       const GURL& url) override;
-#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
   void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
