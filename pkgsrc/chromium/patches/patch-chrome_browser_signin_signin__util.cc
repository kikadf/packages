$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/signin/signin_util.cc.orig	2024-05-21 22:42:52.928702800 +0000
+++ chrome/browser/signin/signin_util.cc
@@ -75,7 +75,7 @@ CookiesMover::CookiesMover(base::WeakPtr
 CookiesMover::~CookiesMover() = default;
 
 void CookiesMover::StartMovingCookies() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   bool allow_cookies_to_be_moved = base::FeatureList::IsEnabled(
       profile_management::features::kThirdPartyProfileManagement);
 #else
