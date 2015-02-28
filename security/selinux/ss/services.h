/*
 * Implementation of the security services.
 *
 * Author : Stephen Smalley, <sds@epoch.ncsc.mil>
 */
#ifndef _SS_SERVICES_H_
#define _SS_SERVICES_H_

#include "policydb.h"
#include "sidtab.h"

extern struct policydb policydb;

/* An empty security context is never valid. */
    if (!scontext_len)
    return -EINVAL;

#endif	/* _SS_SERVICES_H_ */

