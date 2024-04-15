$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- extensions/browser/api/api_browser_context_keyed_service_factories.cc.orig	2024-04-10 21:24:53.685360000 +0000
+++ extensions/browser/api/api_browser_context_keyed_service_factories.cc
@@ -102,7 +102,7 @@ void EnsureApiBrowserContextKeyedService
 #endif
   MessageService::GetFactoryInstance();
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   NetworkingPrivateEventRouterFactory::GetInstance();
 #endif
   OffscreenDocumentManager::GetFactory();
