/* c/zx-wsse-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_wsse_data_h
#define _c_zx_wsse_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- wsse_BinarySecurityToken -------------------------- */
/* refby( zx_wsse_Security_s ) */
#ifndef zx_wsse_BinarySecurityToken_EXT
#define zx_wsse_BinarySecurityToken_EXT
#endif

struct zx_wsse_BinarySecurityToken_s* zx_DEC_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_BinarySecurityToken_s* zx_NEW_wsse_BinarySecurityToken(struct zx_ctx* c);
void zx_FREE_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_BinarySecurityToken_s* zx_DEEP_CLONE_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, int dup_strs);
void zx_DUP_STRS_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x);
int zx_WALK_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x);
int zx_LEN_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x);
char* zx_ENC_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, char* p);
char* zx_ENC_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x);

struct zx_wsse_BinarySecurityToken_s {
  ZX_ELEM_EXT
  zx_wsse_BinarySecurityToken_EXT
  struct zx_str* EncodingType;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ValueType;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_BinarySecurityToken_GET_EncodingType(struct zx_wsse_BinarySecurityToken_s* x);
struct zx_str* zx_wsse_BinarySecurityToken_GET_ValueType(struct zx_wsse_BinarySecurityToken_s* x);
struct zx_str* zx_wsse_BinarySecurityToken_GET_Id(struct zx_wsse_BinarySecurityToken_s* x);





void zx_wsse_BinarySecurityToken_PUT_EncodingType(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y);
void zx_wsse_BinarySecurityToken_PUT_ValueType(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y);
void zx_wsse_BinarySecurityToken_PUT_Id(struct zx_wsse_BinarySecurityToken_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_Embedded -------------------------- */
/* refby( ) */
#ifndef zx_wsse_Embedded_EXT
#define zx_wsse_Embedded_EXT
#endif

struct zx_wsse_Embedded_s* zx_DEC_wsse_Embedded(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_Embedded_s* zx_NEW_wsse_Embedded(struct zx_ctx* c);
void zx_FREE_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_Embedded_s* zx_DEEP_CLONE_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, int dup_strs);
void zx_DUP_STRS_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x);
int zx_WALK_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x);
int zx_LEN_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x);
char* zx_ENC_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, char* p);
char* zx_ENC_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x);

struct zx_wsse_Embedded_s {
  ZX_ELEM_EXT
  zx_wsse_Embedded_EXT
  struct zx_str* ValueType;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_Embedded_GET_ValueType(struct zx_wsse_Embedded_s* x);





void zx_wsse_Embedded_PUT_ValueType(struct zx_wsse_Embedded_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_KeyIdentifier -------------------------- */
/* refby( zx_wsse_SecurityTokenReference_s ) */
#ifndef zx_wsse_KeyIdentifier_EXT
#define zx_wsse_KeyIdentifier_EXT
#endif

struct zx_wsse_KeyIdentifier_s* zx_DEC_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_KeyIdentifier_s* zx_NEW_wsse_KeyIdentifier(struct zx_ctx* c);
void zx_FREE_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_KeyIdentifier_s* zx_DEEP_CLONE_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, int dup_strs);
void zx_DUP_STRS_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x);
int zx_WALK_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x);
int zx_LEN_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x);
char* zx_ENC_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, char* p);
char* zx_ENC_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x);

struct zx_wsse_KeyIdentifier_s {
  ZX_ELEM_EXT
  zx_wsse_KeyIdentifier_EXT
  struct zx_str* EncodingType;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ValueType;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_KeyIdentifier_GET_EncodingType(struct zx_wsse_KeyIdentifier_s* x);
struct zx_str* zx_wsse_KeyIdentifier_GET_ValueType(struct zx_wsse_KeyIdentifier_s* x);
struct zx_str* zx_wsse_KeyIdentifier_GET_Id(struct zx_wsse_KeyIdentifier_s* x);





void zx_wsse_KeyIdentifier_PUT_EncodingType(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y);
void zx_wsse_KeyIdentifier_PUT_ValueType(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y);
void zx_wsse_KeyIdentifier_PUT_Id(struct zx_wsse_KeyIdentifier_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_Nonce -------------------------- */
/* refby( ) */
#ifndef zx_wsse_Nonce_EXT
#define zx_wsse_Nonce_EXT
#endif

struct zx_wsse_Nonce_s* zx_DEC_wsse_Nonce(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_Nonce_s* zx_NEW_wsse_Nonce(struct zx_ctx* c);
void zx_FREE_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_Nonce_s* zx_DEEP_CLONE_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, int dup_strs);
void zx_DUP_STRS_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x);
int zx_WALK_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x);
int zx_LEN_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x);
char* zx_ENC_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, char* p);
char* zx_ENC_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x);

