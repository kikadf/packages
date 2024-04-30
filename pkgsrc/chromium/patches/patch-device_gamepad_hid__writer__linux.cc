$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- device/gamepad/hid_writer_linux.cc.orig	2024-04-15 20:33:58.734195700 +0000
+++ device/gamepad/hid_writer_linux.cc
@@ -2,6 +2,8 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#include <unistd.h>
+
 #include "device/gamepad/hid_writer_linux.h"
 
 #include <unistd.h>
