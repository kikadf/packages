$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/x/generated_protos/dri3.cc.orig	2024-04-10 21:25:25.307880200 +0000
+++ ui/gfx/x/generated_protos/dri3.cc
@@ -27,6 +27,8 @@
 #include <xcb/xcb.h>
 #include <xcb/xcbext.h>
 
+#include <unistd.h>
+
 #include "base/logging.h"
 #include "base/posix/eintr_wrapper.h"
 #include "ui/gfx/x/connection.h"
