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


BOOL inside(WORD x, WORD y, const GRECT *pt)
{
    if ((x >= pt->g_x) && (y >= pt->g_y) &&
        (x < pt->g_x+pt->g_w) && (y < pt->g_y+pt->g_h))
        return TRUE;
    else
        return FALSE;
}
