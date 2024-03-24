$NetBSD$

* Part of patchset to build on NetBSD

--- mojo/public/cpp/platform/socket_utils_posix.cc.orig	2024-03-19 22:14:49.831556600 +0000
+++ mojo/public/cpp/platform/socket_utils_posix.cc
@@ -29,7 +29,7 @@ bool IsRecoverableError() {
 }
 
 bool GetPeerEuid(base::PlatformFile fd, uid_t* peer_euid) {
-#if BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_NETBSD)
   uid_t socket_euid;
   gid_t socket_gid;
   if (getpeereid(fd, &socket_euid, &socket_gid) < 0) {
