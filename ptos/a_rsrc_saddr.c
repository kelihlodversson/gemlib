/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD rsrc_saddr(WORD type, WORD index, void *address) { return mt_rsrc_saddr(type,index,address,&aes_global); }
