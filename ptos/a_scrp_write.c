/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short scrp_write(const char *path) { return mt_scrp_write(path,&aes_global); }
