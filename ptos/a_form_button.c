/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short form_button(OBJECT *tree, short object, short clicks, short *next)
{
    return mt_form_button(tree,object,clicks,next,&aes_global);
}
