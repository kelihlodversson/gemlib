/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_exit(void)
{
    short result = mt_appl_exit(&aes_global);
    if (result) { gl_apid = -1; gl_ap_version = 0; }
    return result;
}
