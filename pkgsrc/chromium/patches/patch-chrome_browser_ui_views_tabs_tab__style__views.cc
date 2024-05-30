$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/tabs/tab_style_views.cc.orig	2024-05-21 22:42:54.116809000 +0000
+++ chrome/browser/ui/views/tabs/tab_style_views.cc
@@ -490,7 +490,7 @@ float GM2TabStyleViews::GetCurrentActive
   if (!IsHoverAnimationActive()) {
     return base_opacity;
   }
-  return std::lerp(base_opacity, GetHoverOpacity(), GetHoverAnimationValue());
+  return std::lerp(base_opacity, GetHoverOpacity(), static_cast<float>(GetHoverAnimationValue()));
 }
 
 TabActive GM2TabStyleViews::GetApparentActiveState() const {
