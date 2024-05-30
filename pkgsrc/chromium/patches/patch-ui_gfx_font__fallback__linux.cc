$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/font_fallback_linux.cc.orig	2024-05-21 22:43:36.108554000 +0000
+++ ui/gfx/font_fallback_linux.cc
@@ -27,6 +27,8 @@
 #include "ui/gfx/linux/fontconfig_util.h"
 #include "ui/gfx/platform_font.h"
 
+#include <unistd.h>
+
 namespace gfx {
 
 namespace {
