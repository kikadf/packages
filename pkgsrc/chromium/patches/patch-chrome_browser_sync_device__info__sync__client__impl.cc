$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/sync/device_info_sync_client_impl.cc.orig	2024-03-19 22:14:33.194072200 +0000
+++ chrome/browser/sync/device_info_sync_client_impl.cc
@@ -41,7 +41,7 @@ std::string DeviceInfoSyncClientImpl::Ge
 // in lacros-chrome once build flag switch of lacros-chrome is
 // complete.
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
-    (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+    (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD))
   syncer::SyncPrefs prefs(profile_->GetPrefs());
   if (prefs.IsLocalSyncEnabled()) {
     return "local_device";
