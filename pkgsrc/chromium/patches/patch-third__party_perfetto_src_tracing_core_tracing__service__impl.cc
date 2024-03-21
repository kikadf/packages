$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/perfetto/src/tracing/core/tracing_service_impl.cc.orig	2024-03-06 00:16:06.813432000 +0000
+++ third_party/perfetto/src/tracing/core/tracing_service_impl.cc
@@ -3244,7 +3244,8 @@ bool TracingServiceImpl::SnapshotClocks(
 
 #if !PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) && \
     !PERFETTO_BUILDFLAG(PERFETTO_OS_WIN) &&   \
-    !PERFETTO_BUILDFLAG(PERFETTO_OS_NACL)
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_NACL) && \
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
   struct {
     clockid_t id;
     protos::pbzero::BuiltinClock type;
