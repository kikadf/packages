$NetBSD$

* Part of patchset to build on NetBSD

--- services/device/geolocation/location_arbitrator.cc.orig	2024-03-19 22:14:51.947745300 +0000
+++ services/device/geolocation/location_arbitrator.cc
@@ -194,7 +194,7 @@ LocationArbitrator::NewNetworkLocationPr
 
 std::unique_ptr<LocationProvider>
 LocationArbitrator::NewSystemLocationProvider() {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   return nullptr;
 #else
   return device::NewSystemLocationProvider(main_task_runner_,
