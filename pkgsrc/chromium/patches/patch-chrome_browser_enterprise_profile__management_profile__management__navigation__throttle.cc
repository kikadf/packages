$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/enterprise/profile_management/profile_management_navigation_throttle.cc.orig	2024-04-15 20:33:46.965331600 +0000
+++ chrome/browser/enterprise/profile_management/profile_management_navigation_throttle.cc
@@ -67,8 +67,8 @@ base::flat_map<std::string, SAMLProfileA
   // TODO(crbug.com/1445072): Add actual domains with attribute names.
   profile_attributes->insert(std::make_pair(
       "supported.test",
-      SAMLProfileAttributes("placeholderName", "placeholderDomain",
-                            "placeholderToken")));
+      SAMLProfileAttributes(SAMLProfileAttributes{"placeholderName", "placeholderDomain",
+                            "placeholderToken"})));
 
   // Extract domains and attributes from the command line switch.
   const base::CommandLine& command_line =
