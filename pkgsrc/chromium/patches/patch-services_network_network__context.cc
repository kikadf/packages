$NetBSD$

--- services/network/network_context.cc.orig	2020-07-15 18:56:01.000000000 +0000
+++ services/network/network_context.cc
@@ -1819,7 +1819,7 @@ URLRequestContextOwner NetworkContext::M
 
     net::CookieCryptoDelegate* crypto_delegate = nullptr;
     if (params_->enable_encrypted_cookies) {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !BUILDFLAG(IS_CHROMECAST)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS) && !BUILDFLAG(IS_CHROMECAST)
       DCHECK(network_service_->os_crypt_config_set())
           << "NetworkService::SetCryptConfig must be called before creating a "
              "NetworkContext with encrypted cookies.";
