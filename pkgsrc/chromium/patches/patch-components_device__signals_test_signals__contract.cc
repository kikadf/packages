$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/device_signals/test/signals_contract.cc.orig	2024-05-21 22:42:57.653124300 +0000
+++ components/device_signals/test/signals_contract.cc
@@ -212,7 +212,7 @@ GetSignalsContract() {
       base::BindRepeating(VerifyUnset, names::kCrowdStrike);
 #endif
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUIDLFLAG(IS_BSD)
   contract[names::kAllowScreenLock] =
       base::BindRepeating(VerifyUnset, names::kAllowScreenLock);
   contract[names::kImei] = base::BindRepeating(VerifyUnset, names::kImei);
