/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UL_SecondaryCellInfoFDD_H_
#define	_UL_SecondaryCellInfoFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_SecondaryCellInfoFDD_PR {
	UL_SecondaryCellInfoFDD_PR_NOTHING,	/* No components present */
	UL_SecondaryCellInfoFDD_PR_continue,
	UL_SecondaryCellInfoFDD_PR_newConfiguration
} UL_SecondaryCellInfoFDD_PR;

/* Forward declarations */
struct SecondaryServingEDCHCell_Info;
struct SecondaryEDCH_Info_Common;
struct DL_InformationPerSecondaryRL_List;

/* UL-SecondaryCellInfoFDD */
typedef struct UL_SecondaryCellInfoFDD {
	UL_SecondaryCellInfoFDD_PR present;
	union UL_SecondaryCellInfoFDD_u {
		NULL_t	 Continue;
		struct UL_SecondaryCellInfoFDD__newConfiguration {
			struct SecondaryServingEDCHCell_Info	*secondaryServingEDCHCell_Info	/* OPTIONAL */;
			struct SecondaryEDCH_Info_Common	*secondaryEDCH_Info_Common	/* OPTIONAL */;
			struct DL_InformationPerSecondaryRL_List	*dl_InformationPerSecondaryRL_List	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} newConfiguration;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_SecondaryCellInfoFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_SecondaryCellInfoFDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecondaryServingEDCHCell-Info.h"
#include "SecondaryEDCH-Info-Common.h"
#include "DL-InformationPerSecondaryRL-List.h"

#endif	/* _UL_SecondaryCellInfoFDD_H_ */
#include <asn_internal.h>
