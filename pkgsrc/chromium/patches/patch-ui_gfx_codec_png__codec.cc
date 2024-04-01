$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/codec/png_codec.cc.orig	2024-03-26 21:38:05.407924000 +0000
+++ ui/gfx/codec/png_codec.cc
@@ -12,7 +12,7 @@
 #include "base/metrics/histogram_macros.h"
 #include "base/notreached.h"
 #include "base/strings/string_util.h"
-#include "third_party/libpng/png.h"
+#include <png.h>
 #include "third_party/skia/include/core/SkBitmap.h"
 #include "third_party/skia/include/core/SkColorPriv.h"
 #include "third_party/skia/include/core/SkUnPreMultiply.h"
