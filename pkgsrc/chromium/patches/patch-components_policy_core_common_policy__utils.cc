$NetBSD$

* Part of patchset to build on NetBSD

--- components/policy/core/common/policy_utils.cc.orig	2024-03-19 22:14:39.646648000 +0000
+++ components/policy/core/common/policy_utils.cc
@@ -28,7 +28,7 @@ bool IsPolicyTestingEnabled(PrefService*
     return true;
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (channel == version_info::Channel::DEV) {
     return true;
   }
