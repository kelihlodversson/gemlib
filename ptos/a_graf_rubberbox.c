/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD graf_rubberbox(WORD x, WORD y, WORD wmin, WORD hmin, WORD *w, WORD *h)
{ return mt_graf_rubberbox(x,y,wmin,hmin,w,h,&aes_global); }
