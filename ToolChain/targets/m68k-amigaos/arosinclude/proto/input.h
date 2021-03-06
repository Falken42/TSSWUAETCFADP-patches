#ifndef PROTO_INPUT_H
#define PROTO_INPUT_H

/*
    *** Automatically generated from 'input.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/input_protos.h>
#define NOLIBDEFINES
#else
#include <clib/input_protos.h>
#endif /* __VBCC__ */

#if !defined(InputBase) && !defined(__NOLIBBASE__) && !defined(__INPUT_NOLIBBASE__)
extern struct Device *InputBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(INPUT_NOLIBDEFINES)
#   include <defines/input.h>
#endif

#endif /* PROTO_INPUT_H */
