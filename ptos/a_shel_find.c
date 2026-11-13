/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD shel_find(char *path) { return mt_shel_find(path,&aes_global); }
