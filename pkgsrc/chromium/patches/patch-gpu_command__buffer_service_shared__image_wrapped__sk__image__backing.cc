$NetBSD$

--- gpu/command_buffer/service/shared_image/wrapped_sk_image_backing.cc.orig	2024-03-06 00:14:52.895015000 +0000
+++ gpu/command_buffer/service/shared_image/wrapped_sk_image_backing.cc
@@ -212,7 +212,7 @@ bool WrappedSkImageBacking::Initialize(c
 
     constexpr GrRenderable is_renderable = GrRenderable::kYes;
     constexpr GrProtected is_protected = GrProtected::kNo;
-#if DCHECK_IS_ON() && !BUILDFLAG(IS_LINUX)
+#if DCHECK_IS_ON() && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
     // Blue for single-planar and magenta-ish for multi-planar.
     SkColor4f fallback_color =
         format().is_single_plane() ? SkColors::kBlue : SkColors::kWhite;