struct zx_wsse_Nonce_s {
  ZX_ELEM_EXT
  zx_wsse_Nonce_EXT
  struct zx_str* EncodingType;	/* {0,1} attribute xs:anyURI */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_Nonce_GET_EncodingType(struct zx_wsse_Nonce_s* x);
struct zx_str* zx_wsse_Nonce_GET_Id(struct zx_wsse_Nonce_s* x);





void zx_wsse_Nonce_PUT_EncodingType(struct zx_wsse_Nonce_s* x, struct zx_str* y);
void zx_wsse_Nonce_PUT_Id(struct zx_wsse_Nonce_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_Password -------------------------- */
/* refby( ) */
#ifndef zx_wsse_Password_EXT
#define zx_wsse_Password_EXT
#endif

struct zx_wsse_Password_s* zx_DEC_wsse_Password(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_Password_s* zx_NEW_wsse_Password(struct zx_ctx* c);
void zx_FREE_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_Password_s* zx_DEEP_CLONE_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, int dup_strs);
void zx_DUP_STRS_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x);
int zx_WALK_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x);
int zx_LEN_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x);
char* zx_ENC_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, char* p);
char* zx_ENC_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x);

struct zx_wsse_Password_s {
  ZX_ELEM_EXT
  zx_wsse_Password_EXT
  struct zx_str* Type;	/* {0,1} attribute wst:BinarySecretTypeEnum */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_Password_GET_Type(struct zx_wsse_Password_s* x);
struct zx_str* zx_wsse_Password_GET_Id(struct zx_wsse_Password_s* x);





void zx_wsse_Password_PUT_Type(struct zx_wsse_Password_s* x, struct zx_str* y);
void zx_wsse_Password_PUT_Id(struct zx_wsse_Password_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_Reference -------------------------- */
/* refby( ) */
#ifndef zx_wsse_Reference_EXT
#define zx_wsse_Reference_EXT
#endif

struct zx_wsse_Reference_s* zx_DEC_wsse_Reference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_Reference_s* zx_NEW_wsse_Reference(struct zx_ctx* c);
void zx_FREE_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_Reference_s* zx_DEEP_CLONE_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, int dup_strs);
void zx_DUP_STRS_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x);
int zx_WALK_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x);
int zx_LEN_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x);
char* zx_ENC_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, char* p);
char* zx_ENC_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x);

struct zx_wsse_Reference_s {
  ZX_ELEM_EXT
  zx_wsse_Reference_EXT
  struct zx_str* URI;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ValueType;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_Reference_GET_URI(struct zx_wsse_Reference_s* x);
struct zx_str* zx_wsse_Reference_GET_ValueType(struct zx_wsse_Reference_s* x);





void zx_wsse_Reference_PUT_URI(struct zx_wsse_Reference_s* x, struct zx_str* y);
void zx_wsse_Reference_PUT_ValueType(struct zx_wsse_Reference_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_Security -------------------------- */
/* refby( zx_e_Header_s ) */
#ifndef zx_wsse_Security_EXT
#define zx_wsse_Security_EXT
#endif

struct zx_wsse_Security_s* zx_DEC_wsse_Security(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_Security_s* zx_NEW_wsse_Security(struct zx_ctx* c);
void zx_FREE_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_Security_s* zx_DEEP_CLONE_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, int dup_strs);
void zx_DUP_STRS_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x);
int zx_WALK_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x);
int zx_LEN_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x);
char* zx_ENC_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, char* p);
char* zx_ENC_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x);

