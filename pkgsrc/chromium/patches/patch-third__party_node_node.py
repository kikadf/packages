$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/node/node.py.orig	2024-05-21 22:43:31.184114700 +0000
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
 
