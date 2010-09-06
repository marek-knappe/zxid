/* c/zx-sec12-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: getput-templ.c,v 1.8 2009-08-30 15:09:26 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** Edit with care! xsd2sg.pl applies various substitutions to this file.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-sec12-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference) */

int zx_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDReference; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference) */

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDReference; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference) */

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->AssertionIDReference;
  if (y)
    x->AssertionIDReference = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference) */

void zx_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->AssertionIDReference->g;
  x->AssertionIDReference = z;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference) */

void zx_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->AssertionIDReference;
  if (!y) return;
  x->AssertionIDReference = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->AssertionIDReference->g;
    x->AssertionIDReference = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference) */

void zx_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->AssertionIDReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->AssertionIDReference = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference) */

void zx_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->AssertionIDReference->g;
    x->AssertionIDReference = z;
    return;
  case -1:
    y = x->AssertionIDReference;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDReference; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference) */

void zx_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDReference = (struct zx_elem_s*)x->AssertionIDReference->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->AssertionIDReference;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->AssertionIDReference; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxyInfoConfirmationData_NUM_Issuer) */

int zx_sec12_ProxyInfoConfirmationData_NUM_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Issuer; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_GET_Issuer) */

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_GET_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Issuer; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_POP_Issuer) */

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_POP_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Issuer;
  if (y)
    x->Issuer = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUSH_Issuer) */

void zx_sec12_ProxyInfoConfirmationData_PUSH_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Issuer->g;
  x->Issuer = z;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_REV_Issuer) */

void zx_sec12_ProxyInfoConfirmationData_REV_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Issuer;
  if (!y) return;
  x->Issuer = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Issuer->g;
    x->Issuer = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUT_Issuer) */

void zx_sec12_ProxyInfoConfirmationData_PUT_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Issuer;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Issuer = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_ADD_Issuer) */

void zx_sec12_ProxyInfoConfirmationData_ADD_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Issuer->g;
    x->Issuer = z;
    return;
  case -1:
    y = x->Issuer;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_DEL_Issuer) */

void zx_sec12_ProxyInfoConfirmationData_DEL_Issuer(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Issuer = (struct zx_elem_s*)x->Issuer->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Issuer;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Issuer; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxyInfoConfirmationData_NUM_IssueInstant) */

int zx_sec12_ProxyInfoConfirmationData_NUM_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IssueInstant; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_GET_IssueInstant) */

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_GET_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->IssueInstant; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_POP_IssueInstant) */

struct zx_elem_s* zx_sec12_ProxyInfoConfirmationData_POP_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->IssueInstant;
  if (y)
    x->IssueInstant = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant) */

void zx_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->IssueInstant->g;
  x->IssueInstant = z;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_REV_IssueInstant) */

void zx_sec12_ProxyInfoConfirmationData_REV_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->IssueInstant;
  if (!y) return;
  x->IssueInstant = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->IssueInstant->g;
    x->IssueInstant = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUT_IssueInstant) */

void zx_sec12_ProxyInfoConfirmationData_PUT_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->IssueInstant;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->IssueInstant = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_ADD_IssueInstant) */

void zx_sec12_ProxyInfoConfirmationData_ADD_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->IssueInstant->g;
    x->IssueInstant = z;
    return;
  case -1:
    y = x->IssueInstant;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->IssueInstant; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_DEL_IssueInstant) */

void zx_sec12_ProxyInfoConfirmationData_DEL_IssueInstant(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IssueInstant = (struct zx_elem_s*)x->IssueInstant->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->IssueInstant;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->IssueInstant; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxyInfoConfirmationData_NUM_Signature) */

int zx_sec12_ProxyInfoConfirmationData_NUM_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_ds_Signature_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Signature; y; ++n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_GET_Signature) */

struct zx_ds_Signature_s* zx_sec12_ProxyInfoConfirmationData_GET_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  for (y = x->Signature; n>=0 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_POP_Signature) */

struct zx_ds_Signature_s* zx_sec12_ProxyInfoConfirmationData_POP_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_ds_Signature_s* y;
  if (!x) return 0;
  y = x->Signature;
  if (y)
    x->Signature = (struct zx_ds_Signature_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUSH_Signature) */

void zx_sec12_ProxyInfoConfirmationData_PUSH_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_ds_Signature_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Signature->gg.g;
  x->Signature = z;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_REV_Signature) */

void zx_sec12_ProxyInfoConfirmationData_REV_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x)
{
  struct zx_ds_Signature_s* nxt;
  struct zx_ds_Signature_s* y;
  if (!x) return;
  y = x->Signature;
  if (!y) return;
  x->Signature = 0;
  while (y) {
    nxt = (struct zx_ds_Signature_s*)y->gg.g.n;
    y->gg.g.n = &x->Signature->gg.g;
    x->Signature = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUT_Signature) */

void zx_sec12_ProxyInfoConfirmationData_PUT_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  y = x->Signature;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Signature = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_ADD_Signature) */

void zx_sec12_ProxyInfoConfirmationData_ADD_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n, struct zx_ds_Signature_s* z)
{
  struct zx_ds_Signature_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Signature->gg.g;
    x->Signature = z;
    return;
  case -1:
    y = x->Signature;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ProxyInfoConfirmationData_DEL_Signature) */

