/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_find(const char *name) { return mt_appl_find(name, &aes_global); }
