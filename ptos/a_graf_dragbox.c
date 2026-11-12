/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD graf_dragbox(WORD w, WORD h, WORD x, WORD y, WORD bx, WORD by, WORD bw, WORD bh, WORD *rx, WORD *ry)
{ return mt_graf_dragbox(w,h,x,y,bx,by,bw,bh,rx,ry,&aes_global); }
