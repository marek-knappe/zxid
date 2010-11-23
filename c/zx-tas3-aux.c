/* c/zx-tas3-aux.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** aux-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: aux-templ.c,v 1.12 2008-10-04 23:42:14 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-tas3-data.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   tas3_Credentials
#define EL_STRUCT zx_tas3_Credentials_s
#define EL_NS     tas3
#define EL_TAG    Credentials

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_tas3_Credentials) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->usage);
  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->mustUnderstand);

  for (se = &x->Assertion->gg;
       se && se->g.tok == zx_sa_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sa_Assertion(c, (struct zx_sa_Assertion_s*)se);
  for (se = &x->EncryptedAssertion->gg;
       se && se->g.tok == zx_sa_EncryptedAssertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sa_EncryptedAssertion(c, (struct zx_sa_EncryptedAssertion_s*)se);
  for (se = &x->sa11_Assertion->gg;
       se && se->g.tok == zx_sa11_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sa11_Assertion(c, (struct zx_sa11_Assertion_s*)se);
  for (se = &x->ff12_Assertion->gg;
       se && se->g.tok == zx_ff12_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_ff12_Assertion(c, (struct zx_ff12_Assertion_s*)se);
  for (se = &x->Attribute->gg;
       se && se->g.tok == zx_sa_Attribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sa_Attribute(c, (struct zx_sa_Attribute_s*)se);
  for (se = &x->EncryptedAttribute->gg;
       se && se->g.tok == zx_sa_EncryptedAttribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sa_EncryptedAttribute(c, (struct zx_sa_EncryptedAttribute_s*)se);
  for (se = &x->xac_Attribute->gg;
       se && se->g.tok == zx_xac_Attribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_xac_Attribute(c, (struct zx_xac_Attribute_s*)se);

}

/* FUNC(zx_DEEP_CLONE_tas3_Credentials) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_tas3_Credentials_s* zx_DEEP_CLONE_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_tas3_Credentials_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_tas3_Credentials_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->usage = zx_clone_attr(c, x->usage);
  x->Id = zx_clone_attr(c, x->Id);
  x->actor = zx_clone_attr(c, x->actor);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);

  for (enn = 0, e = &x->Assertion->gg;
       e && e->g.tok == zx_sa_Assertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sa_Assertion(c,(struct zx_sa_Assertion_s*)e,dup_strs);
  	  if (!enn)
  	      x->Assertion = (struct zx_sa_Assertion_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->EncryptedAssertion->gg;
       e && e->g.tok == zx_sa_EncryptedAssertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sa_EncryptedAssertion(c,(struct zx_sa_EncryptedAssertion_s*)e,dup_strs);
  	  if (!enn)
  	      x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->sa11_Assertion->gg;
       e && e->g.tok == zx_sa11_Assertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sa11_Assertion(c,(struct zx_sa11_Assertion_s*)e,dup_strs);
  	  if (!enn)
  	      x->sa11_Assertion = (struct zx_sa11_Assertion_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->ff12_Assertion->gg;
       e && e->g.tok == zx_ff12_Assertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_ff12_Assertion(c,(struct zx_ff12_Assertion_s*)e,dup_strs);
  	  if (!enn)
  	      x->ff12_Assertion = (struct zx_ff12_Assertion_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->Attribute->gg;
       e && e->g.tok == zx_sa_Attribute_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sa_Attribute(c,(struct zx_sa_Attribute_s*)e,dup_strs);
  	  if (!enn)
  	      x->Attribute = (struct zx_sa_Attribute_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->EncryptedAttribute->gg;
       e && e->g.tok == zx_sa_EncryptedAttribute_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sa_EncryptedAttribute(c,(struct zx_sa_EncryptedAttribute_s*)e,dup_strs);
  	  if (!enn)
  	      x->EncryptedAttribute = (struct zx_sa_EncryptedAttribute_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->xac_Attribute->gg;
       e && e->g.tok == zx_xac_Attribute_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_xac_Attribute(c,(struct zx_xac_Attribute_s*)e,dup_strs);
  	  if (!enn)
  	      x->xac_Attribute = (struct zx_xac_Attribute_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_tas3_Credentials) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Assertion->gg;
       e && e->g.tok == zx_sa_Assertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sa_Assertion(c, (struct zx_sa_Assertion_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->EncryptedAssertion->gg;
       e && e->g.tok == zx_sa_EncryptedAssertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sa_EncryptedAssertion(c, (struct zx_sa_EncryptedAssertion_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->sa11_Assertion->gg;
       e && e->g.tok == zx_sa11_Assertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sa11_Assertion(c, (struct zx_sa11_Assertion_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->ff12_Assertion->gg;
       e && e->g.tok == zx_ff12_Assertion_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_ff12_Assertion(c, (struct zx_ff12_Assertion_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->Attribute->gg;
       e && e->g.tok == zx_sa_Attribute_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sa_Attribute(c, (struct zx_sa_Attribute_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->EncryptedAttribute->gg;
       e && e->g.tok == zx_sa_EncryptedAttribute_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sa_EncryptedAttribute(c, (struct zx_sa_EncryptedAttribute_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->xac_Attribute->gg;
       e && e->g.tok == zx_xac_Attribute_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_xac_Attribute(c, (struct zx_xac_Attribute_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_tas3_Credentials) */

