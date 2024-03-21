$NetBSD$

* Part of patchset to build on NetBSD

--- components/password_manager/core/browser/sync/password_sync_bridge.cc.orig	2024-03-06 00:14:47.918583000 +0000
+++ components/password_manager/core/browser/sync/password_sync_bridge.cc
@@ -197,7 +197,7 @@ bool ShouldRecoverPasswordsDuringMerge()
 }
 
 bool ShouldCleanSyncMetadataDuringStartupWhenDecryptionFails() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return ShouldRecoverPasswordsDuringMerge() &&
          base::FeatureList::IsEnabled(
              features::kForceInitialSyncWhenDecryptionFails);
