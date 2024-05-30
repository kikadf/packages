$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/extensions/api/passwords_private/passwords_private_delegate_impl.cc.orig	2024-05-21 22:42:51.256553600 +0000
+++ chrome/browser/extensions/api/passwords_private/passwords_private_delegate_impl.cc
@@ -606,7 +606,7 @@ void PasswordsPrivateDelegateImpl::OnFet
 }
 
 void PasswordsPrivateDelegateImpl::OsReauthTimeoutCall() {
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   PasswordsPrivateEventRouter* router =
       PasswordsPrivateEventRouterFactory::GetForProfile(profile_);
   if (router) {
