/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD graf_mbox(WORD w, WORD h, WORD sx, WORD sy, WORD dx, WORD dy)
{ return mt_graf_mbox(w,h,sx,sy,dx,dy,&aes_global); }
