/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_get_int(short id, short field, short *value)
{ return mt_wind_get_int(id,field,value,&aes_global); }
