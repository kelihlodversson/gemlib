/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD shel_write(WORD mode, WORD graphical, WORD execution, const void *command, const char *tail)
{ return mt_shel_write(mode,graphical,execution,command,tail,&aes_global); }
