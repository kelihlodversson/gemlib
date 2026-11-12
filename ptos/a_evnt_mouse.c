/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short evnt_mouse(short leave, short x, short y, short width, short height,
                 short *mx, short *my, short *buttons, short *modifiers)
{
    return mt_evnt_mouse(leave, x, y, width, height, mx, my, buttons, modifiers, &aes_global);
}
