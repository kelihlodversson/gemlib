/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_create(short kind, short x, short y, short w, short h)
{
    return mt_wind_create(kind, x, y, w, h, &aes_global);
}
