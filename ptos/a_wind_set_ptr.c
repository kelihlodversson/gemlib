/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_set_ptr(short id, short field, void *pointer)
{ return mt_wind_set_ptr(id,field,pointer,&aes_global); }
