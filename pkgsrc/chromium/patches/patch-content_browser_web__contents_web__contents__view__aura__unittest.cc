$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/web_contents/web_contents_view_aura_unittest.cc.orig	2024-05-21 22:43:01.277447500 +0000
+++ content/browser/web_contents/web_contents_view_aura_unittest.cc
@@ -97,7 +97,7 @@ class TestDragDropClient : public aura::
     drag_drop_data_ = std::move(data);
     return DragOperation::kCopy;
   }
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void UpdateDragImage(const gfx::ImageSkia& image,
                        const gfx::Vector2d& offset) override {}
 #endif