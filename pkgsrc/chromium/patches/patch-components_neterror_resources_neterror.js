$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/neterror/resources/neterror.js.orig	2024-05-21 22:42:58.289181000 +0000
+++ components/neterror/resources/neterror.js
@@ -142,7 +142,7 @@ function detailsButtonClick() {
 
 let primaryControlOnLeft = true;
 // clang-format off
-// <if expr="is_macosx or is_ios or is_linux or is_chromeos or is_android">
+// <if expr="is_macosx or is_ios or is_posix or is_chromeos or is_android">
 // clang-format on
 primaryControlOnLeft = false;
 // </if>
