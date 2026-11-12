/*
 * rectfunc.c - rectangle helpers
 *
 * Copyright (C) 2002-2019 The EmuTOS development team
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "portab.h"
#include "obdefs.h"
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
#include "rectfunc.h"


WORD rc_equal(const GRECT *p1, const GRECT *p2)
{
    if ((p1->g_x != p2->g_x) ||
        (p1->g_y != p2->g_y) ||
        (p1->g_w != p2->g_w) ||
        (p1->g_h != p2->g_h))
        return FALSE;

    return TRUE;
}
