$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- headless/lib/browser/headless_content_browser_client.h.orig	2024-05-21 22:43:03.085608700 +0000
+++ headless/lib/browser/headless_content_browser_client.h
@@ -45,7 +45,7 @@ class HeadlessContentBrowserClient : pub
   CreateDevToolsManagerDelegate() override;
   content::GeneratedCodeCacheSettings GetGeneratedCodeCacheSettings(
       content::BrowserContext* context) override;
-#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
   void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
