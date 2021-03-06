#ifndef PROTO_DOS_H
#define PROTO_DOS_H

/*
    *** Automatically generated from 'dos.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <dos/dos.h>
#include <inline/dos_protos.h>
#define NOLIBDEFINES
#else
#include <clib/dos_protos.h>
#endif /* __VBCC__ */

#if !defined(DOSBase) && !defined(__NOLIBBASE__) && !defined(__DOS_NOLIBBASE__)
extern struct DosLibrary *DOSBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(DOS_NOLIBDEFINES)
#   include <defines/dos.h>
#endif

#endif /* PROTO_DOS_H */
