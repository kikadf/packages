$NetBSD$

* Part of patchset to build on NetBSD

--- tools/variations/fieldtrial_to_struct.py.orig	2024-03-19 22:15:26.362815600 +0000
+++ tools/variations/fieldtrial_to_struct.py
@@ -41,6 +41,9 @@ _platforms = [
     'linux',
     'mac',
     'windows',
+    'openbsd',
+    'freebsd',
+    'netbsd',
 ]
 
 _form_factors = [
