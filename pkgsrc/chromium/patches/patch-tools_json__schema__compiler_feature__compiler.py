$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- tools/json_schema_compiler/feature_compiler.py.orig	2024-05-21 22:43:34.664425100 +0000
+++ tools/json_schema_compiler/feature_compiler.py
@@ -277,6 +277,9 @@ FEATURE_GRAMMAR = ({
                 'linux': 'Feature::LINUX_PLATFORM',
                 'mac': 'Feature::MACOSX_PLATFORM',
                 'win': 'Feature::WIN_PLATFORM',
+                'openbsd': 'Feature::LINUX_PLATFORM',
+                'freebsd': 'Feature::LINUX_PLATFORM',
+                'netbsd': 'Feature::LINUX_PLATFORM',
             }
         }
     },
