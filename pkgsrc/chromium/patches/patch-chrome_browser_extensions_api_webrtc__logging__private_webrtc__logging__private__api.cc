$NetBSD$

--- chrome/browser/extensions/api/webrtc_logging_private/webrtc_logging_private_api.cc.orig	2020-07-08 21:40:34.000000000 +0000
+++ chrome/browser/extensions/api/webrtc_logging_private/webrtc_logging_private_api.cc
@@ -30,7 +30,7 @@
 #include "extensions/browser/process_manager.h"
 #include "extensions/common/error_utils.h"
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #include "extensions/common/permissions/permissions_data.h"
 #endif
 
@@ -39,7 +39,7 @@ namespace {
 bool CanEnableAudioDebugRecordingsFromExtension(
     const extensions::Extension* extension) {
   bool enabled_by_permissions = false;
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   if (extension) {
     enabled_by_permissions =
         extension->permissions_data()->active_permissions().HasAPIPermission(
@@ -570,7 +570,7 @@ void WebrtcLoggingPrivateStartEventLoggi
 
 ExtensionFunction::ResponseAction
 WebrtcLoggingPrivateGetLogsDirectoryFunction::Run() {
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   // Unlike other WebrtcLoggingPrivate functions that take a RequestInfo object,
   // this function shouldn't be called by a component extension on behalf of
   // some web code. It returns a DirectoryEntry for use directly in the calling
