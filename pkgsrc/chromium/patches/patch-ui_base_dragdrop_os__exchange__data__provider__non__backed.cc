$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/base/dragdrop/os_exchange_data_provider_non_backed.cc.orig	2024-04-30 23:47:29.035271000 +0000
+++ ui/base/dragdrop/os_exchange_data_provider_non_backed.cc
@@ -99,7 +99,7 @@ void OSExchangeDataProviderNonBacked::Se
 
 std::optional<std::u16string> OSExchangeDataProviderNonBacked::GetString()
     const {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (HasFile()) {
     // Various Linux file managers both pass a list of file:// URIs and set the
     // string representation to the URI. We explicitly don't want to return use
