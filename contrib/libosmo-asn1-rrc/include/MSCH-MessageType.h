/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "../asn/Class-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MSCH_MessageType_H_
#define	_MSCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMSSchedulingInformation.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MSCH_MessageType_PR {
	MSCH_MessageType_PR_NOTHING,	/* No components present */
	MSCH_MessageType_PR_mbmsSchedulingInformation,
	MSCH_MessageType_PR_spare3,
	MSCH_MessageType_PR_spare2,
	MSCH_MessageType_PR_spare1
} MSCH_MessageType_PR;

/* MSCH-MessageType */
typedef struct MSCH_MessageType {
	MSCH_MessageType_PR present;
	union MSCH_MessageType_u {
		MBMSSchedulingInformation_t	 mbmsSchedulingInformation;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MSCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MSCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _MSCH_MessageType_H_ */
#include <asn_internal.h>
