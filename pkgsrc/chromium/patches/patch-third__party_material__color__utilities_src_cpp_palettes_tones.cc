$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/material_color_utilities/src/cpp/palettes/tones.cc.orig	2024-05-21 22:45:55.444975900 +0000
+++ third_party/material_color_utilities/src/cpp/palettes/tones.cc
@@ -14,6 +14,8 @@
  * limitations under the License.
  */
 
+#include <cmath>
+
 #include "cpp/palettes/tones.h"
 
 #include <cmath>
