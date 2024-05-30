$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/base/mock_network_change_notifier.cc.orig	2024-05-21 22:43:05.933862700 +0000
+++ net/base/mock_network_change_notifier.cc
@@ -103,7 +103,7 @@ MockNetworkChangeNotifier::GetCurrentCon
   return connection_cost_;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 AddressMapOwnerLinux* MockNetworkChangeNotifier::GetAddressMapOwnerInternal() {
   return address_map_owner_;
 }
