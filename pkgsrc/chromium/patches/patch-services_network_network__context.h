$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- services/network/network_context.h.orig	2024-05-21 22:43:07.337988000 +0000
+++ services/network/network_context.h
@@ -672,7 +672,7 @@ class COMPONENT_EXPORT(NETWORK_SERVICE) 
    public:
     explicit NetworkContextHttpAuthPreferences(NetworkService* network_service);
     ~NetworkContextHttpAuthPreferences() override;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     bool AllowGssapiLibraryLoad() const override;
 #endif  // BUILDFLAG(IS_LINUX)
    private:
