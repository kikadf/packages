$NetBSD$

* Part of patchset to build on NetBSD

--- net/base/mock_network_change_notifier.cc.orig	2024-03-19 22:14:50.455612200 +0000
+++ net/base/mock_network_change_notifier.cc
@@ -103,7 +103,7 @@ MockNetworkChangeNotifier::GetCurrentCon
   return connection_cost_;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 AddressMapOwnerLinux* MockNetworkChangeNotifier::GetAddressMapOwnerInternal() {
   return address_map_owner_;
 }
