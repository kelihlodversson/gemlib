/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short graf_watchbox(OBJECT *tree, short object, short in_state, short out_state)
{
    return mt_graf_watchbox(tree,object,in_state,out_state,&aes_global);
}
