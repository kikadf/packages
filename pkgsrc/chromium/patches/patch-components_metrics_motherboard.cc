$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/metrics/motherboard.cc.orig	2024-04-15 20:33:54.837909700 +0000
+++ components/metrics/motherboard.cc
@@ -1,6 +1,7 @@
 // Copyright 2022 The Chromium Authors
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
+// CHECK
 
 #include "components/metrics/motherboard.h"
 
