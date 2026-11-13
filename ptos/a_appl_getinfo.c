/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_getinfo(short type, short *a, short *b, short *c, short *d)
{
    return mt_appl_getinfo(type, a, b, c, d, &aes_global);
}
