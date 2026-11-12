/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD menu_ienable(OBJECT *tree, WORD item, WORD enable)
{ return mt_menu_ienable(tree,item,enable,&aes_global); }
