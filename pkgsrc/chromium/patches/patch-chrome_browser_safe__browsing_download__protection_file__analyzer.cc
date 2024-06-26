$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- chrome/browser/safe_browsing/download_protection/file_analyzer.cc.orig	2024-06-13 23:28:49.187170000 +0000
+++ chrome/browser/safe_browsing/download_protection/file_analyzer.cc
@@ -21,7 +21,7 @@
 #include "content/public/browser/browser_thread.h"
 #include "url/gurl.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/safe_browsing/download_protection/document_analysis_service.h"
 #endif
 
@@ -85,7 +85,7 @@ void FileAnalyzer::Start(const base::Fil
   } else if (inspection_type == DownloadFileType::DMG) {
     StartExtractDmgFeatures();
 #endif
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   } else if (inspection_type == DownloadFileType::OFFICE_DOCUMENT &&
              !base::FeatureList::IsEnabled(kMaldocaSkipCheck)) {
     StartExtractDocumentFeatures();
@@ -326,7 +326,7 @@ void FileAnalyzer::OnDmgAnalysisFinished
 }
 #endif  // BUILDFLAG(IS_MAC)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 void FileAnalyzer::StartExtractDocumentFeatures() {
   DCHECK_CURRENTLY_ON(BrowserThread::UI);
 
