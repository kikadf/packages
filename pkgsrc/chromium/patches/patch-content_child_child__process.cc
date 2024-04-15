$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/child/child_process.cc.orig	2024-04-10 21:24:52.401257800 +0000
+++ content/child/child_process.cc
@@ -66,7 +66,7 @@ ChildProcess::ChildProcess(base::ThreadT
                                thread_pool_init_params)
     : resetter_(&child_process, this, nullptr),
       io_thread_(std::make_unique<ChildIOThread>()) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   const base::CommandLine& command_line =
       *base::CommandLine::ForCurrentProcess();
   const bool is_embedded_in_browser_process =
