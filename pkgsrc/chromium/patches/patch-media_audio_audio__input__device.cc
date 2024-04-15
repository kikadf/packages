$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/audio/audio_input_device.cc.orig	2024-04-10 21:24:55.905537000 +0000
+++ media/audio/audio_input_device.cc
@@ -262,7 +262,7 @@ void AudioInputDevice::OnStreamCreated(
 // here. See comments in AliveChecker and PowerObserverHelper for details and
 // todos.
   if (detect_dead_stream_ == DeadStreamDetection::kEnabled) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     const bool stop_at_first_alive_notification = true;
     const bool pause_check_during_suspend = false;
 #else
