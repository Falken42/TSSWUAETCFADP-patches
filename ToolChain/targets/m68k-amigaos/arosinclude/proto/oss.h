#ifndef PROTO_OSS_H
#define PROTO_OSS_H

/*
    *** Automatically generated from 'oss.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/oss_protos.h>
#define NOLIBDEFINES
#else
#include <clib/oss_protos.h>
#endif /* __VBCC__ */

#if !defined(OSSBase) && !defined(__NOLIBBASE__) && !defined(__OSS_NOLIBBASE__)
extern struct Library *OSSBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(OSS_NOLIBDEFINES)
#   include <defines/oss.h>
#endif

#endif /* PROTO_OSS_H */
