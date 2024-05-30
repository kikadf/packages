$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/blink/renderer/platform/graphics/video_frame_submitter.cc.orig	2024-05-21 22:43:10.790295800 +0000
+++ third_party/blink/renderer/platform/graphics/video_frame_submitter.cc
@@ -407,7 +407,7 @@ void VideoFrameSubmitter::OnBeginFrame(
       continue;
     auto& feedback =
         timing_details.find(frame_token)->value.presentation_feedback;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // TODO: On Linux failure flag is unreliable, and perfectly rendered frames
     // are reported as failures all the time.
     bool presentation_failure = false;
