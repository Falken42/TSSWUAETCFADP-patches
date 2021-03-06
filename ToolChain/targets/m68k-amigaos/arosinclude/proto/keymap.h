#ifndef PROTO_KEYMAP_H
#define PROTO_KEYMAP_H

/*
    *** Automatically generated from 'keymap.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/keymap_protos.h>
#define NOLIBDEFINES
#else
#include <clib/keymap_protos.h>
#endif /* __VBCC__ */

#if !defined(KeymapBase) && !defined(__NOLIBBASE__) && !defined(__KEYMAP_NOLIBBASE__)
extern struct Library *KeymapBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(KEYMAP_NOLIBDEFINES)
#   include <defines/keymap.h>
#endif

#endif /* PROTO_KEYMAP_H */
