$NetBSD$

* Part of patchset to build on NetBSD

--- components/viz/service/display/skia_renderer.cc.orig	2024-03-06 00:14:50.230783700 +0000
+++ components/viz/service/display/skia_renderer.cc
@@ -1346,7 +1346,7 @@ void SkiaRenderer::ClearFramebuffer() {
   if (current_frame()->current_render_pass->has_transparent_background) {
     ClearCanvas(SkColors::kTransparent);
   } else {
-#if DCHECK_IS_ON() && !BUILDFLAG(IS_LINUX)
+#if DCHECK_IS_ON() && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
     // On DEBUG builds, opaque render passes are cleared to blue
     // to easily see regions that were not drawn on the screen.
     // ClearCavas() call causes slight pixel difference, so linux-ref and