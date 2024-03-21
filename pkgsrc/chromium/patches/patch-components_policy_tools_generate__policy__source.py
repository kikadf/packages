$NetBSD$

* Part of patchset to build on NetBSD

--- components/policy/tools/generate_policy_source.py.orig	2024-03-06 00:14:48.426627000 +0000
+++ components/policy/tools/generate_policy_source.py
@@ -37,9 +37,9 @@ PLATFORM_STRINGS = {
     'ios': ['ios'],
     'fuchsia': ['fuchsia'],
     'chrome.win': ['win'],
-    'chrome.linux': ['linux'],
+    'chrome.linux': ['linux', 'openbsd', 'freebsd', 'netbsd'],
     'chrome.mac': ['mac'],
-    'chrome.*': ['win', 'mac', 'linux'],
+    'chrome.*': ['win', 'mac', 'linux', 'openbsd', 'freebsd', 'netbsd'],
     'chrome.win7': ['win'],
 }
 
