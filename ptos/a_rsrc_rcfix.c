/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD rsrc_rcfix(void *image) { return mt_rsrc_rcfix(image,&aes_global); }
