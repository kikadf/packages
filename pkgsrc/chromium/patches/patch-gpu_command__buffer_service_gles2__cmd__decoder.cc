$NetBSD$

* Part of patchset to build on NetBSD

--- gpu/command_buffer/service/gles2_cmd_decoder.cc.orig	2024-03-06 00:14:52.847010900 +0000
+++ gpu/command_buffer/service/gles2_cmd_decoder.cc
@@ -2999,7 +2999,7 @@ GLES2Decoder* GLES2Decoder::Create(
   }
 
 // Allow linux to run fuzzers.
-#if BUILDFLAG(ENABLE_VALIDATING_COMMAND_DECODER) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(ENABLE_VALIDATING_COMMAND_DECODER) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return new GLES2DecoderImpl(client, command_buffer_service, outputter, group);
 #else
   LOG(FATAL) << "Validating command decoder is not supported.";