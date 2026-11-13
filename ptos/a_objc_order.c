/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short objc_order(OBJECT *tree, short object, short position)
{ return mt_objc_order(tree,object,position,&aes_global); }
