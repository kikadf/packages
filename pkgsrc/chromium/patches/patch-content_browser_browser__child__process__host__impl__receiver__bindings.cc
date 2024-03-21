$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/browser_child_process_host_impl_receiver_bindings.cc.orig	2024-03-06 00:14:50.426800700 +0000
+++ content/browser/browser_child_process_host_impl_receiver_bindings.cc
@@ -62,7 +62,7 @@ void BrowserChildProcessHostImpl::BindHo
     }
   }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (auto r = receiver.As<mojom::ThreadTypeSwitcher>()) {
     child_thread_type_switcher_.Bind(std::move(r));
     return;
