/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short graf_mkstate(short *mx, short *my, short *buttons, short *modifiers)
{
    return mt_graf_mkstate(mx, my, buttons, modifiers, &aes_global);
}
