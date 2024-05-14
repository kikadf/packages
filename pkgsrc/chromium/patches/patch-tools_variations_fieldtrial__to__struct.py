$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- tools/variations/fieldtrial_to_struct.py.orig	2024-05-09 21:47:30.797496000 +0000
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
