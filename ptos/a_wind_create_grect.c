/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_create_grect(short kind, const GRECT *rect)
{ return mt_wind_create_grect(kind,rect,&aes_global); }
