/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_control(short id, short mode, void *output)
{ return mt_appl_control(id,mode,output,&aes_global); }
