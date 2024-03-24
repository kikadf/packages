$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/sharing_hub/sharing_hub_bubble_controller.h.orig	2024-03-19 22:14:33.990143300 +0000
+++ chrome/browser/ui/sharing_hub/sharing_hub_bubble_controller.h
@@ -37,7 +37,7 @@ class SharingHubBubbleController {
   virtual bool ShouldOfferOmniboxIcon() = 0;
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   // This method returns the set of first-party actions, which are actions
   // internal to Chrome. Third-party actions (those outside Chrome) are
   // currently not supported.
