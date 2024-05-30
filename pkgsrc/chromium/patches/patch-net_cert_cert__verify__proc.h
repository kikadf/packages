$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/cert/cert_verify_proc.h.orig	2024-05-21 22:43:05.957865000 +0000
+++ net/cert/cert_verify_proc.h
@@ -174,7 +174,7 @@ class NET_EXPORT CertVerifyProc
     kMaxValue = kChainLengthOne
   };
 
-#if !(BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_LINUX) || \
+#if !(BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || \
       BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(CHROME_ROOT_STORE_ONLY))
   // Creates and returns a CertVerifyProc that uses the system verifier.
   // |cert_net_fetcher| may not be used, depending on the implementation.
