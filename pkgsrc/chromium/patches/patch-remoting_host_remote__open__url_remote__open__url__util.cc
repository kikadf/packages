$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/remote_open_url/remote_open_url_util.cc.orig	2024-03-06 00:14:57.423408000 +0000
+++ remoting/host/remote_open_url/remote_open_url_util.cc
@@ -29,7 +29,7 @@ const wchar_t kRegisteredApplicationsKey
 #endif  // BUILDFLAG(IS_WIN)
 
 bool IsRemoteOpenUrlSupported() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return true;
 #elif BUILDFLAG(IS_WIN)
   // The MSI installs the ProgID and capabilities into registry, but not the
