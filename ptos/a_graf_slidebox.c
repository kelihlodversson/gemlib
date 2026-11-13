/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD graf_slidebox(OBJECT *tree, WORD parent, WORD object, WORD vertical)
{ return mt_graf_slidebox(tree,parent,object,vertical,&aes_global); }
