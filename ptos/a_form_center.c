/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short form_center(OBJECT *tree, short *x, short *y, short *w, short *h)
{
    return mt_form_center(tree,x,y,w,h,&aes_global);
}
