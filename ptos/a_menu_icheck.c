/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD menu_icheck(OBJECT *tree, WORD item, WORD check)
{ return mt_menu_icheck(tree,item,check,&aes_global); }
