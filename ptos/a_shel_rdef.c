/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

void shel_rdef(char *command, char *directory) { mt_shel_rdef(command,directory,&aes_global); }
