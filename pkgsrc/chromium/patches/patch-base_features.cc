$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/features.cc.orig	2024-05-21 22:42:46.636141800 +0000
+++ base/features.cc
@@ -9,7 +9,7 @@
 #include "base/threading/platform_thread.h"
 #include "build/buildflag.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 #include "base/message_loop/message_pump_libevent.h"
 #endif
 
@@ -98,7 +98,7 @@ void Init(EmitThreadControllerProfilerMe
   sequence_manager::internal::ThreadController::InitializeFeatures(
       emit_thread_controller_profiler_metadata);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
   MessagePumpLibevent::InitializeFeatures();
 #endif
 
