$NetBSD$

--- components/autofill/core/common/autofill_util.cc.orig	2024-03-06 00:14:46.754481800 +0000
+++ components/autofill/core/common/autofill_util.cc
@@ -130,7 +130,7 @@ bool SanitizedFieldIsEmpty(const std::u1
 
 bool ShouldAutoselectFirstSuggestionOnArrowDown() {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
