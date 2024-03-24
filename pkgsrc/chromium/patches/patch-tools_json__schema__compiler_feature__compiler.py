$NetBSD$

* Part of patchset to build on NetBSD

--- tools/json_schema_compiler/feature_compiler.py.orig	2024-03-19 22:15:25.570745000 +0000
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
