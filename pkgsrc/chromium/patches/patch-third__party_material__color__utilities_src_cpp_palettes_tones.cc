$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/material_color_utilities/src/cpp/palettes/tones.cc.orig	2024-03-19 22:15:39.591996000 +0000
+++ third_party/material_color_utilities/src/cpp/palettes/tones.cc
@@ -14,6 +14,8 @@
  * limitations under the License.
  */
 
+#include <cmath>
+
 #include "cpp/palettes/tones.h"
 
 #include <cmath>
