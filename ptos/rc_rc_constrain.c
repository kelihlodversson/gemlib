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


void rc_constrain(const GRECT *pc, GRECT *pt)
{
    if (pt->g_x < pc->g_x)
        pt->g_x = pc->g_x;
    if (pt->g_y < pc->g_y)
        pt->g_y = pc->g_y;
    if ((pt->g_x+pt->g_w) > (pc->g_x+pc->g_w))
        pt->g_x = (pc->g_x+pc->g_w) - pt->g_w;
    if ((pt->g_y+pt->g_h) > (pc->g_y+pc->g_h))
        pt->g_y = (pc->g_y+pc->g_h) - pt->g_h;
}
