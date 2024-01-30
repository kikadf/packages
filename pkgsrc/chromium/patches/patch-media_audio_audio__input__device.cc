$NetBSD$

--- media/audio/audio_input_device.cc.orig	2020-07-08 21:40:45.000000000 +0000
+++ media/audio/audio_input_device.cc
@@ -253,7 +253,7 @@ void AudioInputDevice::OnStreamCreated(
 // here. See comments in AliveChecker and PowerObserverHelper for details and
 // todos.
   if (detect_dead_stream_ == DeadStreamDetection::kEnabled) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   const bool stop_at_first_alive_notification = true;
   const bool pause_check_during_suspend = false;
 #else