void zx_sec12_ProxyInfoConfirmationData_DEL_Signature(struct zx_sec12_ProxyInfoConfirmationData_s* x, int n)
{
  struct zx_ds_Signature_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Signature = (struct zx_ds_Signature_s*)x->Signature->gg.g.n;
    return;
  case -1:
    y = (struct zx_ds_Signature_s*)x->Signature;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Signature; n > 1 && y->gg.g.n; --n, y = (struct zx_ds_Signature_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sec12_ProxyInfoConfirmationData_GET_id) */
struct zx_str* zx_sec12_ProxyInfoConfirmationData_GET_id(struct zx_sec12_ProxyInfoConfirmationData_s* x) { return x->id; }
/* FUNC(zx_sec12_ProxyInfoConfirmationData_PUT_id) */
void zx_sec12_ProxyInfoConfirmationData_PUT_id(struct zx_sec12_ProxyInfoConfirmationData_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxySubject_NUM_NameIdentifier) */

int zx_sec12_ProxySubject_NUM_NameIdentifier(struct zx_sec12_ProxySubject_s* x)
{
  struct zx_sa11_NameIdentifier_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifier; y; ++n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxySubject_GET_NameIdentifier) */

struct zx_sa11_NameIdentifier_s* zx_sec12_ProxySubject_GET_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifier; n>=0 && y; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxySubject_POP_NameIdentifier) */

struct zx_sa11_NameIdentifier_s* zx_sec12_ProxySubject_POP_NameIdentifier(struct zx_sec12_ProxySubject_s* x)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return 0;
  y = x->NameIdentifier;
  if (y)
    x->NameIdentifier = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ProxySubject_PUSH_NameIdentifier) */

void zx_sec12_ProxySubject_PUSH_NameIdentifier(struct zx_sec12_ProxySubject_s* x, struct zx_sa11_NameIdentifier_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifier->gg.g;
  x->NameIdentifier = z;
}

/* FUNC(zx_sec12_ProxySubject_REV_NameIdentifier) */

void zx_sec12_ProxySubject_REV_NameIdentifier(struct zx_sec12_ProxySubject_s* x)
{
  struct zx_sa11_NameIdentifier_s* nxt;
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return;
  y = x->NameIdentifier;
  if (!y) return;
  x->NameIdentifier = 0;
  while (y) {
    nxt = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifier->gg.g;
    x->NameIdentifier = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxySubject_PUT_NameIdentifier) */

void zx_sec12_ProxySubject_PUT_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_NameIdentifier_s* z)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x || !z) return;
  y = x->NameIdentifier;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifier = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ProxySubject_ADD_NameIdentifier) */

void zx_sec12_ProxySubject_ADD_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_NameIdentifier_s* z)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifier->gg.g;
    x->NameIdentifier = z;
    return;
  case -1:
    y = x->NameIdentifier;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifier; n > 1 && y; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ProxySubject_DEL_NameIdentifier) */

void zx_sec12_ProxySubject_DEL_NameIdentifier(struct zx_sec12_ProxySubject_s* x, int n)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifier = (struct zx_sa11_NameIdentifier_s*)x->NameIdentifier->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_NameIdentifier_s*)x->NameIdentifier;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifier; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxySubject_NUM_SubjectConfirmation) */

int zx_sec12_ProxySubject_NUM_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; y; ++n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxySubject_GET_SubjectConfirmation) */

struct zx_sa11_SubjectConfirmation_s* zx_sec12_ProxySubject_GET_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; n>=0 && y; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxySubject_POP_SubjectConfirmation) */

struct zx_sa11_SubjectConfirmation_s* zx_sec12_ProxySubject_POP_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return 0;
  y = x->SubjectConfirmation;
  if (y)
    x->SubjectConfirmation = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ProxySubject_PUSH_SubjectConfirmation) */

void zx_sec12_ProxySubject_PUSH_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, struct zx_sa11_SubjectConfirmation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectConfirmation->gg.g;
  x->SubjectConfirmation = z;
}

/* FUNC(zx_sec12_ProxySubject_REV_SubjectConfirmation) */

void zx_sec12_ProxySubject_REV_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x)
{
  struct zx_sa11_SubjectConfirmation_s* nxt;
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  x->SubjectConfirmation = 0;
  while (y) {
    nxt = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxySubject_PUT_SubjectConfirmation) */

void zx_sec12_ProxySubject_PUT_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x || !z) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectConfirmation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ProxySubject_ADD_SubjectConfirmation) */

void zx_sec12_ProxySubject_ADD_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = z;
    return;
  case -1:
    y = x->SubjectConfirmation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ProxySubject_DEL_SubjectConfirmation) */

void zx_sec12_ProxySubject_DEL_SubjectConfirmation(struct zx_sec12_ProxySubject_s* x, int n)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectConfirmation = (struct zx_sa11_SubjectConfirmation_s*)x->SubjectConfirmation->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_SubjectConfirmation_s*)x->SubjectConfirmation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ProxyTransitedStatement_NUM_Subject) */

int zx_sec12_ProxyTransitedStatement_NUM_Subject(struct zx_sec12_ProxyTransitedStatement_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ProxyTransitedStatement_GET_Subject) */

struct zx_sa11_Subject_s* zx_sec12_ProxyTransitedStatement_GET_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ProxyTransitedStatement_POP_Subject) */

