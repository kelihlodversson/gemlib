/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

void shel_wdef(const char *command, const char *directory) { mt_shel_wdef(command,directory,&aes_global); }
