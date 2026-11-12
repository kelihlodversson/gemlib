/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD shel_envrn(char **result, const char *prefix) { return mt_shel_envrn(result,prefix,&aes_global); }
