/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_set(short id, short field, short a, short b, short c, short d)
{
    return mt_wind_set(id, field, a, b, c, d, &aes_global);
}
