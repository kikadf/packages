$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py.orig	2024-03-19 22:14:54.015930000 +0000
+++ third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
@@ -28,7 +28,7 @@ def init(root_src_dir, enable_style_form
     root_src_dir = os.path.abspath(root_src_dir)
 
     # Determine //buildtools/<platform>/ directory
-    if sys.platform.startswith("linux"):
+    if sys.platform.startswith(("linux","openbsd","freebsd","netbsd")):
         platform = "linux64"
         exe_suffix = ""
     elif sys.platform.startswith("darwin"):
