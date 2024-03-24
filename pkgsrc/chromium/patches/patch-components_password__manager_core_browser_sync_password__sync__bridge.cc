$NetBSD$

* Part of patchset to build on NetBSD

--- components/password_manager/core/browser/sync/password_sync_bridge.cc.orig	2024-03-19 22:14:39.442629800 +0000
+++ components/password_manager/core/browser/sync/password_sync_bridge.cc
@@ -195,7 +195,7 @@ bool ShouldRecoverPasswordsDuringMerge()
 }
 
 bool ShouldCleanSyncMetadataDuringStartupWhenDecryptionFails() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return ShouldRecoverPasswordsDuringMerge() &&
          base::FeatureList::IsEnabled(
              features::kForceInitialSyncWhenDecryptionFails);
