$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/omnibox/omnibox_view_views.cc.orig	2024-05-21 22:42:54.008799300 +0000
+++ chrome/browser/ui/views/omnibox/omnibox_view_views.cc
@@ -1951,7 +1951,7 @@ void OmniboxViewViews::MaybeAddSendTabTo
 }
 
 void OmniboxViewViews::OnPopupOpened() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // It's not great for promos to overlap the omnibox if the user opens the
   // drop-down after showing the promo. This especially causes issues on Mac and
   // Linux due to z-order/rendering issues, see crbug.com/1225046 and
