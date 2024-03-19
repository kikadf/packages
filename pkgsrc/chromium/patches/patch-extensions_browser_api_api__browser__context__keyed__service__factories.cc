$NetBSD$

--- extensions/browser/api/api_browser_context_keyed_service_factories.cc.orig	2024-03-06 00:14:52.354968000 +0000
+++ extensions/browser/api/api_browser_context_keyed_service_factories.cc
@@ -107,7 +107,7 @@ void EnsureApiBrowserContextKeyedService
   MessagingAPIMessageFilter::EnsureAssociatedFactoryBuilt();
 #endif
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   NetworkingPrivateEventRouterFactory::GetInstance();
 #endif
   OffscreenDocumentManager::GetFactory();
