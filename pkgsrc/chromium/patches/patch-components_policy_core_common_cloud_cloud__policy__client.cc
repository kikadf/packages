$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/policy/core/common/cloud/cloud_policy_client.cc.orig	2024-05-21 22:42:58.697217500 +0000
+++ components/policy/core/common/cloud/cloud_policy_client.cc
@@ -597,7 +597,7 @@ void CloudPolicyClient::FetchPolicy(Poli
         fetch_request->set_invalidation_payload(invalidation_payload_);
       }
     }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // Only set browser device identifier for CBCM Chrome cloud policy on
     // desktop.
     if (type_to_fetch.first ==
