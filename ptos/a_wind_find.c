/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_find(short x, short y) { return mt_wind_find(x,y,&aes_global); }
