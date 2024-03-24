$NetBSD$

* Part of patchset to build on NetBSD

--- components/embedder_support/user_agent_utils.cc.orig	2024-03-19 22:14:38.710564400 +0000
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