struct zx_sa11_Subject_s* zx_sec12_ProxyTransitedStatement_POP_Subject(struct zx_sec12_ProxyTransitedStatement_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ProxyTransitedStatement_PUSH_Subject) */

void zx_sec12_ProxyTransitedStatement_PUSH_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sec12_ProxyTransitedStatement_REV_Subject) */

void zx_sec12_ProxyTransitedStatement_REV_Subject(struct zx_sec12_ProxyTransitedStatement_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ProxyTransitedStatement_PUT_Subject) */

void zx_sec12_ProxyTransitedStatement_PUT_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ProxyTransitedStatement_ADD_Subject) */

void zx_sec12_ProxyTransitedStatement_ADD_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ProxyTransitedStatement_DEL_Subject) */

void zx_sec12_ProxyTransitedStatement_DEL_Subject(struct zx_sec12_ProxyTransitedStatement_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ResourceAccessStatement_NUM_Subject) */

int zx_sec12_ResourceAccessStatement_NUM_Subject(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ResourceAccessStatement_GET_Subject) */

struct zx_sa11_Subject_s* zx_sec12_ResourceAccessStatement_GET_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_POP_Subject) */

struct zx_sa11_Subject_s* zx_sec12_ResourceAccessStatement_POP_Subject(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUSH_Subject) */

void zx_sec12_ResourceAccessStatement_PUSH_Subject(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sec12_ResourceAccessStatement_REV_Subject) */

void zx_sec12_ResourceAccessStatement_REV_Subject(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUT_Subject) */

void zx_sec12_ResourceAccessStatement_PUT_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_ADD_Subject) */

void zx_sec12_ResourceAccessStatement_ADD_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ResourceAccessStatement_DEL_Subject) */

void zx_sec12_ResourceAccessStatement_DEL_Subject(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ResourceAccessStatement_NUM_ResourceID) */

int zx_sec12_ResourceAccessStatement_NUM_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_di12_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ResourceAccessStatement_GET_ResourceID) */

struct zx_di12_ResourceID_s* zx_sec12_ResourceAccessStatement_GET_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_POP_ResourceID) */

struct zx_di12_ResourceID_s* zx_sec12_ResourceAccessStatement_POP_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_di12_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUSH_ResourceID) */

void zx_sec12_ResourceAccessStatement_PUSH_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_di12_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_sec12_ResourceAccessStatement_REV_ResourceID) */

void zx_sec12_ResourceAccessStatement_REV_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_di12_ResourceID_s* nxt;
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUT_ResourceID) */

void zx_sec12_ResourceAccessStatement_PUT_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_ADD_ResourceID) */

void zx_sec12_ResourceAccessStatement_ADD_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_ResourceID_s* z)
{
  struct zx_di12_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ResourceAccessStatement_DEL_ResourceID) */

void zx_sec12_ResourceAccessStatement_DEL_ResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_di12_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_di12_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ResourceAccessStatement_NUM_EncryptedResourceID) */

int zx_sec12_ResourceAccessStatement_NUM_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ResourceAccessStatement_GET_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_sec12_ResourceAccessStatement_GET_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_POP_EncryptedResourceID) */

struct zx_di12_EncryptedResourceID_s* zx_sec12_ResourceAccessStatement_POP_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUSH_EncryptedResourceID) */

void zx_sec12_ResourceAccessStatement_PUSH_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_di12_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_sec12_ResourceAccessStatement_REV_EncryptedResourceID) */

void zx_sec12_ResourceAccessStatement_REV_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_di12_EncryptedResourceID_s* nxt;
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUT_EncryptedResourceID) */

void zx_sec12_ResourceAccessStatement_PUT_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_ADD_EncryptedResourceID) */

void zx_sec12_ResourceAccessStatement_ADD_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_di12_EncryptedResourceID_s* z)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ResourceAccessStatement_DEL_EncryptedResourceID) */

void zx_sec12_ResourceAccessStatement_DEL_EncryptedResourceID(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_di12_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ResourceAccessStatement_NUM_ProxySubject) */

int zx_sec12_ResourceAccessStatement_NUM_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sec12_ProxySubject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxySubject; y; ++n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ResourceAccessStatement_GET_ProxySubject) */

struct zx_sec12_ProxySubject_s* zx_sec12_ResourceAccessStatement_GET_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return 0;
  for (y = x->ProxySubject; n>=0 && y; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_POP_ProxySubject) */

struct zx_sec12_ProxySubject_s* zx_sec12_ResourceAccessStatement_POP_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return 0;
  y = x->ProxySubject;
  if (y)
    x->ProxySubject = (struct zx_sec12_ProxySubject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUSH_ProxySubject) */

void zx_sec12_ResourceAccessStatement_PUSH_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_sec12_ProxySubject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxySubject->gg.g;
  x->ProxySubject = z;
}

/* FUNC(zx_sec12_ResourceAccessStatement_REV_ProxySubject) */

void zx_sec12_ResourceAccessStatement_REV_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sec12_ProxySubject_s* nxt;
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return;
  y = x->ProxySubject;
  if (!y) return;
  x->ProxySubject = 0;
  while (y) {
    nxt = (struct zx_sec12_ProxySubject_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxySubject->gg.g;
    x->ProxySubject = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUT_ProxySubject) */

void zx_sec12_ResourceAccessStatement_PUT_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_ProxySubject_s* z)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x || !z) return;
  y = x->ProxySubject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxySubject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_ADD_ProxySubject) */

