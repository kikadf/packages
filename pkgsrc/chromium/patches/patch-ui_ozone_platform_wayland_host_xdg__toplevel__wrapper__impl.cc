$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/host/xdg_toplevel_wrapper_impl.cc.orig	2024-03-06 00:15:20.837440700 +0000
+++ ui/ozone/platform/wayland/host/xdg_toplevel_wrapper_impl.cc
@@ -315,7 +315,7 @@ void XDGToplevelWrapperImpl::OnToplevelC
   window_states.is_activated =
       CheckIfWlArrayHasValue(states, XDG_TOPLEVEL_STATE_ACTIVATED);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (xdg_toplevel_get_version(toplevel) >=
       XDG_TOPLEVEL_STATE_TILED_LEFT_SINCE_VERSION) {
     // All four tiled states have the same since version, so it is enough to