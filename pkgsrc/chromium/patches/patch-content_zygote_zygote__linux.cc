$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/zygote/zygote_linux.cc.orig	2024-05-21 22:43:02.129523500 +0000
+++ content/zygote/zygote_linux.cc
@@ -1,6 +1,7 @@
 // Copyright 2012 The Chromium Authors
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
+#if 0
 
 #include "content/zygote/zygote_linux.h"
 
@@ -720,3 +721,4 @@ void Zygote::HandleReinitializeLoggingRe
 }
 
 }  // namespace content
+#endif
