$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- headless/lib/browser/headless_content_browser_client.h.orig	2024-04-30 23:46:57.559872200 +0000
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