int zx_WALK_WO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   tas3_ESLApply
#define EL_STRUCT zx_tas3_ESLApply_s
#define EL_NS     tas3
#define EL_TAG    ESLApply

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_tas3_ESLApply) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = &x->ESLRef->gg;
       se && se->g.tok == zx_tas3_ESLRef_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_tas3_ESLRef(c, (struct zx_tas3_ESLRef_s*)se);
  for (se = &x->Obligation->gg;
       se && se->g.tok == zx_xa_Obligation_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_xa_Obligation(c, (struct zx_xa_Obligation_s*)se);

}

/* FUNC(zx_DEEP_CLONE_tas3_ESLApply) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_tas3_ESLApply_s* zx_DEEP_CLONE_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_tas3_ESLApply_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_tas3_ESLApply_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  for (enn = 0, e = &x->ESLRef->gg;
       e && e->g.tok == zx_tas3_ESLRef_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_tas3_ESLRef(c,(struct zx_tas3_ESLRef_s*)e,dup_strs);
  	  if (!enn)
  	      x->ESLRef = (struct zx_tas3_ESLRef_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->Obligation->gg;
       e && e->g.tok == zx_xa_Obligation_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_xa_Obligation(c,(struct zx_xa_Obligation_s*)e,dup_strs);
  	  if (!enn)
  	      x->Obligation = (struct zx_xa_Obligation_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_tas3_ESLApply) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->ESLRef->gg;
       e && e->g.tok == zx_tas3_ESLRef_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_tas3_ESLRef(c, (struct zx_tas3_ESLRef_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->Obligation->gg;
       e && e->g.tok == zx_xa_Obligation_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_xa_Obligation(c, (struct zx_xa_Obligation_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_tas3_ESLApply) */

int zx_WALK_WO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   tas3_ESLPolicies
#define EL_STRUCT zx_tas3_ESLPolicies_s
#define EL_NS     tas3
#define EL_TAG    ESLPolicies

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_tas3_ESLPolicies) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->usage);
  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->mustUnderstand);

  for (se = &x->ESLApply->gg;
       se && se->g.tok == zx_tas3_ESLApply_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_tas3_ESLApply(c, (struct zx_tas3_ESLApply_s*)se);

}

/* FUNC(zx_DEEP_CLONE_tas3_ESLPolicies) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_tas3_ESLPolicies_s* zx_DEEP_CLONE_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_tas3_ESLPolicies_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_tas3_ESLPolicies_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->id = zx_clone_attr(c, x->id);
  x->usage = zx_clone_attr(c, x->usage);
  x->Id = zx_clone_attr(c, x->Id);
  x->actor = zx_clone_attr(c, x->actor);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);

  for (enn = 0, e = &x->ESLApply->gg;
       e && e->g.tok == zx_tas3_ESLApply_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_tas3_ESLApply(c,(struct zx_tas3_ESLApply_s*)e,dup_strs);
  	  if (!enn)
  	      x->ESLApply = (struct zx_tas3_ESLApply_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_tas3_ESLPolicies) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->ESLApply->gg;
       e && e->g.tok == zx_tas3_ESLApply_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_tas3_ESLApply(c, (struct zx_tas3_ESLApply_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_tas3_ESLPolicies) */

int zx_WALK_WO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   tas3_ESLRef
#define EL_STRUCT zx_tas3_ESLRef_s
#define EL_NS     tas3
#define EL_TAG    ESLRef

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_tas3_ESLRef) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->xpath);


}

/* FUNC(zx_DEEP_CLONE_tas3_ESLRef) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_tas3_ESLRef_s* zx_DEEP_CLONE_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_tas3_ESLRef_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_tas3_ESLRef_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->ref = zx_clone_attr(c, x->ref);
  x->xpath = zx_clone_attr(c, x->xpath);


  return x;
}

/* FUNC(zx_WALK_SO_tas3_ESLRef) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_tas3_ESLRef) */

int zx_WALK_WO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   tas3_Status
#define EL_STRUCT zx_tas3_Status_s
#define EL_NS     tas3
#define EL_TAG    Status

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_tas3_Status) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->code);
  zx_dup_attr(c, x->comment);
  zx_dup_attr(c, x->ctlpt);
  zx_dup_attr(c, x->id);
  zx_dup_attr(c, x->ref);
  zx_dup_attr(c, x->Id);
  zx_dup_attr(c, x->actor);
  zx_dup_attr(c, x->mustUnderstand);

  for (se = &x->Status->gg;
       se && se->g.tok == zx_lu_Status_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_lu_Status(c, (struct zx_lu_Status_s*)se);

}

/* FUNC(zx_DEEP_CLONE_tas3_Status) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_tas3_Status_s* zx_DEEP_CLONE_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_tas3_Status_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_tas3_Status_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->code = zx_clone_attr(c, x->code);
  x->comment = zx_clone_attr(c, x->comment);
  x->ctlpt = zx_clone_attr(c, x->ctlpt);
  x->id = zx_clone_attr(c, x->id);
  x->ref = zx_clone_attr(c, x->ref);
  x->Id = zx_clone_attr(c, x->Id);
  x->actor = zx_clone_attr(c, x->actor);
  x->mustUnderstand = zx_clone_attr(c, x->mustUnderstand);

  for (enn = 0, e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_lu_Status(c,(struct zx_lu_Status_s*)e,dup_strs);
  	  if (!enn)
  	      x->Status = (struct zx_lu_Status_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_tas3_Status) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_lu_Status(c, (struct zx_lu_Status_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_tas3_Status) */

int zx_WALK_WO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-tas3-aux.c */
