$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/permissions/chrome_permissions_client.cc.orig	2024-03-06 00:14:41.602034600 +0000
+++ chrome/browser/permissions/chrome_permissions_client.cc
@@ -225,7 +225,7 @@ void ChromePermissionsClient::AreSitesIm
 bool ChromePermissionsClient::IsCookieDeletionDisabled(
     content::BrowserContext* browser_context,
     const GURL& origin) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   if (!base::FeatureList::IsEnabled(
           supervised_user::kClearingCookiesKeepsSupervisedUsersSignedIn)) {
     return false;
