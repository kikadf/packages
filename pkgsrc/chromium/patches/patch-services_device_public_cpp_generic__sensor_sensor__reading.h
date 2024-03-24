$NetBSD$

* Part of patchset to build on NetBSD

--- services/device/public/cpp/generic_sensor/sensor_reading.h.orig	2024-03-19 22:14:51.959746400 +0000
+++ services/device/public/cpp/generic_sensor/sensor_reading.h
@@ -8,6 +8,8 @@
 #include <stddef.h>
 #include <stdint.h>
 
+#include <cstdint>
+
 #include <type_traits>
 
 namespace device {
