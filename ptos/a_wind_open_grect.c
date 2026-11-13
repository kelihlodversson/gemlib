/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_open_grect(short id, const GRECT *rect)
{ return mt_wind_open_grect(id,rect,&aes_global); }
