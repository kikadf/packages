$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/webrtc/rtc_base/network.cc.orig	2024-03-19 22:16:26.628192200 +0000
+++ third_party/webrtc/rtc_base/network.cc
@@ -292,7 +292,12 @@ AdapterType GetAdapterTypeFromName(absl:
   }
 #endif
 
+#if defined(WEBRTC_BSD)
+  // Treat all other network interface names as ethernet on BSD
+  return ADAPTER_TYPE_ETHERNET;
+#else
   return ADAPTER_TYPE_UNKNOWN;
+#endif
 }
 
 NetworkManager::EnumerationPermission NetworkManager::enumeration_permission()
