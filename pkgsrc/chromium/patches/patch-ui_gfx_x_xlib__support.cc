$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/x/xlib_support.cc.orig	2024-03-06 00:15:20.733431600 +0000
+++ ui/gfx/x/xlib_support.cc
@@ -39,10 +39,18 @@ void InitXlib() {
     return;
   }
 
+#if BUILDFLAG(IS_BSD)
+  CHECK(xlib_loader->Load("libX11.so"));
+#else
   CHECK(xlib_loader->Load("libX11.so.6"));
+#endif
 
   auto* xlib_xcb_loader = GetXlibXcbLoader();
+#if BUILDFLAG(IS_BSD)
+  CHECK(xlib_xcb_loader->Load("libX11-xcb.so"));
+#else
   CHECK(xlib_xcb_loader->Load("libX11-xcb.so.1"));
+#endif
 
   CHECK(xlib_loader->XInitThreads());
 