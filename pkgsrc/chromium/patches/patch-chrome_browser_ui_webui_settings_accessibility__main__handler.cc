$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/webui/settings/accessibility_main_handler.cc.orig	2024-03-06 00:14:43.854230200 +0000
+++ chrome/browser/ui/webui/settings/accessibility_main_handler.cc
@@ -19,7 +19,7 @@
 #include "content/public/browser/web_contents.h"
 #include "content/public/browser/web_ui.h"
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
 #include "ui/accessibility/accessibility_features.h"
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
 
@@ -39,7 +39,7 @@ void AccessibilityMainHandler::RegisterM
       base::BindRepeating(
           &AccessibilityMainHandler::HandleCheckAccessibilityImageLabels,
           base::Unretained(this)));
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   web_ui()->RegisterMessageCallback(
       "getScreenAiInstallState",
       base::BindRepeating(
@@ -56,7 +56,7 @@ void AccessibilityMainHandler::OnJavascr
           base::Unretained(this)));
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   if (features::IsPdfOcrEnabled()) {
     CHECK(!component_ready_observer_.IsObserving());
     component_ready_observer_.Observe(
@@ -70,14 +70,14 @@ void AccessibilityMainHandler::OnJavascr
   accessibility_subscription_ = {};
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   if (features::IsPdfOcrEnabled()) {
     component_ready_observer_.Reset();
   }
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
 void AccessibilityMainHandler::DownloadProgressChanged(double progress) {
   CHECK_GE(progress, 0.0);
   CHECK_LE(progress, 1.0);