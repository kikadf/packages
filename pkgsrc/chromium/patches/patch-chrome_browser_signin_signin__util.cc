$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/signin/signin_util.cc.orig	2024-03-06 00:14:42.534115600 +0000
+++ chrome/browser/signin/signin_util.cc
@@ -75,7 +75,7 @@ CookiesMover::CookiesMover(base::WeakPtr
 CookiesMover::~CookiesMover() = default;
 
 void CookiesMover::StartMovingCookies() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   bool allow_cookies_to_be_moved = base::FeatureList::IsEnabled(
       profile_management::features::kThirdPartyProfileManagement);
 #else