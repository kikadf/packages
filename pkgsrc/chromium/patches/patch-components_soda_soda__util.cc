$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/soda/soda_util.cc.orig	2024-05-21 22:42:59.397279700 +0000
+++ components/soda/soda_util.cc
@@ -35,7 +35,7 @@ bool IsOnDeviceSpeechRecognitionSupporte
   }
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Check if the CPU has the required instruction set to run the Speech
   // On-Device API (SODA) library.
   static bool has_sse41 = base::CPU().has_sse41();
