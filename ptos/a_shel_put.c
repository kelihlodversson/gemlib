/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short shel_put(const char *buffer, short length) { return mt_shel_put(buffer,length,&aes_global); }
