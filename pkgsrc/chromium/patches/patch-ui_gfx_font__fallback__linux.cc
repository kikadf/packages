$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/font_fallback_linux.cc.orig	2024-03-06 00:15:20.669426200 +0000
+++ ui/gfx/font_fallback_linux.cc
@@ -27,6 +27,8 @@
 #include "ui/gfx/linux/fontconfig_util.h"
 #include "ui/gfx/platform_font.h"
 
+#include <unistd.h>
+
 namespace gfx {
 
 namespace {
