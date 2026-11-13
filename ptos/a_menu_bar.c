/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD menu_bar(OBJECT *tree, WORD show) { return mt_menu_bar(tree,show,&aes_global); }
