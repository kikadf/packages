$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/net/system_network_context_manager.cc.orig	2024-03-06 00:14:41.422019000 +0000
+++ chrome/browser/net/system_network_context_manager.cc
@@ -92,7 +92,7 @@
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 #include "chrome/common/chrome_paths_internal.h"
 #include "chrome/grit/branded_strings.h"
 #include "ui/base/l10n/l10n_util.h"
@@ -137,7 +137,7 @@ SystemNetworkContextManager* g_system_ne
 // received a failed launch for a sandboxed network service.
 bool g_previously_failed_to_launch_sandboxed_service = false;
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Whether kerberos library loading will work in the network service due to the
 // sandbox.
 bool g_network_service_will_allow_gssapi_library_load = false;
@@ -145,7 +145,7 @@ bool g_network_service_will_allow_gssapi
 const char* kGssapiDesiredPref =
 #if BUILDFLAG(IS_CHROMEOS)
     prefs::kKerberosEnabled;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     prefs::kReceivedHttpAuthNegotiateHeader;
 #endif
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
@@ -191,7 +191,7 @@ network::mojom::HttpAuthDynamicParamsPtr
   auth_dynamic_params->basic_over_http_enabled =
       local_state->GetBoolean(prefs::kBasicAuthOverHttpEnabled);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   auth_dynamic_params->delegate_by_kdc_policy =
       local_state->GetBoolean(prefs::kAuthNegotiateDelegateByKdcPolicy);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS)
@@ -206,7 +206,7 @@ network::mojom::HttpAuthDynamicParamsPtr
       local_state->GetString(prefs::kAuthAndroidNegotiateAccountType);
 #endif  // BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   auth_dynamic_params->allow_gssapi_library_load =
       local_state->GetBoolean(kGssapiDesiredPref);
 #endif  // BUILDFLAG(IS_CHROMEOS)
@@ -216,7 +216,7 @@ network::mojom::HttpAuthDynamicParamsPtr
 
 void OnNewHttpAuthDynamicParams(
     network::mojom::HttpAuthDynamicParamsPtr& params) {
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // The kerberos library is incompatible with the network service sandbox, so
   // if library loading is now enabled, the network service needs to be
   // restarted. It will be restarted unsandboxed because is
@@ -258,11 +258,11 @@ NetworkSandboxState IsNetworkSandboxEnab
   if (g_previously_failed_to_launch_sandboxed_service) {
     return NetworkSandboxState::kDisabledBecauseOfFailedLaunch;
   }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   auto* local_state = g_browser_process->local_state();
 #endif
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // The network service sandbox and the kerberos library are incompatible.
   // If kerberos is enabled by policy, disable the network service sandbox.
   if (g_network_service_will_allow_gssapi_library_load ||
@@ -278,7 +278,7 @@ NetworkSandboxState IsNetworkSandboxEnab
   }
 #endif  // BUILDFLAG(IS_WIN)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (local_state &&
       local_state->HasPrefPath(prefs::kNetworkServiceSandboxEnabled)) {
     return local_state->GetBoolean(prefs::kNetworkServiceSandboxEnabled)
@@ -508,7 +508,7 @@ void SystemNetworkContextManager::Delete
   g_system_network_context_manager = nullptr;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 SystemNetworkContextManager::GssapiLibraryLoadObserver::
     GssapiLibraryLoadObserver(SystemNetworkContextManager* owner)
     : owner_(owner) {}
@@ -566,7 +566,7 @@ SystemNetworkContextManager::SystemNetwo
   pref_change_registrar_.Add(prefs::kAllHttpAuthSchemesAllowedForOrigins,
                              auth_pref_callback);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   pref_change_registrar_.Add(prefs::kAuthNegotiateDelegateByKdcPolicy,
                              auth_pref_callback);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS)
@@ -580,7 +580,7 @@ SystemNetworkContextManager::SystemNetwo
                              auth_pref_callback);
 #endif  // BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   pref_change_registrar_.Add(kGssapiDesiredPref, auth_pref_callback);
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
 
@@ -606,7 +606,7 @@ SystemNetworkContextManager::SystemNetwo
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
   pref_change_registrar_.Add(
       prefs::kEnforceLocalAnchorConstraintsEnabled,
       base::BindRepeating(&SystemNetworkContextManager::
@@ -661,7 +661,7 @@ void SystemNetworkContextManager::Regist
   registry->RegisterBooleanPref(prefs::kKerberosEnabled, false);
 #endif  // BUILDFLAG(IS_CHROMEOS_LACROS)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   registry->RegisterBooleanPref(prefs::kAuthNegotiateDelegateByKdcPolicy,
                                 false);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_CHROMEOS)
@@ -685,7 +685,7 @@ void SystemNetworkContextManager::Regist
   registry->RegisterIntegerPref(prefs::kMaxConnectionsPerProxy, -1);
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
   // Note that the default value is not relevant because the pref is only
   // evaluated when it is managed.
   registry->RegisterBooleanPref(prefs::kEnforceLocalAnchorConstraintsEnabled,
@@ -694,11 +694,11 @@ void SystemNetworkContextManager::Regist
 
   registry->RegisterListPref(prefs::kExplicitlyAllowedNetworkPorts);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   registry->RegisterBooleanPref(prefs::kNetworkServiceSandboxEnabled, true);
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   registry->RegisterBooleanPref(prefs::kReceivedHttpAuthNegotiateHeader, false);
 #endif  // BUILDFLAG(IS_LINUX)
 
@@ -751,7 +751,7 @@ void SystemNetworkContextManager::OnNetw
   OnNewHttpAuthDynamicParams(http_auth_dynamic_params);
   network_service->ConfigureHttpAuthPrefs(std::move(http_auth_dynamic_params));
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   gssapi_library_loader_observer_.Install(network_service);
 #endif  // BUILDFLAG(IS_LINUX)
 
@@ -954,7 +954,7 @@ bool SystemNetworkContextManager::IsNetw
       break;
   }
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (!enabled) {
     g_network_service_will_allow_gssapi_library_load = true;
   }
@@ -1040,7 +1040,7 @@ void SystemNetworkContextManager::Update
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 void SystemNetworkContextManager::UpdateEnforceLocalAnchorConstraintsEnabled() {
   const PrefService::Preference* enforce_local_anchor_constraints_enabled_pref =
       local_state_->FindPreference(