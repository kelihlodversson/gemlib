/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD menu_tnormal(OBJECT *tree, WORD item, WORD normal)
{ return mt_menu_tnormal(tree,item,normal,&aes_global); }
