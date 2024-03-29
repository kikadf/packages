$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/webui/management/management_ui.cc.orig	2024-03-19 22:14:34.530191400 +0000
+++ chrome/browser/ui/webui/management/management_ui.cc
@@ -98,11 +98,11 @@ content::WebUIDataSource* CreateAndAddMa
       {kManagementOnFileTransferVisibleData,
        IDS_MANAGEMENT_FILE_TRANSFER_VISIBLE_DATA},
 #endif  // BUILDFLAG(IS_CHROMEOS)
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       {kManagementScreenCaptureEvent, IDS_MANAGEMENT_SCREEN_CAPTURE_EVENT},
       {kManagementScreenCaptureData, IDS_MANAGEMENT_SCREEN_CAPTURE_DATA},
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       {kManagementDeviceSignalsDisclosure,
        IDS_MANAGEMENT_DEVICE_SIGNALS_DISCLOSURE},
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
