/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short objc_delete(OBJECT *tree, short object)
{ return mt_objc_delete(tree,object,&aes_global); }