void zx_sec12_ResourceAccessStatement_ADD_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_ProxySubject_s* z)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxySubject->gg.g;
    x->ProxySubject = z;
    return;
  case -1:
    y = x->ProxySubject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ResourceAccessStatement_DEL_ProxySubject) */

void zx_sec12_ResourceAccessStatement_DEL_ProxySubject(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxySubject = (struct zx_sec12_ProxySubject_s*)x->ProxySubject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec12_ProxySubject_s*)x->ProxySubject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ResourceAccessStatement_NUM_SessionContext) */

int zx_sec12_ResourceAccessStatement_NUM_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sec12_SessionContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionContext; y; ++n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_ResourceAccessStatement_GET_SessionContext) */

struct zx_sec12_SessionContext_s* zx_sec12_ResourceAccessStatement_GET_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x) return 0;
  for (y = x->SessionContext; n>=0 && y; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_POP_SessionContext) */

struct zx_sec12_SessionContext_s* zx_sec12_ResourceAccessStatement_POP_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x) return 0;
  y = x->SessionContext;
  if (y)
    x->SessionContext = (struct zx_sec12_SessionContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUSH_SessionContext) */

void zx_sec12_ResourceAccessStatement_PUSH_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, struct zx_sec12_SessionContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SessionContext->gg.g;
  x->SessionContext = z;
}

/* FUNC(zx_sec12_ResourceAccessStatement_REV_SessionContext) */

void zx_sec12_ResourceAccessStatement_REV_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x)
{
  struct zx_sec12_SessionContext_s* nxt;
  struct zx_sec12_SessionContext_s* y;
  if (!x) return;
  y = x->SessionContext;
  if (!y) return;
  x->SessionContext = 0;
  while (y) {
    nxt = (struct zx_sec12_SessionContext_s*)y->gg.g.n;
    y->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_PUT_SessionContext) */

void zx_sec12_ResourceAccessStatement_PUT_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_SessionContext_s* z)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x || !z) return;
  y = x->SessionContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SessionContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_ResourceAccessStatement_ADD_SessionContext) */

void zx_sec12_ResourceAccessStatement_ADD_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n, struct zx_sec12_SessionContext_s* z)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = z;
    return;
  case -1:
    y = x->SessionContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_ResourceAccessStatement_DEL_SessionContext) */

void zx_sec12_ResourceAccessStatement_DEL_SessionContext(struct zx_sec12_ResourceAccessStatement_s* x, int n)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionContext = (struct zx_sec12_SessionContext_s*)x->SessionContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec12_SessionContext_s*)x->SessionContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionContext_NUM_SessionSubject) */

int zx_sec12_SessionContext_NUM_SessionSubject(struct zx_sec12_SessionContext_s* x)
{
  struct zx_sec12_SessionSubject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionSubject; y; ++n, y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionContext_GET_SessionSubject) */

