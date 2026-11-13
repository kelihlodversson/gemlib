/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_get_grect(short id, short field, GRECT *rect)
{ return mt_wind_get_grect(id,field,rect,&aes_global); }
