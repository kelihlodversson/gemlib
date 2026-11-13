/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD menu_text(OBJECT *tree, WORD item, const char *text)
{ return mt_menu_text(tree,item,text,&aes_global); }
