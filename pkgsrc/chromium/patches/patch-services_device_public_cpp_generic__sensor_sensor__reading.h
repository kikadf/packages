$NetBSD$

--- services/device/public/cpp/generic_sensor/sensor_reading.h.orig	2024-03-06 00:14:57.635426500 +0000
+++ services/device/public/cpp/generic_sensor/sensor_reading.h
@@ -8,6 +8,8 @@
 #include <stddef.h>
 #include <stdint.h>
 
+#include <cstdint>
+
 #include <type_traits>
 
 namespace device {
