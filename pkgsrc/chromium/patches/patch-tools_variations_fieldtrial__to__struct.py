$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- tools/variations/fieldtrial_to_struct.py.orig	2024-04-10 21:25:24.439811000 +0000
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
