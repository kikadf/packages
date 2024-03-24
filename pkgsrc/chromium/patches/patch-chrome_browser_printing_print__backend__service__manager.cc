$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/printing/print_backend_service_manager.cc.orig	2024-03-19 22:14:31.965962600 +0000
+++ chrome/browser/printing/print_backend_service_manager.cc
@@ -34,7 +34,7 @@
 #include "printing/printing_context.h"
 #include "printing/printing_features.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "content/public/common/content_switches.h"
 #endif
 
@@ -853,7 +853,7 @@ PrintBackendServiceManager::GetServiceFr
         host.BindNewPipeAndPassReceiver(),
         content::ServiceProcessHost::Options()
             .WithDisplayName(IDS_UTILITY_PROCESS_PRINT_BACKEND_SERVICE_NAME)
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
             .WithExtraCommandLineSwitches({switches::kMessageLoopTypeUi})
 #endif
             .Pass());
@@ -1026,7 +1026,7 @@ PrintBackendServiceManager::DetermineIdl
       return kNoClientsRegisteredResetOnIdleTimeout;
 
     case ClientType::kQueryWithUi:
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       // No need to update if there were other query with UI clients.
       if (HasQueryWithUiClientForRemoteId(remote_id)) {
         return std::nullopt;
