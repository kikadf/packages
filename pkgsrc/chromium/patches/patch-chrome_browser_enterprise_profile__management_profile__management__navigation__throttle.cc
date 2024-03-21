$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/enterprise/profile_management/profile_management_navigation_throttle.cc.orig	2024-03-06 00:14:40.873971500 +0000
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
