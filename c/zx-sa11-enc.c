/* c/zx-sa11-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: enc-templ.c,v 1.27 2007-10-05 22:24:28 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 ** 23.9.2006, added WO logic --Sampo
 ** 30.9.2007, improvements to WO encoding --Sampo
 ** 8.2.2010,  better handling of schema order encoding of unknown namespace prefixes --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** N.B2: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-sa11-data.h"
#include "c/zx-ns.h"



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

#define EL_NAME   sa11_Action
#define EL_STRUCT zx_sa11_Action_s
#define EL_NS     sa11
#define EL_TAG    Action

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Action) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Action")-1 + 1 + sizeof("</sa11:Action>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->Namespace, sizeof("Namespace")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Action", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Action) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Action")-1 + 1 + 2 + sizeof("Action")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Namespace, sizeof("Namespace")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Action", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Action");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->Namespace, " Namespace=\"", sizeof(" Namespace=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Action>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Action", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Action) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Action", sizeof("Action")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Namespace, "Namespace=\"", sizeof("Namespace=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Action", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Action) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Action(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Action(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Action) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Action(struct zx_ctx* c, struct zx_sa11_Action_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Action(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Action(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_Advice
#define EL_STRUCT zx_sa11_Advice_s
#define EL_NS     sa11
#define EL_TAG    Advice

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Advice) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Advice")-1 + 1 + sizeof("</sa11:Advice>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:AssertionIDReference")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Assertion(c, e);
  }
  {
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_ff12_Assertion(c, e);
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->sa_Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa_Assertion(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Advice", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Advice) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Advice")-1 + 1 + 2 + sizeof("Advice")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("AssertionIDReference")-1);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Assertion(c, e);
  }
  {
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_ff12_Assertion(c, e);
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->sa_Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa_Assertion(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Advice", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Advice");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:AssertionIDReference", sizeof("sa11:AssertionIDReference")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(c, e, p);
  }
  {
      struct zx_ff12_Assertion_s* e;
      for (e = x->ff12_Assertion; e; e = (struct zx_ff12_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_ff12_Assertion(c, e, p);
  }
  {
      struct zx_sa_Assertion_s* e;
      for (e = x->sa_Assertion; e; e = (struct zx_sa_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa_Assertion(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Advice>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Advice", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Advice) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Advice", sizeof("Advice")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Advice", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Advice) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Advice(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Advice(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Advice) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Advice(struct zx_ctx* c, struct zx_sa11_Advice_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Advice(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Advice(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_Assertion
#define EL_STRUCT zx_sa11_Assertion_s
#define EL_NS     sa11
#define EL_TAG    Assertion

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Assertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Assertion")-1 + 1 + sizeof("</sa11:Assertion>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->AssertionID, sizeof("AssertionID")-1);
  len += zx_attr_so_len(x->IssueInstant, sizeof("IssueInstant")-1);
  len += zx_attr_so_len(x->Issuer, sizeof("Issuer")-1);
  len += zx_attr_so_len(x->MajorVersion, sizeof("MajorVersion")-1);
  len += zx_attr_so_len(x->MinorVersion, sizeof("MinorVersion")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Conditions(c, e);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Advice(c, e);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:Statement")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_SubjectStatement(c, e);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_AuthenticationStatement(c, e);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_AuthorizationDecisionStatement(c, e);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_AttributeStatement(c, e);
  }
  {
      struct zx_xasa_XACMLAuthzDecisionStatement_s* e;
      for (e = x->XACMLAuthzDecisionStatement; e; e = (struct zx_xasa_XACMLAuthzDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_xasa_XACMLAuthzDecisionStatement(c, e);
  }
  {
      struct zx_xasa_XACMLPolicyStatement_s* e;
      for (e = x->XACMLPolicyStatement; e; e = (struct zx_xasa_XACMLPolicyStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_xasa_XACMLPolicyStatement(c, e);
  }
  {
      struct zx_xasacd1_XACMLAuthzDecisionStatement_s* e;
      for (e = x->xasacd1_XACMLAuthzDecisionStatement; e; e = (struct zx_xasacd1_XACMLAuthzDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_xasacd1_XACMLAuthzDecisionStatement(c, e);
  }
  {
      struct zx_xasacd1_XACMLPolicyStatement_s* e;
      for (e = x->xasacd1_XACMLPolicyStatement; e; e = (struct zx_xasacd1_XACMLPolicyStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_xasacd1_XACMLPolicyStatement(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  if (e != c->exclude_sig)
              len += zx_LEN_SO_ds_Signature(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Assertion", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Assertion) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Assertion")-1 + 1 + 2 + sizeof("Assertion")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->AssertionID, sizeof("AssertionID")-1);
  len += zx_attr_wo_len(x->IssueInstant, sizeof("IssueInstant")-1);
  len += zx_attr_wo_len(x->Issuer, sizeof("Issuer")-1);
  len += zx_attr_wo_len(x->MajorVersion, sizeof("MajorVersion")-1);
  len += zx_attr_wo_len(x->MinorVersion, sizeof("MinorVersion")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Conditions(c, e);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Advice(c, e);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Statement")-1);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_SubjectStatement(c, e);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_AuthenticationStatement(c, e);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_AuthorizationDecisionStatement(c, e);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_AttributeStatement(c, e);
  }
  {
      struct zx_xasa_XACMLAuthzDecisionStatement_s* e;
      for (e = x->XACMLAuthzDecisionStatement; e; e = (struct zx_xasa_XACMLAuthzDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_xasa_XACMLAuthzDecisionStatement(c, e);
  }
  {
      struct zx_xasa_XACMLPolicyStatement_s* e;
      for (e = x->XACMLPolicyStatement; e; e = (struct zx_xasa_XACMLPolicyStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_xasa_XACMLPolicyStatement(c, e);
  }
  {
      struct zx_xasacd1_XACMLAuthzDecisionStatement_s* e;
      for (e = x->xasacd1_XACMLAuthzDecisionStatement; e; e = (struct zx_xasacd1_XACMLAuthzDecisionStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_xasacd1_XACMLAuthzDecisionStatement(c, e);
  }
  {
      struct zx_xasacd1_XACMLPolicyStatement_s* e;
      for (e = x->xasacd1_XACMLPolicyStatement; e; e = (struct zx_xasacd1_XACMLPolicyStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_xasacd1_XACMLPolicyStatement(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  if (e != c->exclude_sig)
              len += zx_LEN_WO_ds_Signature(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Assertion", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Assertion");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->AssertionID, " AssertionID=\"", sizeof(" AssertionID=\"")-1);
  p = zx_attr_so_enc(p, x->IssueInstant, " IssueInstant=\"", sizeof(" IssueInstant=\"")-1);
  p = zx_attr_so_enc(p, x->Issuer, " Issuer=\"", sizeof(" Issuer=\"")-1);
  p = zx_attr_so_enc(p, x->MajorVersion, " MajorVersion=\"", sizeof(" MajorVersion=\"")-1);
  p = zx_attr_so_enc(p, x->MinorVersion, " MinorVersion=\"", sizeof(" MinorVersion=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Conditions_s* e;
      for (e = x->Conditions; e; e = (struct zx_sa11_Conditions_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Conditions(c, e, p);
  }
  {
      struct zx_sa11_Advice_s* e;
      for (e = x->Advice; e; e = (struct zx_sa11_Advice_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Advice(c, e, p);
  }
  for (se = x->Statement; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:Statement", sizeof("sa11:Statement")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_sa11_SubjectStatement_s* e;
      for (e = x->SubjectStatement; e; e = (struct zx_sa11_SubjectStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectStatement(c, e, p);
  }
  {
      struct zx_sa11_AuthenticationStatement_s* e;
      for (e = x->AuthenticationStatement; e; e = (struct zx_sa11_AuthenticationStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthenticationStatement(c, e, p);
  }
  {
      struct zx_sa11_AuthorizationDecisionStatement_s* e;
      for (e = x->AuthorizationDecisionStatement; e; e = (struct zx_sa11_AuthorizationDecisionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthorizationDecisionStatement(c, e, p);
  }
  {
      struct zx_sa11_AttributeStatement_s* e;
      for (e = x->AttributeStatement; e; e = (struct zx_sa11_AttributeStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AttributeStatement(c, e, p);
  }
  {
      struct zx_xasa_XACMLAuthzDecisionStatement_s* e;
      for (e = x->XACMLAuthzDecisionStatement; e; e = (struct zx_xasa_XACMLAuthzDecisionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_xasa_XACMLAuthzDecisionStatement(c, e, p);
  }
  {
      struct zx_xasa_XACMLPolicyStatement_s* e;
      for (e = x->XACMLPolicyStatement; e; e = (struct zx_xasa_XACMLPolicyStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_xasa_XACMLPolicyStatement(c, e, p);
  }
  {
      struct zx_xasacd1_XACMLAuthzDecisionStatement_s* e;
      for (e = x->xasacd1_XACMLAuthzDecisionStatement; e; e = (struct zx_xasacd1_XACMLAuthzDecisionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_xasacd1_XACMLAuthzDecisionStatement(c, e, p);
  }
  {
      struct zx_xasacd1_XACMLPolicyStatement_s* e;
      for (e = x->xasacd1_XACMLPolicyStatement; e; e = (struct zx_xasacd1_XACMLPolicyStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_xasacd1_XACMLPolicyStatement(c, e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  if (e != c->exclude_sig)
              p = zx_ENC_SO_ds_Signature(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Assertion>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Assertion", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Assertion) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Assertion", sizeof("Assertion")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->AssertionID, "AssertionID=\"", sizeof("AssertionID=\"")-1);
  p = zx_attr_wo_enc(p, x->IssueInstant, "IssueInstant=\"", sizeof("IssueInstant=\"")-1);
  p = zx_attr_wo_enc(p, x->Issuer, "Issuer=\"", sizeof("Issuer=\"")-1);
  p = zx_attr_wo_enc(p, x->MajorVersion, "MajorVersion=\"", sizeof("MajorVersion=\"")-1);
  p = zx_attr_wo_enc(p, x->MinorVersion, "MinorVersion=\"", sizeof("MinorVersion=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Assertion", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Assertion) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Assertion(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Assertion(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Assertion) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Assertion(struct zx_ctx* c, struct zx_sa11_Assertion_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Assertion(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Assertion(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_Attribute
#define EL_STRUCT zx_sa11_Attribute_s
#define EL_NS     sa11
#define EL_TAG    Attribute

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Attribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Attribute")-1 + 1 + sizeof("</sa11:Attribute>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->AttributeName, sizeof("AttributeName")-1);
  len += zx_attr_so_len(x->AttributeNamespace, sizeof("AttributeNamespace")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_sa11_AttributeValue_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_AttributeValue(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Attribute", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Attribute) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Attribute")-1 + 1 + 2 + sizeof("Attribute")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->AttributeName, sizeof("AttributeName")-1);
  len += zx_attr_wo_len(x->AttributeNamespace, sizeof("AttributeNamespace")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_sa11_AttributeValue_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_AttributeValue(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Attribute", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Attribute");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->AttributeName, " AttributeName=\"", sizeof(" AttributeName=\"")-1);
  p = zx_attr_so_enc(p, x->AttributeNamespace, " AttributeNamespace=\"", sizeof(" AttributeNamespace=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_AttributeValue_s* e;
      for (e = x->AttributeValue; e; e = (struct zx_sa11_AttributeValue_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AttributeValue(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Attribute>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Attribute", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Attribute) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Attribute", sizeof("Attribute")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->AttributeName, "AttributeName=\"", sizeof("AttributeName=\"")-1);
  p = zx_attr_wo_enc(p, x->AttributeNamespace, "AttributeNamespace=\"", sizeof("AttributeNamespace=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Attribute", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Attribute) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Attribute(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Attribute(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Attribute) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Attribute(struct zx_ctx* c, struct zx_sa11_Attribute_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Attribute(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Attribute(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AttributeDesignator
#define EL_STRUCT zx_sa11_AttributeDesignator_s
#define EL_NS     sa11
#define EL_TAG    AttributeDesignator

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AttributeDesignator) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AttributeDesignator")-1 + 1 + sizeof("</sa11:AttributeDesignator>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->AttributeName, sizeof("AttributeName")-1);
  len += zx_attr_so_len(x->AttributeNamespace, sizeof("AttributeNamespace")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AttributeDesignator", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AttributeDesignator) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeDesignator")-1 + 1 + 2 + sizeof("AttributeDesignator")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->AttributeName, sizeof("AttributeName")-1);
  len += zx_attr_wo_len(x->AttributeNamespace, sizeof("AttributeNamespace")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AttributeDesignator", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AttributeDesignator) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AttributeDesignator");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->AttributeName, " AttributeName=\"", sizeof(" AttributeName=\"")-1);
  p = zx_attr_so_enc(p, x->AttributeNamespace, " AttributeNamespace=\"", sizeof(" AttributeNamespace=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AttributeDesignator>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AttributeDesignator", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AttributeDesignator) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeDesignator", sizeof("AttributeDesignator")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->AttributeName, "AttributeName=\"", sizeof("AttributeName=\"")-1);
  p = zx_attr_wo_enc(p, x->AttributeNamespace, "AttributeNamespace=\"", sizeof("AttributeNamespace=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AttributeDesignator", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AttributeDesignator) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AttributeDesignator(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AttributeDesignator(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AttributeDesignator) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AttributeDesignator(struct zx_ctx* c, struct zx_sa11_AttributeDesignator_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AttributeDesignator(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AttributeDesignator(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AttributeStatement
#define EL_STRUCT zx_sa11_AttributeStatement_s
#define EL_NS     sa11
#define EL_TAG    AttributeStatement

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AttributeStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AttributeStatement")-1 + 1 + sizeof("</sa11:AttributeStatement>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Subject(c, e);
  }
  {
      struct zx_sa11_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa11_Attribute_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Attribute(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AttributeStatement", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AttributeStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeStatement")-1 + 1 + 2 + sizeof("AttributeStatement")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Subject(c, e);
  }
  {
      struct zx_sa11_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa11_Attribute_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Attribute(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AttributeStatement", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AttributeStatement");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(c, e, p);
  }
  {
      struct zx_sa11_Attribute_s* e;
      for (e = x->Attribute; e; e = (struct zx_sa11_Attribute_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Attribute(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AttributeStatement>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AttributeStatement", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AttributeStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeStatement", sizeof("AttributeStatement")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AttributeStatement", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AttributeStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AttributeStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AttributeStatement(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AttributeStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AttributeStatement(struct zx_ctx* c, struct zx_sa11_AttributeStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AttributeStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AttributeStatement(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AttributeValue
#define EL_STRUCT zx_sa11_AttributeValue_s
#define EL_NS     sa11
#define EL_TAG    AttributeValue

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AttributeValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AttributeValue")-1 + 1 + sizeof("</sa11:AttributeValue>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zx_di12_ResourceOffering_s*)e->gg.g.n)
	  len += zx_LEN_SO_di12_ResourceOffering(c, e);
  }
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  len += zx_LEN_SO_a_EndpointReference(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AttributeValue", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AttributeValue) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AttributeValue")-1 + 1 + 2 + sizeof("AttributeValue")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zx_di12_ResourceOffering_s*)e->gg.g.n)
	  len += zx_LEN_WO_di12_ResourceOffering(c, e);
  }
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  len += zx_LEN_WO_a_EndpointReference(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AttributeValue", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AttributeValue) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AttributeValue");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_di12_ResourceOffering_s* e;
      for (e = x->ResourceOffering; e; e = (struct zx_di12_ResourceOffering_s*)e->gg.g.n)
	  p = zx_ENC_SO_di12_ResourceOffering(c, e, p);
  }
  {
      struct zx_a_EndpointReference_s* e;
      for (e = x->EndpointReference; e; e = (struct zx_a_EndpointReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_a_EndpointReference(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AttributeValue>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AttributeValue", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AttributeValue) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AttributeValue", sizeof("AttributeValue")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AttributeValue", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AttributeValue) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AttributeValue(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AttributeValue(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AttributeValue) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AttributeValue(struct zx_ctx* c, struct zx_sa11_AttributeValue_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AttributeValue(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AttributeValue(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AudienceRestrictionCondition
#define EL_STRUCT zx_sa11_AudienceRestrictionCondition_s
#define EL_NS     sa11
#define EL_TAG    AudienceRestrictionCondition

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AudienceRestrictionCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AudienceRestrictionCondition")-1 + 1 + sizeof("</sa11:AudienceRestrictionCondition>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:Audience")-1, zx_ns_tab+zx_xmlns_ix_sa11);


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AudienceRestrictionCondition", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AudienceRestrictionCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AudienceRestrictionCondition")-1 + 1 + 2 + sizeof("AudienceRestrictionCondition")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Audience")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AudienceRestrictionCondition", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AudienceRestrictionCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AudienceRestrictionCondition");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Audience; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:Audience", sizeof("sa11:Audience")-1, zx_ns_tab+zx_xmlns_ix_sa11);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AudienceRestrictionCondition>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AudienceRestrictionCondition", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AudienceRestrictionCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AudienceRestrictionCondition", sizeof("AudienceRestrictionCondition")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AudienceRestrictionCondition", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AudienceRestrictionCondition) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AudienceRestrictionCondition(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AudienceRestrictionCondition(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AudienceRestrictionCondition) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AudienceRestrictionCondition(struct zx_ctx* c, struct zx_sa11_AudienceRestrictionCondition_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AudienceRestrictionCondition(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AudienceRestrictionCondition(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AuthenticationStatement
#define EL_STRUCT zx_sa11_AuthenticationStatement_s
#define EL_NS     sa11
#define EL_TAG    AuthenticationStatement

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AuthenticationStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AuthenticationStatement")-1 + 1 + sizeof("</sa11:AuthenticationStatement>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->AuthenticationInstant, sizeof("AuthenticationInstant")-1);
  len += zx_attr_so_len(x->AuthenticationMethod, sizeof("AuthenticationMethod")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Subject(c, e);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_SubjectLocality(c, e);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_AuthorityBinding(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AuthenticationStatement", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AuthenticationStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthenticationStatement")-1 + 1 + 2 + sizeof("AuthenticationStatement")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->AuthenticationInstant, sizeof("AuthenticationInstant")-1);
  len += zx_attr_wo_len(x->AuthenticationMethod, sizeof("AuthenticationMethod")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Subject(c, e);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_SubjectLocality(c, e);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_AuthorityBinding(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AuthenticationStatement", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AuthenticationStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AuthenticationStatement");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->AuthenticationInstant, " AuthenticationInstant=\"", sizeof(" AuthenticationInstant=\"")-1);
  p = zx_attr_so_enc(p, x->AuthenticationMethod, " AuthenticationMethod=\"", sizeof(" AuthenticationMethod=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(c, e, p);
  }
  {
      struct zx_sa11_SubjectLocality_s* e;
      for (e = x->SubjectLocality; e; e = (struct zx_sa11_SubjectLocality_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectLocality(c, e, p);
  }
  {
      struct zx_sa11_AuthorityBinding_s* e;
      for (e = x->AuthorityBinding; e; e = (struct zx_sa11_AuthorityBinding_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AuthorityBinding(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AuthenticationStatement>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AuthenticationStatement", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AuthenticationStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthenticationStatement", sizeof("AuthenticationStatement")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->AuthenticationInstant, "AuthenticationInstant=\"", sizeof("AuthenticationInstant=\"")-1);
  p = zx_attr_wo_enc(p, x->AuthenticationMethod, "AuthenticationMethod=\"", sizeof("AuthenticationMethod=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AuthenticationStatement", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AuthenticationStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AuthenticationStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AuthenticationStatement(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AuthenticationStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AuthenticationStatement(struct zx_ctx* c, struct zx_sa11_AuthenticationStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AuthenticationStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AuthenticationStatement(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AuthorityBinding
#define EL_STRUCT zx_sa11_AuthorityBinding_s
#define EL_NS     sa11
#define EL_TAG    AuthorityBinding

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AuthorityBinding) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AuthorityBinding")-1 + 1 + sizeof("</sa11:AuthorityBinding>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->AuthorityKind, sizeof("AuthorityKind")-1);
  len += zx_attr_so_len(x->Binding, sizeof("Binding")-1);
  len += zx_attr_so_len(x->Location, sizeof("Location")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AuthorityBinding", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AuthorityBinding) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthorityBinding")-1 + 1 + 2 + sizeof("AuthorityBinding")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->AuthorityKind, sizeof("AuthorityKind")-1);
  len += zx_attr_wo_len(x->Binding, sizeof("Binding")-1);
  len += zx_attr_wo_len(x->Location, sizeof("Location")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AuthorityBinding", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AuthorityBinding) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AuthorityBinding");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->AuthorityKind, " AuthorityKind=\"", sizeof(" AuthorityKind=\"")-1);
  p = zx_attr_so_enc(p, x->Binding, " Binding=\"", sizeof(" Binding=\"")-1);
  p = zx_attr_so_enc(p, x->Location, " Location=\"", sizeof(" Location=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AuthorityBinding>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AuthorityBinding", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AuthorityBinding) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorityBinding", sizeof("AuthorityBinding")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->AuthorityKind, "AuthorityKind=\"", sizeof("AuthorityKind=\"")-1);
  p = zx_attr_wo_enc(p, x->Binding, "Binding=\"", sizeof("Binding=\"")-1);
  p = zx_attr_wo_enc(p, x->Location, "Location=\"", sizeof("Location=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AuthorityBinding", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AuthorityBinding) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AuthorityBinding(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AuthorityBinding(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AuthorityBinding) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AuthorityBinding(struct zx_ctx* c, struct zx_sa11_AuthorityBinding_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AuthorityBinding(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AuthorityBinding(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_AuthorizationDecisionStatement
#define EL_STRUCT zx_sa11_AuthorizationDecisionStatement_s
#define EL_NS     sa11
#define EL_TAG    AuthorizationDecisionStatement

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_AuthorizationDecisionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:AuthorizationDecisionStatement")-1 + 1 + sizeof("</sa11:AuthorizationDecisionStatement>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->Decision, sizeof("Decision")-1);
  len += zx_attr_so_len(x->Resource, sizeof("Resource")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Subject(c, e);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Action(c, e);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Evidence(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AuthorizationDecisionStatement", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_AuthorizationDecisionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AuthorizationDecisionStatement")-1 + 1 + 2 + sizeof("AuthorizationDecisionStatement")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Decision, sizeof("Decision")-1);
  len += zx_attr_wo_len(x->Resource, sizeof("Resource")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Subject(c, e);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Action(c, e);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Evidence(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:AuthorizationDecisionStatement", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_AuthorizationDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:AuthorizationDecisionStatement");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->Decision, " Decision=\"", sizeof(" Decision=\"")-1);
  p = zx_attr_so_enc(p, x->Resource, " Resource=\"", sizeof(" Resource=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(c, e, p);
  }
  {
      struct zx_sa11_Action_s* e;
      for (e = x->Action; e; e = (struct zx_sa11_Action_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Action(c, e, p);
  }
  {
      struct zx_sa11_Evidence_s* e;
      for (e = x->Evidence; e; e = (struct zx_sa11_Evidence_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Evidence(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:AuthorizationDecisionStatement>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AuthorizationDecisionStatement", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_AuthorizationDecisionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AuthorizationDecisionStatement", sizeof("AuthorizationDecisionStatement")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Decision, "Decision=\"", sizeof("Decision=\"")-1);
  p = zx_attr_wo_enc(p, x->Resource, "Resource=\"", sizeof("Resource=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:AuthorizationDecisionStatement", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_AuthorizationDecisionStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_AuthorizationDecisionStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_AuthorizationDecisionStatement(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_AuthorizationDecisionStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_AuthorizationDecisionStatement(struct zx_ctx* c, struct zx_sa11_AuthorizationDecisionStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_AuthorizationDecisionStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_AuthorizationDecisionStatement(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_Conditions
#define EL_STRUCT zx_sa11_Conditions_s
#define EL_NS     sa11
#define EL_TAG    Conditions

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Conditions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Conditions")-1 + 1 + sizeof("</sa11:Conditions>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->NotBefore, sizeof("NotBefore")-1);
  len += zx_attr_so_len(x->NotOnOrAfter, sizeof("NotOnOrAfter")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_AudienceRestrictionCondition_s* e;
      for (e = x->AudienceRestrictionCondition; e; e = (struct zx_sa11_AudienceRestrictionCondition_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_AudienceRestrictionCondition(c, e);
  }
  {
      struct zx_sa11_DoNotCacheCondition_s* e;
      for (e = x->DoNotCacheCondition; e; e = (struct zx_sa11_DoNotCacheCondition_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_DoNotCacheCondition(c, e);
  }
  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:Condition")-1, zx_ns_tab+zx_xmlns_ix_sa11);


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Conditions", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Conditions) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Conditions")-1 + 1 + 2 + sizeof("Conditions")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->NotBefore, sizeof("NotBefore")-1);
  len += zx_attr_wo_len(x->NotOnOrAfter, sizeof("NotOnOrAfter")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_AudienceRestrictionCondition_s* e;
      for (e = x->AudienceRestrictionCondition; e; e = (struct zx_sa11_AudienceRestrictionCondition_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_AudienceRestrictionCondition(c, e);
  }
  {
      struct zx_sa11_DoNotCacheCondition_s* e;
      for (e = x->DoNotCacheCondition; e; e = (struct zx_sa11_DoNotCacheCondition_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_DoNotCacheCondition(c, e);
  }
  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Condition")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Conditions", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Conditions");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->NotBefore, " NotBefore=\"", sizeof(" NotBefore=\"")-1);
  p = zx_attr_so_enc(p, x->NotOnOrAfter, " NotOnOrAfter=\"", sizeof(" NotOnOrAfter=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_AudienceRestrictionCondition_s* e;
      for (e = x->AudienceRestrictionCondition; e; e = (struct zx_sa11_AudienceRestrictionCondition_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_AudienceRestrictionCondition(c, e, p);
  }
  {
      struct zx_sa11_DoNotCacheCondition_s* e;
      for (e = x->DoNotCacheCondition; e; e = (struct zx_sa11_DoNotCacheCondition_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_DoNotCacheCondition(c, e, p);
  }
  for (se = x->Condition; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:Condition", sizeof("sa11:Condition")-1, zx_ns_tab+zx_xmlns_ix_sa11);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Conditions>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Conditions", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Conditions) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Conditions", sizeof("Conditions")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->NotBefore, "NotBefore=\"", sizeof("NotBefore=\"")-1);
  p = zx_attr_wo_enc(p, x->NotOnOrAfter, "NotOnOrAfter=\"", sizeof("NotOnOrAfter=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Conditions", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Conditions) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Conditions(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Conditions(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Conditions) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Conditions(struct zx_ctx* c, struct zx_sa11_Conditions_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Conditions(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Conditions(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_DoNotCacheCondition
#define EL_STRUCT zx_sa11_DoNotCacheCondition_s
#define EL_NS     sa11
#define EL_TAG    DoNotCacheCondition

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_DoNotCacheCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:DoNotCacheCondition")-1 + 1 + sizeof("</sa11:DoNotCacheCondition>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:DoNotCacheCondition", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_DoNotCacheCondition) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("DoNotCacheCondition")-1 + 1 + 2 + sizeof("DoNotCacheCondition")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:DoNotCacheCondition", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_DoNotCacheCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:DoNotCacheCondition");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:DoNotCacheCondition>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:DoNotCacheCondition", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_DoNotCacheCondition) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "DoNotCacheCondition", sizeof("DoNotCacheCondition")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:DoNotCacheCondition", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_DoNotCacheCondition) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_DoNotCacheCondition(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_DoNotCacheCondition(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_DoNotCacheCondition) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_DoNotCacheCondition(struct zx_ctx* c, struct zx_sa11_DoNotCacheCondition_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_DoNotCacheCondition(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_DoNotCacheCondition(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_Evidence
#define EL_STRUCT zx_sa11_Evidence_s
#define EL_NS     sa11
#define EL_TAG    Evidence

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Evidence) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Evidence")-1 + 1 + sizeof("</sa11:Evidence>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:AssertionIDReference")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Assertion(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Evidence", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Evidence) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Evidence")-1 + 1 + 2 + sizeof("Evidence")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("AssertionIDReference")-1);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Assertion(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Evidence", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Evidence");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->AssertionIDReference; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:AssertionIDReference", sizeof("sa11:AssertionIDReference")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_sa11_Assertion_s* e;
      for (e = x->Assertion; e; e = (struct zx_sa11_Assertion_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Assertion(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Evidence>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Evidence", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Evidence) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Evidence", sizeof("Evidence")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Evidence", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Evidence) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Evidence(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Evidence(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Evidence) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Evidence(struct zx_ctx* c, struct zx_sa11_Evidence_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Evidence(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Evidence(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_NameIdentifier
#define EL_STRUCT zx_sa11_NameIdentifier_s
#define EL_NS     sa11
#define EL_TAG    NameIdentifier

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_NameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:NameIdentifier")-1 + 1 + sizeof("</sa11:NameIdentifier>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->Format, sizeof("Format")-1);
  len += zx_attr_so_len(x->NameQualifier, sizeof("NameQualifier")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:NameIdentifier", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_NameIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("NameIdentifier")-1 + 1 + 2 + sizeof("NameIdentifier")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Format, sizeof("Format")-1);
  len += zx_attr_wo_len(x->NameQualifier, sizeof("NameQualifier")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:NameIdentifier", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_NameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:NameIdentifier");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->Format, " Format=\"", sizeof(" Format=\"")-1);
  p = zx_attr_so_enc(p, x->NameQualifier, " NameQualifier=\"", sizeof(" NameQualifier=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:NameIdentifier>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:NameIdentifier", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_NameIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "NameIdentifier", sizeof("NameIdentifier")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Format, "Format=\"", sizeof("Format=\"")-1);
  p = zx_attr_wo_enc(p, x->NameQualifier, "NameQualifier=\"", sizeof("NameQualifier=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:NameIdentifier", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_NameIdentifier) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_NameIdentifier(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_NameIdentifier(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_NameIdentifier) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_NameIdentifier(struct zx_ctx* c, struct zx_sa11_NameIdentifier_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_NameIdentifier(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_NameIdentifier(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_Subject
#define EL_STRUCT zx_sa11_Subject_s
#define EL_NS     sa11
#define EL_TAG    Subject

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_Subject) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:Subject")-1 + 1 + sizeof("</sa11:Subject>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_NameIdentifier(c, e);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_SubjectConfirmation(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Subject", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_Subject) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Subject")-1 + 1 + 2 + sizeof("Subject")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_NameIdentifier(c, e);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_SubjectConfirmation(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:Subject", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:Subject");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_NameIdentifier_s* e;
      for (e = x->NameIdentifier; e; e = (struct zx_sa11_NameIdentifier_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_NameIdentifier(c, e, p);
  }
  {
      struct zx_sa11_SubjectConfirmation_s* e;
      for (e = x->SubjectConfirmation; e; e = (struct zx_sa11_SubjectConfirmation_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_SubjectConfirmation(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:Subject>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Subject", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_Subject) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Subject", sizeof("Subject")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:Subject", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_Subject) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_Subject(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_Subject(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_Subject) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_Subject(struct zx_ctx* c, struct zx_sa11_Subject_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_Subject(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_Subject(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_SubjectConfirmation
#define EL_STRUCT zx_sa11_SubjectConfirmation_s
#define EL_NS     sa11
#define EL_TAG    SubjectConfirmation

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_SubjectConfirmation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:SubjectConfirmation")-1 + 1 + sizeof("</sa11:SubjectConfirmation>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->ConfirmationMethod; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:ConfirmationMethod")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  for (se = x->SubjectConfirmationData; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("sa11:SubjectConfirmationData")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_SO_ds_KeyInfo(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:SubjectConfirmation", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_SubjectConfirmation) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectConfirmation")-1 + 1 + 2 + sizeof("SubjectConfirmation")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->ConfirmationMethod; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("ConfirmationMethod")-1);
  for (se = x->SubjectConfirmationData; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("SubjectConfirmationData")-1);
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_WO_ds_KeyInfo(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:SubjectConfirmation", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:SubjectConfirmation");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->ConfirmationMethod; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:ConfirmationMethod", sizeof("sa11:ConfirmationMethod")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  for (se = x->SubjectConfirmationData; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "sa11:SubjectConfirmationData", sizeof("sa11:SubjectConfirmationData")-1, zx_ns_tab+zx_xmlns_ix_sa11);
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyInfo(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:SubjectConfirmation>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:SubjectConfirmation", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_SubjectConfirmation) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectConfirmation", sizeof("SubjectConfirmation")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:SubjectConfirmation", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_SubjectConfirmation) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_SubjectConfirmation(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_SubjectConfirmation(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_SubjectConfirmation) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_SubjectConfirmation(struct zx_ctx* c, struct zx_sa11_SubjectConfirmation_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_SubjectConfirmation(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_SubjectConfirmation(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_SubjectLocality
#define EL_STRUCT zx_sa11_SubjectLocality_s
#define EL_NS     sa11
#define EL_TAG    SubjectLocality

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_SubjectLocality) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:SubjectLocality")-1 + 1 + sizeof("</sa11:SubjectLocality>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  len += zx_attr_so_len(x->DNSAddress, sizeof("DNSAddress")-1);
  len += zx_attr_so_len(x->IPAddress, sizeof("IPAddress")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:SubjectLocality", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_SubjectLocality) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectLocality")-1 + 1 + 2 + sizeof("SubjectLocality")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->DNSAddress, sizeof("DNSAddress")-1);
  len += zx_attr_wo_len(x->IPAddress, sizeof("IPAddress")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:SubjectLocality", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:SubjectLocality");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);

  p = zx_attr_so_enc(p, x->DNSAddress, " DNSAddress=\"", sizeof(" DNSAddress=\"")-1);
  p = zx_attr_so_enc(p, x->IPAddress, " IPAddress=\"", sizeof(" IPAddress=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:SubjectLocality>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:SubjectLocality", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_SubjectLocality) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectLocality", sizeof("SubjectLocality")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->DNSAddress, "DNSAddress=\"", sizeof("DNSAddress=\"")-1);
  p = zx_attr_wo_enc(p, x->IPAddress, "IPAddress=\"", sizeof("IPAddress=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:SubjectLocality", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_SubjectLocality) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_SubjectLocality(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_SubjectLocality(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_SubjectLocality) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_SubjectLocality(struct zx_ctx* c, struct zx_sa11_SubjectLocality_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_SubjectLocality(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_SubjectLocality(c, x, buf ), buf, len);
}






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

#define EL_NAME   sa11_SubjectStatement
#define EL_STRUCT zx_sa11_SubjectStatement_s
#define EL_NS     sa11
#define EL_TAG    SubjectStatement

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_sa11_SubjectStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<sa11:SubjectStatement")-1 + 1 + sizeof("</sa11:SubjectStatement>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_SO_sa11_Subject(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:SubjectStatement", len);
  return len;
}

/* FUNC(zx_LEN_WO_sa11_SubjectStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SubjectStatement")-1 + 1 + 2 + sizeof("SubjectStatement")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  len += zx_LEN_WO_sa11_Subject(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "sa11:SubjectStatement", len);
  return len;
}

/* FUNC(zx_ENC_SO_sa11_SubjectStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<sa11:SubjectStatement");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_sa11, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_sa11_Subject_s* e;
      for (e = x->Subject; e; e = (struct zx_sa11_Subject_s*)e->gg.g.n)
	  p = zx_ENC_SO_sa11_Subject(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</sa11:SubjectStatement>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:SubjectStatement", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_sa11_SubjectStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SubjectStatement", sizeof("SubjectStatement")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "sa11:SubjectStatement", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_sa11_SubjectStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_sa11_SubjectStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_sa11_SubjectStatement(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_sa11_SubjectStatement) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_sa11_SubjectStatement(struct zx_ctx* c, struct zx_sa11_SubjectStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_sa11_SubjectStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_sa11_SubjectStatement(c, x, buf ), buf, len);
}




/* EOF -- c/zx-sa11-enc.c */