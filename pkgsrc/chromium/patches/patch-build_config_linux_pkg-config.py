$NetBSD$

* Part of patchset to build on NetBSD

--- build/config/linux/pkg-config.py.orig	2024-03-19 22:14:27.417557000 +0000
+++ build/config/linux/pkg-config.py
@@ -108,7 +108,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if "linux" not in sys.platform:
+  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd', 'netbsd'])):
     print("[[],[],[],[],[]]")
     return 0
 
