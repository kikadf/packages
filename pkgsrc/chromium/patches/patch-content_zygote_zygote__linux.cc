$NetBSD$

* Part of patchset to build on NetBSD

--- content/zygote/zygote_linux.cc.orig	2024-03-19 22:14:44.399072000 +0000
+++ content/zygote/zygote_linux.cc
@@ -1,6 +1,7 @@
 // Copyright 2012 The Chromium Authors
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
+#if 0
 
 #include "content/zygote/zygote_linux.h"
 
@@ -717,3 +718,4 @@ void Zygote::HandleReinitializeLoggingRe
 }
 
 }  // namespace content
+#endif
