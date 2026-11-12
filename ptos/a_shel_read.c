/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD shel_read(char *command, char *tail) { return mt_shel_read(command,tail,&aes_global); }
