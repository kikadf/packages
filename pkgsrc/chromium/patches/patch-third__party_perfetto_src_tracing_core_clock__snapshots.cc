$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/perfetto/src/tracing/core/clock_snapshots.cc.orig	2024-04-30 23:48:23.605163300 +0000
+++ third_party/perfetto/src/tracing/core/clock_snapshots.cc
@@ -26,7 +26,8 @@ ClockSnapshotVector CaptureClockSnapshot
   ClockSnapshotVector snapshot_data;
 #if !PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) && \
     !PERFETTO_BUILDFLAG(PERFETTO_OS_WIN) &&   \
-    !PERFETTO_BUILDFLAG(PERFETTO_OS_NACL)
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_NACL) &&  \
+    !PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
   struct {
     clockid_t id;
     protos::pbzero::BuiltinClock type;
