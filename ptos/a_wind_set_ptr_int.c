/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_set_ptr_int(short id, short field, void *pointer, short value)
{ return mt_wind_set_ptr_int(id,field,pointer,value,&aes_global); }
