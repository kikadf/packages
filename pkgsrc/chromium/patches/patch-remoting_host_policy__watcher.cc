$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/policy_watcher.cc.orig	2024-03-19 22:14:51.739726800 +0000
+++ remoting/host/policy_watcher.cc
@@ -192,7 +192,7 @@ base::Value::Dict PolicyWatcher::GetDefa
              true);
   result.Set(key::kRemoteAccessHostAllowEnterpriseFileTransfer, false);
 #endif
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   result.Set(key::kRemoteAccessHostMatchUsername, false);
 #endif
 #if !BUILDFLAG(IS_CHROMEOS)
