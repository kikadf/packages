$NetBSD$

--- ui/base/cursor/cursor_factory.h.orig	2024-03-06 00:15:20.277392100 +0000
+++ ui/base/cursor/cursor_factory.h
@@ -93,7 +93,7 @@ class COMPONENT_EXPORT(UI_BASE_CURSOR) C
   base::ObserverList<CursorFactoryObserver>::Unchecked observers_;
 };
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE_CURSOR)
 std::vector<std::string> CursorNamesFromType(mojom::CursorType type);
 #endif
