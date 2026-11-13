/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_write(short id, short length, void *buffer) { return mt_appl_write(id, length, buffer, &aes_global); }
