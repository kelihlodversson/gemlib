/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short objc_add(OBJECT *tree, short parent, short child)
{ return mt_objc_add(tree,parent,child,&aes_global); }
