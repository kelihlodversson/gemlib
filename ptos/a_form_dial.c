/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD form_dial(WORD kind, WORD sx, WORD sy, WORD sw, WORD sh, WORD x, WORD y, WORD w, WORD h)
{
    return mt_form_dial(kind,sx,sy,sw,sh,x,y,w,h,&aes_global);
}
