$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- extensions/renderer/bindings/argument_spec.cc.orig	2024-05-09 21:46:52.114941400 +0000
+++ extensions/renderer/bindings/argument_spec.cc
@@ -18,6 +18,8 @@
 #include "gin/data_object_builder.h"
 #include "gin/dictionary.h"
 
+#include <cmath>
+
 namespace extensions {
 
 namespace {
