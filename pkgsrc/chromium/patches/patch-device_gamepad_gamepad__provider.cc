$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- device/gamepad/gamepad_provider.cc.orig	2024-04-30 23:46:56.771787200 +0000
+++ device/gamepad/gamepad_provider.cc
@@ -219,7 +219,7 @@ void GamepadProvider::Initialize(std::un
 
   if (!polling_thread_)
     polling_thread_ = std::make_unique<base::Thread>("Gamepad polling thread");
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // On Linux, the data fetcher needs to watch file descriptors, so the message
   // loop needs to be a libevent loop.
   const base::MessagePumpType kMessageLoopType = base::MessagePumpType::IO;
