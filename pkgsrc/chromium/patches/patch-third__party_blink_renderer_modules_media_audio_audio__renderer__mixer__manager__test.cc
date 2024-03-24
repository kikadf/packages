$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/modules/media/audio/audio_renderer_mixer_manager_test.cc.orig	2024-03-19 22:14:55.580069300 +0000
+++ third_party/blink/renderer/modules/media/audio/audio_renderer_mixer_manager_test.cc
@@ -726,7 +726,7 @@ TEST_F(AudioRendererMixerManagerTest, Mi
             mixer->get_output_params_for_testing().sample_rate());
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_APPLE) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   // Use 10 ms buffer (441 frames per buffer).
   EXPECT_EQ(output_sample_rate / 100,
             mixer->get_output_params_for_testing().frames_per_buffer());
