/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_search(short mode, char *name, short *type, short *id)
{ return mt_appl_search(mode,name,type,id,&aes_global); }