struct zx_sec12_SessionSubject_s* zx_sec12_SessionContext_GET_SessionSubject(struct zx_sec12_SessionContext_s* x, int n)
{
  struct zx_sec12_SessionSubject_s* y;
  if (!x) return 0;
  for (y = x->SessionSubject; n>=0 && y; --n, y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionContext_POP_SessionSubject) */

struct zx_sec12_SessionSubject_s* zx_sec12_SessionContext_POP_SessionSubject(struct zx_sec12_SessionContext_s* x)
{
  struct zx_sec12_SessionSubject_s* y;
  if (!x) return 0;
  y = x->SessionSubject;
  if (y)
    x->SessionSubject = (struct zx_sec12_SessionSubject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionContext_PUSH_SessionSubject) */

void zx_sec12_SessionContext_PUSH_SessionSubject(struct zx_sec12_SessionContext_s* x, struct zx_sec12_SessionSubject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SessionSubject->gg.g;
  x->SessionSubject = z;
}

/* FUNC(zx_sec12_SessionContext_REV_SessionSubject) */

void zx_sec12_SessionContext_REV_SessionSubject(struct zx_sec12_SessionContext_s* x)
{
  struct zx_sec12_SessionSubject_s* nxt;
  struct zx_sec12_SessionSubject_s* y;
  if (!x) return;
  y = x->SessionSubject;
  if (!y) return;
  x->SessionSubject = 0;
  while (y) {
    nxt = (struct zx_sec12_SessionSubject_s*)y->gg.g.n;
    y->gg.g.n = &x->SessionSubject->gg.g;
    x->SessionSubject = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionContext_PUT_SessionSubject) */

void zx_sec12_SessionContext_PUT_SessionSubject(struct zx_sec12_SessionContext_s* x, int n, struct zx_sec12_SessionSubject_s* z)
{
  struct zx_sec12_SessionSubject_s* y;
  if (!x || !z) return;
  y = x->SessionSubject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SessionSubject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionContext_ADD_SessionSubject) */

void zx_sec12_SessionContext_ADD_SessionSubject(struct zx_sec12_SessionContext_s* x, int n, struct zx_sec12_SessionSubject_s* z)
{
  struct zx_sec12_SessionSubject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SessionSubject->gg.g;
    x->SessionSubject = z;
    return;
  case -1:
    y = x->SessionSubject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionSubject; n > 1 && y; --n, y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionContext_DEL_SessionSubject) */

void zx_sec12_SessionContext_DEL_SessionSubject(struct zx_sec12_SessionContext_s* x, int n)
{
  struct zx_sec12_SessionSubject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionSubject = (struct zx_sec12_SessionSubject_s*)x->SessionSubject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec12_SessionSubject_s*)x->SessionSubject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionSubject; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_SessionSubject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionContext_NUM_ProviderID) */

int zx_sec12_SessionContext_NUM_ProviderID(struct zx_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProviderID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionContext_GET_ProviderID) */

struct zx_elem_s* zx_sec12_SessionContext_GET_ProviderID(struct zx_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ProviderID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionContext_POP_ProviderID) */

struct zx_elem_s* zx_sec12_SessionContext_POP_ProviderID(struct zx_sec12_SessionContext_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ProviderID;
  if (y)
    x->ProviderID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sec12_SessionContext_PUSH_ProviderID) */

void zx_sec12_SessionContext_PUSH_ProviderID(struct zx_sec12_SessionContext_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ProviderID->g;
  x->ProviderID = z;
}

/* FUNC(zx_sec12_SessionContext_REV_ProviderID) */

void zx_sec12_SessionContext_REV_ProviderID(struct zx_sec12_SessionContext_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ProviderID;
  if (!y) return;
  x->ProviderID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ProviderID->g;
    x->ProviderID = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionContext_PUT_ProviderID) */

void zx_sec12_SessionContext_PUT_ProviderID(struct zx_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ProviderID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ProviderID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sec12_SessionContext_ADD_ProviderID) */

void zx_sec12_SessionContext_ADD_ProviderID(struct zx_sec12_SessionContext_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ProviderID->g;
    x->ProviderID = z;
    return;
  case -1:
    y = x->ProviderID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sec12_SessionContext_DEL_ProviderID) */

void zx_sec12_SessionContext_DEL_ProviderID(struct zx_sec12_SessionContext_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProviderID = (struct zx_elem_s*)x->ProviderID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ProviderID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ProviderID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionContext_NUM_RequestAuthnContext) */

int zx_sec12_SessionContext_NUM_RequestAuthnContext(struct zx_sec12_SessionContext_s* x)
{
  struct zx_ff12_RequestAuthnContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RequestAuthnContext; y; ++n, y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionContext_GET_RequestAuthnContext) */

struct zx_ff12_RequestAuthnContext_s* zx_sec12_SessionContext_GET_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n)
{
  struct zx_ff12_RequestAuthnContext_s* y;
  if (!x) return 0;
  for (y = x->RequestAuthnContext; n>=0 && y; --n, y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionContext_POP_RequestAuthnContext) */

struct zx_ff12_RequestAuthnContext_s* zx_sec12_SessionContext_POP_RequestAuthnContext(struct zx_sec12_SessionContext_s* x)
{
  struct zx_ff12_RequestAuthnContext_s* y;
  if (!x) return 0;
  y = x->RequestAuthnContext;
  if (y)
    x->RequestAuthnContext = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionContext_PUSH_RequestAuthnContext) */

void zx_sec12_SessionContext_PUSH_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, struct zx_ff12_RequestAuthnContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RequestAuthnContext->gg.g;
  x->RequestAuthnContext = z;
}

/* FUNC(zx_sec12_SessionContext_REV_RequestAuthnContext) */

void zx_sec12_SessionContext_REV_RequestAuthnContext(struct zx_sec12_SessionContext_s* x)
{
  struct zx_ff12_RequestAuthnContext_s* nxt;
  struct zx_ff12_RequestAuthnContext_s* y;
  if (!x) return;
  y = x->RequestAuthnContext;
  if (!y) return;
  x->RequestAuthnContext = 0;
  while (y) {
    nxt = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n;
    y->gg.g.n = &x->RequestAuthnContext->gg.g;
    x->RequestAuthnContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionContext_PUT_RequestAuthnContext) */

void zx_sec12_SessionContext_PUT_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n, struct zx_ff12_RequestAuthnContext_s* z)
{
  struct zx_ff12_RequestAuthnContext_s* y;
  if (!x || !z) return;
  y = x->RequestAuthnContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RequestAuthnContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionContext_ADD_RequestAuthnContext) */

void zx_sec12_SessionContext_ADD_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n, struct zx_ff12_RequestAuthnContext_s* z)
{
  struct zx_ff12_RequestAuthnContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RequestAuthnContext->gg.g;
    x->RequestAuthnContext = z;
    return;
  case -1:
    y = x->RequestAuthnContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestAuthnContext; n > 1 && y; --n, y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionContext_DEL_RequestAuthnContext) */

void zx_sec12_SessionContext_DEL_RequestAuthnContext(struct zx_sec12_SessionContext_s* x, int n)
{
  struct zx_ff12_RequestAuthnContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RequestAuthnContext = (struct zx_ff12_RequestAuthnContext_s*)x->RequestAuthnContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RequestAuthnContext_s*)x->RequestAuthnContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RequestAuthnContext; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RequestAuthnContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_sec12_SessionContext_GET_AssertionIssueInstant) */
