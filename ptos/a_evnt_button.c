/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short evnt_button(short clicks, short mask, short state, short *mx, short *my,
                  short *buttons, short *modifiers)
{
    return mt_evnt_button(clicks, mask, state, mx, my, buttons, modifiers, &aes_global);
}
