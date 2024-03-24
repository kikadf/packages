$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/task_manager/sampling/task_manager_impl.cc.orig	2024-03-19 22:14:33.294081200 +0000
+++ chrome/browser/task_manager/sampling/task_manager_impl.cc
@@ -218,7 +218,7 @@ void TaskManagerImpl::GetUSERHandles(Tas
 }
 
 int TaskManagerImpl::GetOpenFdCount(TaskId task_id) const {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   return GetTaskGroupByTaskId(task_id)->open_fd_count();
 #else
   return -1;