struct zx_str* zx_sec12_SessionContext_GET_AssertionIssueInstant(struct zx_sec12_SessionContext_s* x) { return x->AssertionIssueInstant; }
/* FUNC(zx_sec12_SessionContext_PUT_AssertionIssueInstant) */
void zx_sec12_SessionContext_PUT_AssertionIssueInstant(struct zx_sec12_SessionContext_s* x, struct zx_str* y) { x->AssertionIssueInstant = y; }
/* FUNC(zx_sec12_SessionContext_GET_AuthenticationInstant) */
struct zx_str* zx_sec12_SessionContext_GET_AuthenticationInstant(struct zx_sec12_SessionContext_s* x) { return x->AuthenticationInstant; }
/* FUNC(zx_sec12_SessionContext_PUT_AuthenticationInstant) */
void zx_sec12_SessionContext_PUT_AuthenticationInstant(struct zx_sec12_SessionContext_s* x, struct zx_str* y) { x->AuthenticationInstant = y; }
/* FUNC(zx_sec12_SessionContext_GET_SessionIndex) */
struct zx_str* zx_sec12_SessionContext_GET_SessionIndex(struct zx_sec12_SessionContext_s* x) { return x->SessionIndex; }
/* FUNC(zx_sec12_SessionContext_PUT_SessionIndex) */
void zx_sec12_SessionContext_PUT_SessionIndex(struct zx_sec12_SessionContext_s* x, struct zx_str* y) { x->SessionIndex = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionContextStatement_NUM_Subject) */

int zx_sec12_SessionContextStatement_NUM_Subject(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sa11_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionContextStatement_GET_Subject) */

struct zx_sa11_Subject_s* zx_sec12_SessionContextStatement_GET_Subject(struct zx_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionContextStatement_POP_Subject) */

struct zx_sa11_Subject_s* zx_sec12_SessionContextStatement_POP_Subject(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_sa11_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionContextStatement_PUSH_Subject) */

void zx_sec12_SessionContextStatement_PUSH_Subject(struct zx_sec12_SessionContextStatement_s* x, struct zx_sa11_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_sec12_SessionContextStatement_REV_Subject) */

void zx_sec12_SessionContextStatement_REV_Subject(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sa11_Subject_s* nxt;
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_sa11_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionContextStatement_PUT_Subject) */

void zx_sec12_SessionContextStatement_PUT_Subject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionContextStatement_ADD_Subject) */

void zx_sec12_SessionContextStatement_ADD_Subject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sa11_Subject_s* z)
{
  struct zx_sa11_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionContextStatement_DEL_Subject) */

void zx_sec12_SessionContextStatement_DEL_Subject(struct zx_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_sa11_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_sa11_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionContextStatement_NUM_ProxySubject) */

int zx_sec12_SessionContextStatement_NUM_ProxySubject(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sec12_ProxySubject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxySubject; y; ++n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionContextStatement_GET_ProxySubject) */

struct zx_sec12_ProxySubject_s* zx_sec12_SessionContextStatement_GET_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return 0;
  for (y = x->ProxySubject; n>=0 && y; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionContextStatement_POP_ProxySubject) */

struct zx_sec12_ProxySubject_s* zx_sec12_SessionContextStatement_POP_ProxySubject(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return 0;
  y = x->ProxySubject;
  if (y)
    x->ProxySubject = (struct zx_sec12_ProxySubject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionContextStatement_PUSH_ProxySubject) */

void zx_sec12_SessionContextStatement_PUSH_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, struct zx_sec12_ProxySubject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxySubject->gg.g;
  x->ProxySubject = z;
}

/* FUNC(zx_sec12_SessionContextStatement_REV_ProxySubject) */

void zx_sec12_SessionContextStatement_REV_ProxySubject(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sec12_ProxySubject_s* nxt;
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return;
  y = x->ProxySubject;
  if (!y) return;
  x->ProxySubject = 0;
  while (y) {
    nxt = (struct zx_sec12_ProxySubject_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxySubject->gg.g;
    x->ProxySubject = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionContextStatement_PUT_ProxySubject) */

void zx_sec12_SessionContextStatement_PUT_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_ProxySubject_s* z)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x || !z) return;
  y = x->ProxySubject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxySubject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionContextStatement_ADD_ProxySubject) */

void zx_sec12_SessionContextStatement_ADD_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_ProxySubject_s* z)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxySubject->gg.g;
    x->ProxySubject = z;
    return;
  case -1:
    y = x->ProxySubject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionContextStatement_DEL_ProxySubject) */

void zx_sec12_SessionContextStatement_DEL_ProxySubject(struct zx_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_sec12_ProxySubject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxySubject = (struct zx_sec12_ProxySubject_s*)x->ProxySubject->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec12_ProxySubject_s*)x->ProxySubject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxySubject; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_ProxySubject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionContextStatement_NUM_SessionContext) */

int zx_sec12_SessionContextStatement_NUM_SessionContext(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sec12_SessionContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SessionContext; y; ++n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionContextStatement_GET_SessionContext) */

struct zx_sec12_SessionContext_s* zx_sec12_SessionContextStatement_GET_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x) return 0;
  for (y = x->SessionContext; n>=0 && y; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionContextStatement_POP_SessionContext) */

struct zx_sec12_SessionContext_s* zx_sec12_SessionContextStatement_POP_SessionContext(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x) return 0;
  y = x->SessionContext;
  if (y)
    x->SessionContext = (struct zx_sec12_SessionContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionContextStatement_PUSH_SessionContext) */

