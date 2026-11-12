/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_calc(short type, short kind, short x, short y, short w, short h,
                short *ox, short *oy, short *ow, short *oh)
{
    return mt_wind_calc(type, kind, x, y, w, h, ox, oy, ow, oh, &aes_global);
}
