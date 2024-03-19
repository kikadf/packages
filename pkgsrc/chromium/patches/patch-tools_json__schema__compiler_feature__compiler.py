$NetBSD$

--- tools/json_schema_compiler/feature_compiler.py.orig	2024-03-06 00:15:19.537327800 +0000
+++ tools/json_schema_compiler/feature_compiler.py
@@ -276,6 +276,9 @@ FEATURE_GRAMMAR = ({
                 'linux': 'Feature::LINUX_PLATFORM',
                 'mac': 'Feature::MACOSX_PLATFORM',
                 'win': 'Feature::WIN_PLATFORM',
+                'openbsd': 'Feature::LINUX_PLATFORM',
+                'freebsd': 'Feature::LINUX_PLATFORM',
+                'netbsd': 'Feature::LINUX_PLATFORM',
             }
         }
     },
