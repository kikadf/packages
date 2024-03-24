$NetBSD$

* Part of patchset to build on NetBSD

--- components/omnibox/browser/omnibox_edit_model.cc.orig	2024-03-19 22:14:39.230610800 +0000
+++ components/omnibox/browser/omnibox_edit_model.cc
@@ -24,6 +24,7 @@
 #include "base/trace_event/typed_macros.h"
 #include "build/branding_buildflags.h"
 #include "build/build_config.h"
+#include "build/branding_buildflags.h"
 #include "components/bookmarks/browser/bookmark_model.h"
 #include "components/dom_distiller/core/url_constants.h"
 #include "components/dom_distiller/core/url_utils.h"
