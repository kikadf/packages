$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- chrome/browser/webauthn/enclave_manager.cc.orig	2024-06-13 23:28:51.135345000 +0000
+++ chrome/browser/webauthn/enclave_manager.cc
@@ -652,7 +652,7 @@ base::flat_set<std::string> GetGaiaIDs(
 }
 
 std::string UserVerifyingLabelToString(crypto::UserVerifyingKeyLabel label) {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return label;
 #else
   return std::string("placeholder");
@@ -661,7 +661,7 @@ std::string UserVerifyingLabelToString(c
 
 std::optional<crypto::UserVerifyingKeyLabel> UserVerifyingKeyLabelFromString(
     std::string saved_label) {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return saved_label;
 #else
   return std::nullopt;
