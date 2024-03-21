$NetBSD$

* Part of patchset to build on NetBSD

--- headless/lib/browser/headless_content_browser_client.h.orig	2024-03-06 00:14:52.955020200 +0000
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
