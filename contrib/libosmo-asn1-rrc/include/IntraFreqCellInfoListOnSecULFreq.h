/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFreqCellInfoListOnSecULFreq_H_
#define	_IntraFreqCellInfoListOnSecULFreq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqCellInfoListInfoOnSecULFreq.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqCellInfoListOnSecULFreq */
typedef struct IntraFreqCellInfoListOnSecULFreq {
	IntraFreqCellInfoListInfoOnSecULFreq_t	 intraFreqCellInfoListOnSecULFreq;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqCellInfoListOnSecULFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqCellInfoListOnSecULFreq;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqCellInfoListOnSecULFreq_H_ */
#include <asn_internal.h>