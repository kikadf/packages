$NetBSD$

* Part of patchset to build on NetBSD

--- base/threading/platform_thread_bsd.cc.orig	2024-03-24 15:39:33.913930600 +0000
+++ base/threading/platform_thread_bsd.cc
@@ -0,0 +1,31 @@
+// Copyright 2023 The Chromium Authors
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+// Description: These are stubs for *BSD.
+
+#include "base/threading/platform_thread.h"
+
+namespace base {
+namespace internal {
+
+bool CanSetThreadTypeToRealtimeAudio() {
+  return false;
+}
+
+bool SetCurrentThreadTypeForPlatform(ThreadType thread_type,
+                                MessagePumpType pump_type_hint) {
+  return false;
+}
+
+absl::optional<ThreadPriorityForTest>
+GetCurrentThreadPriorityForPlatformForTest() {
+  return absl::nullopt;
+}
+}  // namespace internal
+
+// static
+void PlatformThreadBase::SetName(const std::string& name) {
+  SetNameCommon(name);
+}
+
+}  // namespace base
