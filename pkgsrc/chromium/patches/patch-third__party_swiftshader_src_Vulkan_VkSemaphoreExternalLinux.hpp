$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/swiftshader/src/Vulkan/VkSemaphoreExternalLinux.hpp.orig	2024-04-10 21:25:38.504932000 +0000
+++ third_party/swiftshader/src/Vulkan/VkSemaphoreExternalLinux.hpp
@@ -49,13 +49,17 @@ public:
 	{
 		pthread_mutexattr_t mattr;
 		pthread_mutexattr_init(&mattr);
+#if 0
 		pthread_mutexattr_setpshared(&mattr, PTHREAD_PROCESS_SHARED);
+#endif
 		pthread_mutex_init(&mutex, &mattr);
 		pthread_mutexattr_destroy(&mattr);
 
 		pthread_condattr_t cattr;
 		pthread_condattr_init(&cattr);
+#if 0
 		pthread_condattr_setpshared(&cattr, PTHREAD_PROCESS_SHARED);
+#endif
 		pthread_cond_init(&cond, &cattr);
 		pthread_condattr_destroy(&cattr);
 	}