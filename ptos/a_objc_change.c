/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD objc_change(OBJECT *tree, WORD object, WORD reserved, WORD x, WORD y, WORD w, WORD h, WORD state, WORD redraw)
{
    return mt_objc_change(tree,object,reserved,x,y,w,h,state,redraw,&aes_global);
}
