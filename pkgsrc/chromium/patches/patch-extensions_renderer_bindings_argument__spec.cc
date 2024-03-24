$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/renderer/bindings/argument_spec.cc.orig	2024-03-19 22:14:45.171140700 +0000
+++ extensions/renderer/bindings/argument_spec.cc
@@ -18,6 +18,8 @@
 #include "gin/data_object_builder.h"
 #include "gin/dictionary.h"
 
+#include <cmath>
+
 namespace extensions {
 
 namespace {
