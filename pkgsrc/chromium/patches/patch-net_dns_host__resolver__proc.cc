$NetBSD$

--- net/dns/host_resolver_proc.cc.orig	2020-07-15 18:56:00.000000000 +0000
+++ net/dns/host_resolver_proc.cc
@@ -159,7 +159,7 @@ int SystemHostResolverCall(const std::st
   base::ScopedBlockingCall scoped_blocking_call(FROM_HERE,
                                                 base::BlockingType::WILL_BLOCK);
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_OPENBSD) && \
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD) && \
     !defined(OS_ANDROID) && !defined(OS_FUCHSIA)
   DnsReloaderMaybeReload();
 #endif
