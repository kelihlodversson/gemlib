/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short form_center_grect(OBJECT *tree, GRECT *rect) { return mt_form_center_grect(tree,rect,&aes_global); }
