$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- skia/ext/skcolorspace_trfn.cc.orig	2024-04-30 23:47:02.300384000 +0000
+++ skia/ext/skcolorspace_trfn.cc
@@ -2,6 +2,8 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#include <cmath>
+
 #include "skia/ext/skcolorspace_trfn.h"
 
 #include <cmath>
