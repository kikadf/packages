$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/device_signals/core/browser/mock_signals_aggregator.h.orig	2024-05-09 21:46:44.066409800 +0000
+++ components/device_signals/core/browser/mock_signals_aggregator.h
@@ -17,7 +17,7 @@ class MockSignalsAggregator : public Sig
   MockSignalsAggregator();
   ~MockSignalsAggregator() override;
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   MOCK_METHOD(void,
               GetSignalsForUser,
               (const UserContext&,