struct zx_wsse_Security_s {
  ZX_ELEM_EXT
  zx_wsse_Security_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sa_Assertion_s* Assertion;	/* {0,1} nada */
  struct zx_sa_EncryptedAssertion_s* EncryptedAssertion;	/* {0,1} nada */
  struct zx_sa11_Assertion_s* sa11_Assertion;	/* {0,1} nada */
  struct zx_ff12_Assertion_s* ff12_Assertion;	/* {0,1} nada */
  struct zx_wsse_BinarySecurityToken_s* BinarySecurityToken;	/* {0,1} nada */
  struct zx_wsse_SecurityTokenReference_s* SecurityTokenReference;	/* {0,1} nada */
  struct zx_wsu_Timestamp_s* Timestamp;	/* {0,1} nada */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_Security_GET_Id(struct zx_wsse_Security_s* x);
struct zx_str* zx_wsse_Security_GET_actor(struct zx_wsse_Security_s* x);
struct zx_str* zx_wsse_Security_GET_mustUnderstand(struct zx_wsse_Security_s* x);

struct zx_ds_Signature_s* zx_wsse_Security_GET_Signature(struct zx_wsse_Security_s* x, int n);
struct zx_sa_Assertion_s* zx_wsse_Security_GET_Assertion(struct zx_wsse_Security_s* x, int n);
struct zx_sa_EncryptedAssertion_s* zx_wsse_Security_GET_EncryptedAssertion(struct zx_wsse_Security_s* x, int n);
struct zx_sa11_Assertion_s* zx_wsse_Security_GET_sa11_Assertion(struct zx_wsse_Security_s* x, int n);
struct zx_ff12_Assertion_s* zx_wsse_Security_GET_ff12_Assertion(struct zx_wsse_Security_s* x, int n);
struct zx_wsse_BinarySecurityToken_s* zx_wsse_Security_GET_BinarySecurityToken(struct zx_wsse_Security_s* x, int n);
struct zx_wsse_SecurityTokenReference_s* zx_wsse_Security_GET_SecurityTokenReference(struct zx_wsse_Security_s* x, int n);
struct zx_wsu_Timestamp_s* zx_wsse_Security_GET_Timestamp(struct zx_wsse_Security_s* x, int n);

int zx_wsse_Security_NUM_Signature(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_Assertion(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_EncryptedAssertion(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_sa11_Assertion(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_ff12_Assertion(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_BinarySecurityToken(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_SecurityTokenReference(struct zx_wsse_Security_s* x);
int zx_wsse_Security_NUM_Timestamp(struct zx_wsse_Security_s* x);

struct zx_ds_Signature_s* zx_wsse_Security_POP_Signature(struct zx_wsse_Security_s* x);
struct zx_sa_Assertion_s* zx_wsse_Security_POP_Assertion(struct zx_wsse_Security_s* x);
struct zx_sa_EncryptedAssertion_s* zx_wsse_Security_POP_EncryptedAssertion(struct zx_wsse_Security_s* x);
struct zx_sa11_Assertion_s* zx_wsse_Security_POP_sa11_Assertion(struct zx_wsse_Security_s* x);
struct zx_ff12_Assertion_s* zx_wsse_Security_POP_ff12_Assertion(struct zx_wsse_Security_s* x);
struct zx_wsse_BinarySecurityToken_s* zx_wsse_Security_POP_BinarySecurityToken(struct zx_wsse_Security_s* x);
struct zx_wsse_SecurityTokenReference_s* zx_wsse_Security_POP_SecurityTokenReference(struct zx_wsse_Security_s* x);
struct zx_wsu_Timestamp_s* zx_wsse_Security_POP_Timestamp(struct zx_wsse_Security_s* x);

void zx_wsse_Security_PUSH_Signature(struct zx_wsse_Security_s* x, struct zx_ds_Signature_s* y);
void zx_wsse_Security_PUSH_Assertion(struct zx_wsse_Security_s* x, struct zx_sa_Assertion_s* y);
void zx_wsse_Security_PUSH_EncryptedAssertion(struct zx_wsse_Security_s* x, struct zx_sa_EncryptedAssertion_s* y);
void zx_wsse_Security_PUSH_sa11_Assertion(struct zx_wsse_Security_s* x, struct zx_sa11_Assertion_s* y);
void zx_wsse_Security_PUSH_ff12_Assertion(struct zx_wsse_Security_s* x, struct zx_ff12_Assertion_s* y);
void zx_wsse_Security_PUSH_BinarySecurityToken(struct zx_wsse_Security_s* x, struct zx_wsse_BinarySecurityToken_s* y);
void zx_wsse_Security_PUSH_SecurityTokenReference(struct zx_wsse_Security_s* x, struct zx_wsse_SecurityTokenReference_s* y);
void zx_wsse_Security_PUSH_Timestamp(struct zx_wsse_Security_s* x, struct zx_wsu_Timestamp_s* y);

void zx_wsse_Security_PUT_Id(struct zx_wsse_Security_s* x, struct zx_str* y);
void zx_wsse_Security_PUT_actor(struct zx_wsse_Security_s* x, struct zx_str* y);
void zx_wsse_Security_PUT_mustUnderstand(struct zx_wsse_Security_s* x, struct zx_str* y);

void zx_wsse_Security_PUT_Signature(struct zx_wsse_Security_s* x, int n, struct zx_ds_Signature_s* y);
void zx_wsse_Security_PUT_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa_Assertion_s* y);
void zx_wsse_Security_PUT_EncryptedAssertion(struct zx_wsse_Security_s* x, int n, struct zx_sa_EncryptedAssertion_s* y);
void zx_wsse_Security_PUT_sa11_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa11_Assertion_s* y);
void zx_wsse_Security_PUT_ff12_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_ff12_Assertion_s* y);
void zx_wsse_Security_PUT_BinarySecurityToken(struct zx_wsse_Security_s* x, int n, struct zx_wsse_BinarySecurityToken_s* y);
void zx_wsse_Security_PUT_SecurityTokenReference(struct zx_wsse_Security_s* x, int n, struct zx_wsse_SecurityTokenReference_s* y);
void zx_wsse_Security_PUT_Timestamp(struct zx_wsse_Security_s* x, int n, struct zx_wsu_Timestamp_s* y);

void zx_wsse_Security_ADD_Signature(struct zx_wsse_Security_s* x, int n, struct zx_ds_Signature_s* z);
void zx_wsse_Security_ADD_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa_Assertion_s* z);
void zx_wsse_Security_ADD_EncryptedAssertion(struct zx_wsse_Security_s* x, int n, struct zx_sa_EncryptedAssertion_s* z);
void zx_wsse_Security_ADD_sa11_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_sa11_Assertion_s* z);
void zx_wsse_Security_ADD_ff12_Assertion(struct zx_wsse_Security_s* x, int n, struct zx_ff12_Assertion_s* z);
void zx_wsse_Security_ADD_BinarySecurityToken(struct zx_wsse_Security_s* x, int n, struct zx_wsse_BinarySecurityToken_s* z);
void zx_wsse_Security_ADD_SecurityTokenReference(struct zx_wsse_Security_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z);
void zx_wsse_Security_ADD_Timestamp(struct zx_wsse_Security_s* x, int n, struct zx_wsu_Timestamp_s* z);

void zx_wsse_Security_DEL_Signature(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_Assertion(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_EncryptedAssertion(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_sa11_Assertion(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_ff12_Assertion(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_BinarySecurityToken(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_SecurityTokenReference(struct zx_wsse_Security_s* x, int n);
void zx_wsse_Security_DEL_Timestamp(struct zx_wsse_Security_s* x, int n);

void zx_wsse_Security_REV_Signature(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_Assertion(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_EncryptedAssertion(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_sa11_Assertion(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_ff12_Assertion(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_BinarySecurityToken(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_SecurityTokenReference(struct zx_wsse_Security_s* x);
void zx_wsse_Security_REV_Timestamp(struct zx_wsse_Security_s* x);

#endif
/* -------------------------- wsse_SecurityTokenReference -------------------------- */
/* refby( zx_wsse_Security_s zx_wst_RequestedUnattachedReference_s zx_wsc_DerivedKeyToken_s zx_wst_RequestedAttachedReference_s ) */
#ifndef zx_wsse_SecurityTokenReference_EXT
#define zx_wsse_SecurityTokenReference_EXT
#endif

struct zx_wsse_SecurityTokenReference_s* zx_DEC_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_SecurityTokenReference_s* zx_NEW_wsse_SecurityTokenReference(struct zx_ctx* c);
void zx_FREE_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_SecurityTokenReference_s* zx_DEEP_CLONE_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, int dup_strs);
void zx_DUP_STRS_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x);
int zx_WALK_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x);
int zx_LEN_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x);
char* zx_ENC_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, char* p);
char* zx_ENC_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x);

struct zx_wsse_SecurityTokenReference_s {
  ZX_ELEM_EXT
  zx_wsse_SecurityTokenReference_EXT
  struct zx_wsse_KeyIdentifier_s* KeyIdentifier;	/* {0,1} nada */
  struct zx_str* Usage;	/* {0,1} attribute wsse:tUsage */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_SecurityTokenReference_GET_Usage(struct zx_wsse_SecurityTokenReference_s* x);
struct zx_str* zx_wsse_SecurityTokenReference_GET_Id(struct zx_wsse_SecurityTokenReference_s* x);

struct zx_wsse_KeyIdentifier_s* zx_wsse_SecurityTokenReference_GET_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n);

int zx_wsse_SecurityTokenReference_NUM_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x);

struct zx_wsse_KeyIdentifier_s* zx_wsse_SecurityTokenReference_POP_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x);

void zx_wsse_SecurityTokenReference_PUSH_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, struct zx_wsse_KeyIdentifier_s* y);

void zx_wsse_SecurityTokenReference_PUT_Usage(struct zx_wsse_SecurityTokenReference_s* x, struct zx_str* y);
void zx_wsse_SecurityTokenReference_PUT_Id(struct zx_wsse_SecurityTokenReference_s* x, struct zx_str* y);

void zx_wsse_SecurityTokenReference_PUT_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n, struct zx_wsse_KeyIdentifier_s* y);

void zx_wsse_SecurityTokenReference_ADD_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n, struct zx_wsse_KeyIdentifier_s* z);

void zx_wsse_SecurityTokenReference_DEL_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x, int n);

void zx_wsse_SecurityTokenReference_REV_KeyIdentifier(struct zx_wsse_SecurityTokenReference_s* x);

#endif
/* -------------------------- wsse_TransformationParameters -------------------------- */
/* refby( ) */
#ifndef zx_wsse_TransformationParameters_EXT
#define zx_wsse_TransformationParameters_EXT
#endif

struct zx_wsse_TransformationParameters_s* zx_DEC_wsse_TransformationParameters(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_TransformationParameters_s* zx_NEW_wsse_TransformationParameters(struct zx_ctx* c);
void zx_FREE_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_TransformationParameters_s* zx_DEEP_CLONE_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, int dup_strs);
void zx_DUP_STRS_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x);
int zx_WALK_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x);
int zx_LEN_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x);
char* zx_ENC_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, char* p);
char* zx_ENC_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x);

