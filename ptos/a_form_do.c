/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD form_do(OBJECT *tree, WORD start) { return mt_form_do(tree,start,&aes_global); }
