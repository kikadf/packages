$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/node/node.py.orig	2024-03-19 22:15:22.382460600 +0000
+++ third_party/node/node.py
@@ -16,6 +16,9 @@ def GetBinaryPath():
   return os_path.join(os_path.dirname(__file__), *{
     'Darwin': ('mac', darwin_name, 'bin', 'node'),
     'Linux': ('linux', 'node-linux-x64', 'bin', 'node'),
+    'OpenBSD': ('openbsd', 'node-openbsd', 'bin', 'node'),
+    'NetBSD': ('netbsd', 'node-netbsd', 'bin', 'node'),
+    'FreeBSD': ('freebsd', 'node-freebsd', 'bin', 'node'),
     'Windows': ('win', 'node.exe'),
   }[platform.system()])
 