struct zx_wsse_TransformationParameters_s {
  ZX_ELEM_EXT
  zx_wsse_TransformationParameters_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wsse_Username -------------------------- */
/* refby( zx_wsse_UsernameToken_s ) */
#ifndef zx_wsse_Username_EXT
#define zx_wsse_Username_EXT
#endif

struct zx_wsse_Username_s* zx_DEC_wsse_Username(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_Username_s* zx_NEW_wsse_Username(struct zx_ctx* c);
void zx_FREE_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_Username_s* zx_DEEP_CLONE_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, int dup_strs);
void zx_DUP_STRS_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x);
int zx_WALK_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x);
int zx_LEN_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x);
char* zx_ENC_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, char* p);
char* zx_ENC_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x);

struct zx_wsse_Username_s {
  ZX_ELEM_EXT
  zx_wsse_Username_EXT
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_Username_GET_Id(struct zx_wsse_Username_s* x);





void zx_wsse_Username_PUT_Id(struct zx_wsse_Username_s* x, struct zx_str* y);





#endif
/* -------------------------- wsse_UsernameToken -------------------------- */
/* refby( ) */
#ifndef zx_wsse_UsernameToken_EXT
#define zx_wsse_UsernameToken_EXT
#endif

struct zx_wsse_UsernameToken_s* zx_DEC_wsse_UsernameToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wsse_UsernameToken_s* zx_NEW_wsse_UsernameToken(struct zx_ctx* c);
void zx_FREE_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wsse_UsernameToken_s* zx_DEEP_CLONE_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, int dup_strs);
void zx_DUP_STRS_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x);
int zx_WALK_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x);
int zx_LEN_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x);
char* zx_ENC_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, char* p);
char* zx_ENC_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x);
struct zx_str* zx_EASY_ENC_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x);

