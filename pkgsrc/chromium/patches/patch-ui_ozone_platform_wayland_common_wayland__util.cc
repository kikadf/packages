$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/common/wayland_util.cc.orig	2024-03-19 22:15:27.494916700 +0000
+++ ui/ozone/platform/wayland/common/wayland_util.cc
@@ -335,7 +335,7 @@ void TransformToWlArray(
 }
 
 base::TimeTicks EventMillisecondsToTimeTicks(uint32_t milliseconds) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // TODO(crbug.com/1499638): `milliseconds` comes from Weston that
   // uses timestamp from libinput, which is different from TimeTicks.
   // Use EventTimeForNow(), for now.
