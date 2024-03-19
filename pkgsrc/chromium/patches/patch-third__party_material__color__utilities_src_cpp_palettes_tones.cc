$NetBSD$

--- third_party/material_color_utilities/src/cpp/palettes/tones.cc.orig	2024-03-06 00:15:34.394617600 +0000
+++ third_party/material_color_utilities/src/cpp/palettes/tones.cc
@@ -14,6 +14,8 @@
  * limitations under the License.
  */
 
+#include <cmath>
+
 #include "cpp/palettes/tones.h"
 
 #include "cpp/cam/cam.h"
