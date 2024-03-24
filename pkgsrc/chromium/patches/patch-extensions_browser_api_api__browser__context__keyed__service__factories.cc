$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/browser/api/api_browser_context_keyed_service_factories.cc.orig	2024-03-19 22:14:44.963122100 +0000
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
