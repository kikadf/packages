$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/widget/root_view.cc.orig	2024-03-06 00:15:21.033457800 +0000
+++ ui/views/widget/root_view.cc
@@ -127,7 +127,7 @@ class AnnounceTextView : public View {
 #if BUILDFLAG(IS_CHROMEOS)
     // On ChromeOS, kAlert role can invoke an unnecessary event on reparenting.
     node_data->role = ax::mojom::Role::kStaticText;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // TODO(crbug.com/1024898): Use live regions (do not use alerts).
     // May require setting kLiveStatus, kContainerLiveStatus to "polite".
     node_data->role = ax::mojom::Role::kAlert;