$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/common/media/cdm_registration.h.orig	2024-03-19 22:14:34.842219400 +0000
+++ chrome/common/media/cdm_registration.h
@@ -14,7 +14,7 @@
 // Register CdmInfo for Content Decryption Modules (CDM) supported.
 void RegisterCdmInfo(std::vector<content::CdmInfo>* cdms);
 
-#if BUILDFLAG(ENABLE_WIDEVINE) && BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(ENABLE_WIDEVINE) && (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD))
 // Returns the software secure Widevine CDM.
 std::vector<content::CdmInfo> GetSoftwareSecureWidevineForTesting();
 #endif
