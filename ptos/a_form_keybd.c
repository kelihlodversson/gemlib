/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short form_keybd(OBJECT *tree, short object, short proposed, short key,
                 short *next, short *remaining)
{
    return mt_form_keybd(tree,object,proposed,key,next,remaining,&aes_global);
}
