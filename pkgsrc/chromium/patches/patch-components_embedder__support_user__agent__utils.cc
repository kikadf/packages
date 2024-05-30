$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/embedder_support/user_agent_utils.cc.orig	2024-05-21 22:42:57.889145400 +0000
+++ components/embedder_support/user_agent_utils.cc
@@ -445,6 +445,9 @@ std::string GetPlatformForUAMetadata() {
 # else
   return "Chromium OS";
 # endif
+#elif BUILDFLAG(IS_BSD)
+  // The internet is weird...
+  return "Linux";
 #else
   return std::string(version_info::GetOSType());
 #endif
