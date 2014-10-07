/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PDCP_Capability_r6_H_
#define	_PDCP_Capability_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <NULL.h>
#include "MaxHcContextSpace-r5.h"
#include <constr_CHOICE.h>
#include "MaxROHC-ContextSessions-r4.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Capability_r6__losslessDLRLC_PDUSizeChange {
	PDCP_Capability_r6__losslessDLRLC_PDUSizeChange_true	= 0
} e_PDCP_Capability_r6__losslessDLRLC_PDUSizeChange;
typedef enum PDCP_Capability_r6__supportForRfc2507_PR {
	PDCP_Capability_r6__supportForRfc2507_PR_NOTHING,	/* No components present */
	PDCP_Capability_r6__supportForRfc2507_PR_notSupported,
	PDCP_Capability_r6__supportForRfc2507_PR_supported
} PDCP_Capability_r6__supportForRfc2507_PR;
typedef enum PDCP_Capability_r6__supportForRfc3095_PR {
	PDCP_Capability_r6__supportForRfc3095_PR_NOTHING,	/* No components present */
	PDCP_Capability_r6__supportForRfc3095_PR_notSupported,
	PDCP_Capability_r6__supportForRfc3095_PR_supported
} PDCP_Capability_r6__supportForRfc3095_PR;

/* PDCP-Capability-r6 */
typedef struct PDCP_Capability_r6 {
	BOOLEAN_t	 losslessSRNS_RelocationSupport;
	long	*losslessDLRLC_PDUSizeChange	/* OPTIONAL */;
	struct PDCP_Capability_r6__supportForRfc2507 {
		PDCP_Capability_r6__supportForRfc2507_PR present;
		union PDCP_Capability_r6__supportForRfc2507_u {
			NULL_t	 notSupported;
			MaxHcContextSpace_r5_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportForRfc2507;
	struct PDCP_Capability_r6__supportForRfc3095 {
		PDCP_Capability_r6__supportForRfc3095_PR present;
		union PDCP_Capability_r6__supportForRfc3095_u {
			NULL_t	 notSupported;
			struct PDCP_Capability_r6__supportForRfc3095__supported {
				MaxROHC_ContextSessions_r4_t	*maxROHC_ContextSessions	/* DEFAULT 4 */;
				long	 reverseCompressionDepth	/* DEFAULT 0 */;
				BOOLEAN_t	 supportForRfc3095ContextRelocation;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportForRfc3095;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Capability_r6_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_losslessDLRLC_PDUSizeChange_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Capability_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Capability_r6_H_ */
#include <asn_internal.h>