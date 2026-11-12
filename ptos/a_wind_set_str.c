/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_set_str(short id, short field, const char *text)
{
    return mt_wind_set_str(id,field,text,&aes_global);
}
