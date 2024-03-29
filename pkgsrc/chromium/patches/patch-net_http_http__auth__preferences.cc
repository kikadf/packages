$NetBSD$

* Part of patchset to build on NetBSD

--- net/http/http_auth_preferences.cc.orig	2024-03-19 22:14:50.811644000 +0000
+++ net/http/http_auth_preferences.cc
@@ -39,7 +39,7 @@ std::string HttpAuthPreferences::AuthAnd
 }
 #endif  // BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool HttpAuthPreferences::AllowGssapiLibraryLoad() const {
   return allow_gssapi_library_load_;
 }
