$NetBSD$

* Part of patchset to build on NetBSD

--- components/policy/core/common/policy_paths.cc.orig	2024-03-19 22:14:39.646648000 +0000
+++ components/policy/core/common/policy_paths.cc
@@ -17,6 +17,8 @@ namespace policy {
 const char kPolicyPath[] = "/etc/opt/chrome/policies";
 #elif BUILDFLAG(GOOGLE_CHROME_FOR_TESTING_BRANDING)
 const char kPolicyPath[] = "/etc/opt/chrome_for_testing/policies";
+#elif BUILDFLAG(IS_FREEBSD)
+const char kPolicyPath[] = "/usr/local/etc/chromium/policies";
 #else
 const char kPolicyPath[] = "/etc/chromium/policies";
 #endif  // BUILDFLAG(GOOGLE_CHROME_BRANDING)
