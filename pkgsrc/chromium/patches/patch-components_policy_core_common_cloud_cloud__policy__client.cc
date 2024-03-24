$NetBSD$

* Part of patchset to build on NetBSD

--- components/policy/core/common/cloud/cloud_policy_client.cc.orig	2024-03-19 22:14:39.622645900 +0000
+++ components/policy/core/common/cloud/cloud_policy_client.cc
@@ -578,7 +578,7 @@ void CloudPolicyClient::FetchPolicy(Poli
         fetch_request->set_invalidation_payload(invalidation_payload_);
       }
     }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // Only set browser device identifier for CBCM Chrome cloud policy on
     // desktop.
     if (type_to_fetch.first ==
