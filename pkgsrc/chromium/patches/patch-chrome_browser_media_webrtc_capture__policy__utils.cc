$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/media/webrtc/capture_policy_utils.cc.orig	2024-04-10 21:24:41.896420500 +0000
+++ chrome/browser/media/webrtc/capture_policy_utils.cc
@@ -140,7 +140,7 @@ void RegisterProfilePrefs(PrefRegistrySi
 }
 
 bool IsGetAllScreensMediaAllowedForAnySite(content::BrowserContext* context) {
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   Profile* profile = Profile::FromBrowserContext(context);
   if (!profile) {
     return false;
@@ -175,7 +175,7 @@ bool IsGetAllScreensMediaAllowedForAnySi
 
 bool IsGetAllScreensMediaAllowed(content::BrowserContext* context,
                                  const GURL& url) {
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   Profile* profile = Profile::FromBrowserContext(context);
   if (!profile) {
     return false;
