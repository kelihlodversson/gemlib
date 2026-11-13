/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short shel_get(char *buffer, short length) { return mt_shel_get(buffer,length,&aes_global); }
