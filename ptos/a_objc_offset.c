/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short objc_offset(OBJECT *tree, short object, short *x, short *y)
{ return mt_objc_offset(tree,object,x,y,&aes_global); }
