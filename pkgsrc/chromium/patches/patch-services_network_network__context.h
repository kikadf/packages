$NetBSD$

* Part of patchset to build on NetBSD

--- services/network/network_context.h.orig	2024-03-06 00:14:57.687431000 +0000
+++ services/network/network_context.h
@@ -663,7 +663,7 @@ class COMPONENT_EXPORT(NETWORK_SERVICE) 
    public:
     explicit NetworkContextHttpAuthPreferences(NetworkService* network_service);
     ~NetworkContextHttpAuthPreferences() override;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     bool AllowGssapiLibraryLoad() const override;
 #endif  // BUILDFLAG(IS_LINUX)
    private:
