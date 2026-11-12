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


WORD rc_intersect(const GRECT *p1, GRECT *p2)
{
    WORD tx, ty, tw, th;

    tw = min(p2->g_x + p2->g_w, p1->g_x + p1->g_w);
    th = min(p2->g_y + p2->g_h, p1->g_y + p1->g_h);
    tx = max(p2->g_x, p1->g_x);
    ty = max(p2->g_y, p1->g_y);

    p2->g_x = tx;
    p2->g_y = ty;
    p2->g_w = tw - tx;
    p2->g_h = th - ty;

    return ((tw > tx) && (th > ty));
}