void zx_sec12_SessionContextStatement_PUSH_SessionContext(struct zx_sec12_SessionContextStatement_s* x, struct zx_sec12_SessionContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SessionContext->gg.g;
  x->SessionContext = z;
}

/* FUNC(zx_sec12_SessionContextStatement_REV_SessionContext) */

void zx_sec12_SessionContextStatement_REV_SessionContext(struct zx_sec12_SessionContextStatement_s* x)
{
  struct zx_sec12_SessionContext_s* nxt;
  struct zx_sec12_SessionContext_s* y;
  if (!x) return;
  y = x->SessionContext;
  if (!y) return;
  x->SessionContext = 0;
  while (y) {
    nxt = (struct zx_sec12_SessionContext_s*)y->gg.g.n;
    y->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionContextStatement_PUT_SessionContext) */

void zx_sec12_SessionContextStatement_PUT_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_SessionContext_s* z)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x || !z) return;
  y = x->SessionContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SessionContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionContextStatement_ADD_SessionContext) */

void zx_sec12_SessionContextStatement_ADD_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n, struct zx_sec12_SessionContext_s* z)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SessionContext->gg.g;
    x->SessionContext = z;
    return;
  case -1:
    y = x->SessionContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionContextStatement_DEL_SessionContext) */

void zx_sec12_SessionContextStatement_DEL_SessionContext(struct zx_sec12_SessionContextStatement_s* x, int n)
{
  struct zx_sec12_SessionContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SessionContext = (struct zx_sec12_SessionContext_s*)x->SessionContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec12_SessionContext_s*)x->SessionContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SessionContext; n > 1 && y->gg.g.n; --n, y = (struct zx_sec12_SessionContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionSubject_NUM_NameIdentifier) */

int zx_sec12_SessionSubject_NUM_NameIdentifier(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_sa11_NameIdentifier_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifier; y; ++n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionSubject_GET_NameIdentifier) */

struct zx_sa11_NameIdentifier_s* zx_sec12_SessionSubject_GET_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifier; n>=0 && y; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionSubject_POP_NameIdentifier) */

struct zx_sa11_NameIdentifier_s* zx_sec12_SessionSubject_POP_NameIdentifier(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return 0;
  y = x->NameIdentifier;
  if (y)
    x->NameIdentifier = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionSubject_PUSH_NameIdentifier) */

void zx_sec12_SessionSubject_PUSH_NameIdentifier(struct zx_sec12_SessionSubject_s* x, struct zx_sa11_NameIdentifier_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifier->gg.g;
  x->NameIdentifier = z;
}

/* FUNC(zx_sec12_SessionSubject_REV_NameIdentifier) */

void zx_sec12_SessionSubject_REV_NameIdentifier(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_sa11_NameIdentifier_s* nxt;
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return;
  y = x->NameIdentifier;
  if (!y) return;
  x->NameIdentifier = 0;
  while (y) {
    nxt = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifier->gg.g;
    x->NameIdentifier = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionSubject_PUT_NameIdentifier) */

void zx_sec12_SessionSubject_PUT_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_NameIdentifier_s* z)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x || !z) return;
  y = x->NameIdentifier;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifier = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionSubject_ADD_NameIdentifier) */

void zx_sec12_SessionSubject_ADD_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_NameIdentifier_s* z)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifier->gg.g;
    x->NameIdentifier = z;
    return;
  case -1:
    y = x->NameIdentifier;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifier; n > 1 && y; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionSubject_DEL_NameIdentifier) */

void zx_sec12_SessionSubject_DEL_NameIdentifier(struct zx_sec12_SessionSubject_s* x, int n)
{
  struct zx_sa11_NameIdentifier_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifier = (struct zx_sa11_NameIdentifier_s*)x->NameIdentifier->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_NameIdentifier_s*)x->NameIdentifier;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifier; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_NameIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionSubject_NUM_SubjectConfirmation) */

int zx_sec12_SessionSubject_NUM_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; y; ++n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionSubject_GET_SubjectConfirmation) */

struct zx_sa11_SubjectConfirmation_s* zx_sec12_SessionSubject_GET_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return 0;
  for (y = x->SubjectConfirmation; n>=0 && y; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionSubject_POP_SubjectConfirmation) */

struct zx_sa11_SubjectConfirmation_s* zx_sec12_SessionSubject_POP_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return 0;
  y = x->SubjectConfirmation;
  if (y)
    x->SubjectConfirmation = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionSubject_PUSH_SubjectConfirmation) */

void zx_sec12_SessionSubject_PUSH_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, struct zx_sa11_SubjectConfirmation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectConfirmation->gg.g;
  x->SubjectConfirmation = z;
}

/* FUNC(zx_sec12_SessionSubject_REV_SubjectConfirmation) */

void zx_sec12_SessionSubject_REV_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_sa11_SubjectConfirmation_s* nxt;
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  x->SubjectConfirmation = 0;
  while (y) {
    nxt = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionSubject_PUT_SubjectConfirmation) */

void zx_sec12_SessionSubject_PUT_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x || !z) return;
  y = x->SubjectConfirmation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectConfirmation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionSubject_ADD_SubjectConfirmation) */

