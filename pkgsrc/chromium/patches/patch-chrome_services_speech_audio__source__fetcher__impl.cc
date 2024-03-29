$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/services/speech/audio_source_fetcher_impl.cc.orig	2024-03-19 22:14:35.026235800 +0000
+++ chrome/services/speech/audio_source_fetcher_impl.cc
@@ -129,7 +129,7 @@ void AudioSourceFetcherImpl::Start(
 
   // TODO(crbug.com/1185978): Check implementation / sandbox policy on Mac and
   // Windows.
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   is_started_ = true;
   // Initialize the AudioCapturerSource with |this| as the CaptureCallback,
   // get the parameters for the device ID, then start audio capture.
