$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/flag_descriptions.cc.orig	2024-03-06 00:14:41.161996400 +0000
+++ chrome/browser/flag_descriptions.cc
@@ -2895,7 +2895,7 @@ const char kCbdTimeframeRequiredDescript
     "value to the list.";
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS_ASH)
+    BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
 const char kPolicyIndicationForManagedDefaultSearchName[] =
     "Enable policy indication for managed Default Search provider";
 const char kPolicyIndicationForManagedDefaultSearchDescription[] =
@@ -3213,7 +3213,7 @@ const char kSiteInstanceGroupsForDataUrl
     "but in the same SiteInstanceGroup, and thus the same process.";
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS_ASH)
+    BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
 const char kSiteSearchSettingsPolicyName[] = "Enable SiteSearchSettings policy";
 const char kSiteSearchSettingsPolicyDescription[] =
     "Allow site search engines to be defined by the SiteSearchSettings policy.";
@@ -7387,7 +7387,7 @@ const char kLacrosMergeIcuDataFileDescri
     "Enables sharing common areas of icudtl.dat between Ash and Lacros.";
 #endif  // #if BUILDFLAG(IS_CHROMEOS_LACROS)
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const char kGetAllScreensMediaName[] = "GetAllScreensMedia API";
 const char kGetAllScreensMediaDescription[] =
     "When enabled, the getAllScreensMedia API for capturing multiple screens "
@@ -7633,7 +7633,7 @@ const char kV4L2FlatStatefulVideoDecoder
 
 // Linux -----------------------------------------------------------------------
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const char kOzonePlatformHintChoiceDefault[] = "Default";
 const char kOzonePlatformHintChoiceAuto[] = "Auto";
 const char kOzonePlatformHintChoiceX11[] = "X11";
@@ -7681,7 +7681,7 @@ const char kZeroCopyVideoCaptureDescript
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 const char kQuickCommandsName[] = "Quick Commands";
 const char kQuickCommandsDescription[] =
     "Enable a text interface to browser features. Invoke with Ctrl-Space.";
@@ -7690,7 +7690,7 @@ const char kQuickCommandsDescription[] =
         // BUILDFLAG(IS_FUCHSIA)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 const char kFollowingFeedSidepanelName[] = "Following feed in the sidepanel";
 const char kFollowingFeedSidepanelDescription[] =
     "Enables the following feed in the sidepanel.";
@@ -7705,7 +7705,7 @@ const char kEnableProtoApiForClassifyUrl
     "instead of JSON.";
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 const char kEnableNetworkServiceSandboxName[] =
     "Enable the network service sandbox.";
 const char kEnableNetworkServiceSandboxDescription[] =
@@ -7737,7 +7737,7 @@ const char kWebBluetoothConfirmPairingSu
     "Bluetooth";
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
 const char kSkipUndecryptablePasswordsName[] =
     "Skip undecryptable passwords to use the available decryptable "
     "passwords.";
@@ -7757,7 +7757,7 @@ const char kRestartToGainAccessToKeychai
     "to restart Chrome to gain access to computer's password manager.";
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const char kAsyncDnsName[] = "Async DNS resolver";
 const char kAsyncDnsDescription[] = "Enables the built-in DNS resolver.";
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
@@ -7858,7 +7858,7 @@ const char kElementCaptureDescription[] 
 
 #if BUILDFLAG(IS_WIN) ||                                      \
     (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || \
-    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 const char kUIDebugToolsName[] = "Debugging tools for UI";
 const char kUIDebugToolsDescription[] =
     "Enables additional keyboard shortcuts to help debugging.";
@@ -7910,7 +7910,7 @@ const char kComposeName[] = "CCO Edits";
 const char kComposeDescription[] = "Enables CCO editing feature";
 #endif  // BUILDFLAG(ENABLE_COMPOSE)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 const char kThirdPartyProfileManagementName[] =
     "Third party profile management";
 const char kThirdPartyProfileManagementDescription[] =