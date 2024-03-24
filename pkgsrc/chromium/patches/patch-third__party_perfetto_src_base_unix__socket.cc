$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/perfetto/src/base/unix_socket.cc.orig	2024-03-19 22:16:16.659302700 +0000
+++ third_party/perfetto/src/base/unix_socket.cc
@@ -44,7 +44,7 @@
 #include <unistd.h>
 #endif
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__) || defined(__NetBSD__)
 #include <sys/ucred.h>
 #endif
 
@@ -917,9 +917,13 @@ void UnixSocket::ReadPeerCredentialsPosi
     return;
   PERFETTO_CHECK(peer_cred_mode_ != SockPeerCredMode::kIgnore);
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
+  struct sockpeercred user_cred;
+#else
   struct ucred user_cred;
+#endif
   socklen_t len = sizeof(user_cred);
   int fd = sock_raw_.fd();
   int res = getsockopt(fd, SOL_SOCKET, SO_PEERCRED, &user_cred, &len);
