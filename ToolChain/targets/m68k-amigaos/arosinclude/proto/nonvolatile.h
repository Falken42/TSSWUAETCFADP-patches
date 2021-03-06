#ifndef PROTO_NONVOLATILE_H
#define PROTO_NONVOLATILE_H

/*
    *** Automatically generated from 'nonvolatile.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/nonvolatile_protos.h>
#define NOLIBDEFINES
#else
#include <clib/nonvolatile_protos.h>
#endif /* __VBCC__ */

#if !defined(nvBase) && !defined(__NOLIBBASE__) && !defined(__NONVOLATILE_NOLIBBASE__)
extern struct Library *nvBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(NONVOLATILE_NOLIBDEFINES)
#   include <defines/nonvolatile.h>
#endif

#endif /* PROTO_NONVOLATILE_H */
