$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- extensions/renderer/bindings/argument_spec.cc.orig	2024-05-21 22:43:02.765580200 +0000
+++ extensions/renderer/bindings/argument_spec.cc
@@ -18,6 +18,8 @@
 #include "gin/data_object_builder.h"
 #include "gin/dictionary.h"
 
+#include <cmath>
+
 namespace extensions {
 
 namespace {