struct zx_wsse_UsernameToken_s {
  ZX_ELEM_EXT
  zx_wsse_UsernameToken_EXT
  struct zx_wsse_Username_s* Username;	/* {1,1}  */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wsse_UsernameToken_GET_Id(struct zx_wsse_UsernameToken_s* x);

struct zx_wsse_Username_s* zx_wsse_UsernameToken_GET_Username(struct zx_wsse_UsernameToken_s* x, int n);

int zx_wsse_UsernameToken_NUM_Username(struct zx_wsse_UsernameToken_s* x);

struct zx_wsse_Username_s* zx_wsse_UsernameToken_POP_Username(struct zx_wsse_UsernameToken_s* x);

void zx_wsse_UsernameToken_PUSH_Username(struct zx_wsse_UsernameToken_s* x, struct zx_wsse_Username_s* y);

void zx_wsse_UsernameToken_PUT_Id(struct zx_wsse_UsernameToken_s* x, struct zx_str* y);

void zx_wsse_UsernameToken_PUT_Username(struct zx_wsse_UsernameToken_s* x, int n, struct zx_wsse_Username_s* y);

void zx_wsse_UsernameToken_ADD_Username(struct zx_wsse_UsernameToken_s* x, int n, struct zx_wsse_Username_s* z);

void zx_wsse_UsernameToken_DEL_Username(struct zx_wsse_UsernameToken_s* x, int n);

void zx_wsse_UsernameToken_REV_Username(struct zx_wsse_UsernameToken_s* x);

#endif

#endif