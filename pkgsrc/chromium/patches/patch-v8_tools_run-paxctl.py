$NetBSD$

* Part of patchset to build on NetBSD

--- v8/tools/run-paxctl.py.orig	2024-03-21 18:08:02.439457540 +0000
+++ v8/tools/run-paxctl.py
@@ -0,0 +1,16 @@
+@PLACEHOLDER@
+# Copyright 2014 the V8 project authors. All rights reserved.
+# Use of this source code is governed by a BSD-style license that can be
+# found in the LICENSE file.
+
+"""This program wraps an arbitrary command since gn currently can only execute
+scripts."""
+
+import subprocess
+import sys
+import os
+
+with open(sys.argv[1], 'w'):
+  os.utime(sys.argv[1], None)
+
+sys.exit(subprocess.call(sys.argv[2:]))
\ No newline at end of file