/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD graf_shrinkbox(WORD sx, WORD sy, WORD sw, WORD sh, WORD x, WORD y, WORD w, WORD h)
{ return mt_graf_shrinkbox(sx,sy,sw,sh,x,y,w,h,&aes_global); }
