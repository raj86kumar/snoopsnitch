/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CellChangeOrderFromUTRAN_r3_IEs_H_
#define	_CellChangeOrderFromUTRAN_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "ActivationTime.h"
#include "InterRAT-TargetCellDescription.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct RAB_InformationList;

/* CellChangeOrderFromUTRAN-r3-IEs */
typedef struct CellChangeOrderFromUTRAN_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtectionModeInfo	*dummy	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct RAB_InformationList	*rab_InformationList	/* OPTIONAL */;
	InterRAT_TargetCellDescription_t	 interRAT_TargetCellDescription;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellChangeOrderFromUTRAN_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellChangeOrderFromUTRAN_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "RAB-InformationList.h"

#endif	/* _CellChangeOrderFromUTRAN_r3_IEs_H_ */
#include <asn_internal.h>
