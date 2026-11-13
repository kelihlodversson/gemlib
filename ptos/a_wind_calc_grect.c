/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short wind_calc_grect(short type, short kind, const GRECT *in, GRECT *out)
{ return mt_wind_calc_grect(type,kind,in,out,&aes_global); }
