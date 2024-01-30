$NetBSD$

--- components/feedback/anonymizer_tool.cc.orig	2020-07-08 21:40:39.000000000 +0000
+++ components/feedback/anonymizer_tool.cc
@@ -15,7 +15,7 @@
 #include "base/threading/thread_restrictions.h"
 #include "content/public/browser/browser_thread.h"
 #include "net/base/ip_address.h"
-#include "third_party/re2/src/re2/re2.h"
+#include <re2/re2.h>
 
 using re2::RE2;
 
