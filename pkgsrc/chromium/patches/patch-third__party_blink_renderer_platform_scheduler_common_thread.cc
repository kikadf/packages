$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/platform/scheduler/common/thread.cc.orig	2024-03-06 00:15:00.531678000 +0000
+++ third_party/blink/renderer/platform/scheduler/common/thread.cc
@@ -82,7 +82,7 @@ void Thread::CreateAndSetCompositorThrea
       std::make_unique<scheduler::CompositorThread>(params);
   compositor_thread->Init();
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) && !BUILDFLAG(IS_OPENBSD)
   compositor_thread->GetTaskRunner()->PostTaskAndReplyWithResult(
       FROM_HERE, base::BindOnce(&base::PlatformThread::CurrentId),
       base::BindOnce([](base::PlatformThreadId compositor_thread_id) {