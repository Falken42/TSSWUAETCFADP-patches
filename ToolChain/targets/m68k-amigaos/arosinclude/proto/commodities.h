#ifndef PROTO_COMMODITIES_H
#define PROTO_COMMODITIES_H

/*
    *** Automatically generated from 'commodities.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/commodities_protos.h>
#define NOLIBDEFINES
#else
#include <clib/commodities_protos.h>
#endif /* __VBCC__ */

#if !defined(CxBase) && !defined(__NOLIBBASE__) && !defined(__COMMODITIES_NOLIBBASE__)
extern struct Library *CxBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(COMMODITIES_NOLIBDEFINES)
#   include <defines/commodities.h>
#endif

#endif /* PROTO_COMMODITIES_H */
