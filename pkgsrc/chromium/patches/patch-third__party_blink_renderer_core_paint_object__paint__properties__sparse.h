$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/core/paint/object_paint_properties_sparse.h.orig	2024-03-06 00:14:59.743609400 +0000
+++ third_party/blink/renderer/core/paint/object_paint_properties_sparse.h
@@ -272,8 +272,8 @@ class CORE_EXPORT ObjectPaintPropertiesS
       NodeList& nodes,
       NodeId node_id,
       const ParentType& parent,
-      NodeType::State&& state,
-      const NodeType::AnimationState& animation_state =
+      typename NodeType::State&& state,
+      const typename NodeType::AnimationState& animation_state =
           NodeType::AnimationState()) {
     // First, check if we need to add a new node.
     if (!nodes.HasField(node_id)) {