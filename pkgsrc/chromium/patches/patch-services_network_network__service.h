$NetBSD$

--- services/network/network_service.h.orig	2020-07-15 18:56:01.000000000 +0000
+++ services/network/network_service.h
@@ -192,7 +192,7 @@ class COMPONENT_EXPORT(NETWORK_SERVICE) 
       base::span<const uint8_t> config,
       mojom::NetworkService::UpdateLegacyTLSConfigCallback callback) override;
   void OnCertDBChanged() override;
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   void SetCryptConfig(mojom::CryptConfigPtr crypt_config) override;
 #endif
 #if defined(OS_WIN) || (defined(OS_MACOSX) && !defined(OS_IOS))
