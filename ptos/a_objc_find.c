/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short objc_find(OBJECT *tree, short start, short depth, short mx, short my)
{ return mt_objc_find(tree,start,depth,mx,my,&aes_global); }
