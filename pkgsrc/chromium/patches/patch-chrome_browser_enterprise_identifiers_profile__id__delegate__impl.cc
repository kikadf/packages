$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/enterprise/identifiers/profile_id_delegate_impl.cc.orig	2024-04-30 23:46:45.562576800 +0000
+++ chrome/browser/enterprise/identifiers/profile_id_delegate_impl.cc
@@ -12,7 +12,7 @@
 #include "components/enterprise/browser/identifiers/identifiers_prefs.h"
 #include "components/prefs/pref_service.h"
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 #include "components/enterprise/browser/controller/browser_dm_token_storage.h"
 #if BUILDFLAG(IS_WIN)
 #include "base/strings/utf_string_conversions.h"
@@ -36,7 +36,7 @@ void CreateProfileGUID(PrefService* pref
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // Gets the device ID from the BrowserDMTokenStorage.
 std::string GetId() {
   std::string device_id =
