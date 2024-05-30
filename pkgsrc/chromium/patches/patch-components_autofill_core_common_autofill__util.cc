$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/autofill/core/common/autofill_util.cc.orig	2024-05-21 22:42:57.261089300 +0000
+++ components/autofill/core/common/autofill_util.cc
@@ -131,7 +131,7 @@ bool SanitizedFieldIsEmpty(const std::u1
 
 bool ShouldAutoselectFirstSuggestionOnArrowDown() {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