void zx_sec12_SessionSubject_ADD_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n, struct zx_sa11_SubjectConfirmation_s* z)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectConfirmation->gg.g;
    x->SubjectConfirmation = z;
    return;
  case -1:
    y = x->SubjectConfirmation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionSubject_DEL_SubjectConfirmation) */

void zx_sec12_SessionSubject_DEL_SubjectConfirmation(struct zx_sec12_SessionSubject_s* x, int n)
{
  struct zx_sa11_SubjectConfirmation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectConfirmation = (struct zx_sa11_SubjectConfirmation_s*)x->SubjectConfirmation->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_SubjectConfirmation_s*)x->SubjectConfirmation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectConfirmation; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_SubjectConfirmation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_SessionSubject_NUM_IDPProvidedNameIdentifier) */

int zx_sec12_SessionSubject_NUM_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IDPProvidedNameIdentifier; y; ++n, y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_sec12_SessionSubject_GET_IDPProvidedNameIdentifier) */

struct zx_ff12_IDPProvidedNameIdentifier_s* zx_sec12_SessionSubject_GET_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  if (!x) return 0;
  for (y = x->IDPProvidedNameIdentifier; n>=0 && y; --n, y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_sec12_SessionSubject_POP_IDPProvidedNameIdentifier) */

struct zx_ff12_IDPProvidedNameIdentifier_s* zx_sec12_SessionSubject_POP_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  if (!x) return 0;
  y = x->IDPProvidedNameIdentifier;
  if (y)
    x->IDPProvidedNameIdentifier = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_sec12_SessionSubject_PUSH_IDPProvidedNameIdentifier) */

void zx_sec12_SessionSubject_PUSH_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, struct zx_ff12_IDPProvidedNameIdentifier_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IDPProvidedNameIdentifier->gg.g;
  x->IDPProvidedNameIdentifier = z;
}

/* FUNC(zx_sec12_SessionSubject_REV_IDPProvidedNameIdentifier) */

void zx_sec12_SessionSubject_REV_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* nxt;
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  if (!x) return;
  y = x->IDPProvidedNameIdentifier;
  if (!y) return;
  x->IDPProvidedNameIdentifier = 0;
  while (y) {
    nxt = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n;
    y->gg.g.n = &x->IDPProvidedNameIdentifier->gg.g;
    x->IDPProvidedNameIdentifier = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_SessionSubject_PUT_IDPProvidedNameIdentifier) */

void zx_sec12_SessionSubject_PUT_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  if (!x || !z) return;
  y = x->IDPProvidedNameIdentifier;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IDPProvidedNameIdentifier = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_sec12_SessionSubject_ADD_IDPProvidedNameIdentifier) */

void zx_sec12_SessionSubject_ADD_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n, struct zx_ff12_IDPProvidedNameIdentifier_s* z)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IDPProvidedNameIdentifier->gg.g;
    x->IDPProvidedNameIdentifier = z;
    return;
  case -1:
    y = x->IDPProvidedNameIdentifier;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPProvidedNameIdentifier; n > 1 && y; --n, y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_sec12_SessionSubject_DEL_IDPProvidedNameIdentifier) */

void zx_sec12_SessionSubject_DEL_IDPProvidedNameIdentifier(struct zx_sec12_SessionSubject_s* x, int n)
{
  struct zx_ff12_IDPProvidedNameIdentifier_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IDPProvidedNameIdentifier = (struct zx_ff12_IDPProvidedNameIdentifier_s*)x->IDPProvidedNameIdentifier->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)x->IDPProvidedNameIdentifier;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IDPProvidedNameIdentifier; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_IDPProvidedNameIdentifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_sec12_ValidityRestrictionCondition_NUM_NumberOfUses) */

int zx_sec12_ValidityRestrictionCondition_NUM_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NumberOfUses; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_GET_NumberOfUses) */

struct zx_elem_s* zx_sec12_ValidityRestrictionCondition_GET_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NumberOfUses; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_POP_NumberOfUses) */

struct zx_elem_s* zx_sec12_ValidityRestrictionCondition_POP_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NumberOfUses;
  if (y)
    x->NumberOfUses = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses) */

void zx_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NumberOfUses->g;
  x->NumberOfUses = z;
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_REV_NumberOfUses) */

void zx_sec12_ValidityRestrictionCondition_REV_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NumberOfUses;
  if (!y) return;
  x->NumberOfUses = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NumberOfUses->g;
    x->NumberOfUses = y;
    y = nxt;
  }
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_PUT_NumberOfUses) */

void zx_sec12_ValidityRestrictionCondition_PUT_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NumberOfUses;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NumberOfUses = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_ADD_NumberOfUses) */

void zx_sec12_ValidityRestrictionCondition_ADD_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NumberOfUses->g;
    x->NumberOfUses = z;
    return;
  case -1:
    y = x->NumberOfUses;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NumberOfUses; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_sec12_ValidityRestrictionCondition_DEL_NumberOfUses) */

void zx_sec12_ValidityRestrictionCondition_DEL_NumberOfUses(struct zx_sec12_ValidityRestrictionCondition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NumberOfUses = (struct zx_elem_s*)x->NumberOfUses->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NumberOfUses;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NumberOfUses; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* EOF -- c/zx-sec12-getput.c */