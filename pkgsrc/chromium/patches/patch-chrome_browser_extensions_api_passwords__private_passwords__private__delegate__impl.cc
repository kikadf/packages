$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/extensions/api/passwords_private/passwords_private_delegate_impl.cc.orig	2024-03-19 22:14:31.201894500 +0000
+++ chrome/browser/extensions/api/passwords_private/passwords_private_delegate_impl.cc
@@ -603,7 +603,7 @@ void PasswordsPrivateDelegateImpl::OnFet
 }
 
 void PasswordsPrivateDelegateImpl::OsReauthTimeoutCall() {
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   PasswordsPrivateEventRouter* router =
       PasswordsPrivateEventRouterFactory::GetForProfile(profile_);
   if (router) {
