/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short rsrc_obfix(OBJECT *tree, short object) { return mt_rsrc_obfix(tree,object,&aes_global); }
